#include "sprite.h"
#include "gif.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QFileDialog>
#include <QTextStream>
#include <QPainter>
#include <QDebug>

/**
 * Constructor.
 */
sprite::sprite()
{
    activeFrame = 0;
    QImage firstImage(32, 32, QImage::Format_ARGB32);
    firstImage.fill(QColor(255,255,255,0));
    sprites.push_back(firstImage);
    spriteIndexLoaded = -1;
    pixMapIndex = 0;
}

/*******************************************************
 ****************** PRIVATE FUNCTIONS ******************
 *******************************************************/
/**
 * Updates the active image in the sprites list.
 * @param store - The image to store/update
 */
void sprite::updateActiveImage(QImage &store) {
    sprites[activeFrame] = store;
}


/*******************************************************
 ************************ SLOTS ************************
 *******************************************************/
//void sprite::zoomIn(){

//}


//void sprite::zoomOut(){

//}


/**
 * Load a saved project form a location.
 * @param filepath - Location of the file
 */
void sprite::load(QString filepath) {
    sprites.clear();

    //Tell the preview list to be empty


    QString filetype = filepath.split('.')[filepath.split('.').length() -1 ];
    if (filetype.toLower() == "png" ) {
        QImage loaded;
        QString filename = filepath.split('/')[filepath.split('/').size()-1];
        filename = filename.remove(filename.size()-4, 4);
        filename = filename.split('_')[filename.split('_').size()-1];
        int frameWidth = filename.split('x')[0].toInt();
        if (loaded.load(filepath, "PNG")) {
            for (int i = 0; i < loaded.width()/frameWidth; i++) {
                QImage frame = loaded.copy(i*frameWidth, 0, frameWidth, loaded.height());
                sprites.push_back(frame);
                emit updateList(sprites, i+1);
            }
            QImage blank(sprites[0].width(), sprites[0].height(), QImage::Format_RGB32);
            blank.fill(QColor(255, 255, 255, 0));
            sprites.push_back(blank);
            activeFrame = sprites.length() - 1;
        }
        // emit error message?
    }
    else if (filetype.toLower() == "ssp") {
        QFile file(filepath);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream reader(&file);

            //Read height and width
            int height;
            int width;
            if (!reader.atEnd()) {
                QString dimensions = reader.readLine();
                QRegularExpression dimensionCheck("^\\d+ \\d+$");
                if (!dimensionCheck.match(dimensions).hasMatch())
                    return;
                height = dimensions.split(' ')[0].toInt();
                width = dimensions.split(' ')[1].toInt();
            }

            //Retrieve the number of sprites
            if (reader.atEnd())
                return;
            QString spriteNum = reader.readLine();
            QRegularExpression spriteNumCheck("^\\d+$");
            if (!spriteNumCheck.match(spriteNum).hasMatch())
                return;
            int numSprites = spriteNum.toInt();

            //Initialize QImages
            for (int frame = 1; frame < numSprites; frame++) {
                QImage newImg(width, height, QImage::Format_ARGB32);
                newImg.fill(QColor(255,255,255,0));
                sprites.push_back(newImg);
            }


            QImage blank(sprites[0].width(), sprites[0].height(), QImage::Format_ARGB32);
            blank.fill(QColor(255, 255, 255, 0));
            sprites.push_back(blank);
            activeFrame = sprites.length() - 1;

            QRegularExpression pixelCheck("^\\d+ \\d+ \\d+ \\d+$");
            //Fill images
            for (int frame = 0; frame < numSprites; frame++) {
                if (reader.atEnd())
                    return;
                reader.readLine();
                for (int i = 0; i < height; i++)
                    for (int j = 0; j < width; j++) {
                        QString pixelDefinition = reader.readLine();
                        if (!pixelCheck.match(pixelDefinition).hasMatch())
                            return;
                        int R = pixelDefinition.split(' ')[0].toInt();
                        int G = pixelDefinition.split(' ')[1].toInt();
                        int B = pixelDefinition.split(' ')[2].toInt();
                        int A = pixelDefinition.split(' ')[3].toInt();
                        sprites[frame].setPixelColor(j, i, QColor(R, G, B, A));
                    }
                emit updateList(sprites, frame+1);
            }
        }

    }
}
/**
 * Save the current project
 * @param fullFilename - File name/path
 * @param activeImage - Current image to save.
 */
void sprite::save(QString fullFilename, QImage activeImage) {
    //add active frame to list
        //updateActiveImage(activeImage);
        QFile file(fullFilename);
        //open the file if it does not exist. If it does it will be overwritten.
        if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
            QTextStream out(&file);
            //all ascii is human readable.
            out << sprites[0].height() << " " << sprites[0].width() << "\n"
                                       << QString::number(sprites.length()) << "\n";
            for (int i = 0; i < sprites.length() - 1; i++){
                //frame number
                out << QString::number(i) << "\n";
                //for loops for every frame.
                for (int n = 0; n < sprites[i].height(); n++){ //row
                    for (int m = 0; m < sprites[i].width(); m++){ //colmn
                        QColor pixColor = sprites[i].pixelColor(m, n);
                    out << QString::number(pixColor.red()) << " "
                        << QString::number(pixColor.green()) << " "
                        << QString::number(pixColor.blue()) << " "
                        << QString::number(pixColor.alpha()) << "\n";
                    }
                }
            }
        }
}


/**
 * Exports the frames to PNG
 * @param fullFilename - File name/path
 * @param activeImage - The active image to save to PNG
 */
void sprite::export_To_PNG(QString fullFilename, QImage activeImage){
    updateActiveImage(activeImage);
    //The file size needed for load is set staticly for now.
    QImage framesToPNG(sprites.length() * sprites[0].width(), sprites[0].height(), QImage::Format_ARGB32);
    QPainter painter;
    painter.begin(&framesToPNG);
    painter.setCompositionMode(QPainter::CompositionMode_Source);
    //variables for image positioning.
    int imageWidth = 0;
    int imageHeight = 0;
    for(int i = 0; i < sprites.length(); i++){
        //qDebug() << "derp";
        painter.drawImage(imageWidth,imageHeight, sprites[i],0,0,0,0,Qt::NoFormatConversion);
        imageWidth += sprites[i].width();
        //imageHeight += sprites[i].height();
    }
    painter.end();
    if(!framesToPNG.save(fullFilename, 0, -1)){
        //emit error message.
    }
}

/**
 * Adds image to canvas.
 * @param oldImg - Old active image that needs to be stored
 */
void sprite::add_Frame(QImage oldImg) {
    //qDebug() << "Active Frame: " << activeFrame;
    updateActiveImage(oldImg);
    QImage newImg(sprites[0].width(), sprites[0].height(), QImage::Format_ARGB32);
    newImg.fill(QColor(255,255,255,0));
    sprites.push_back(newImg);
    activeFrame = sprites.length()-1;

    emit updateList(sprites, activeFrame);
    //Updates canvas
    emit updateFrame(newImg);
}

/**
 * Update the current active frame
 * @param image - Image to set as active
 * @param newIndex - New active index
 */
void sprite::update_Active_Frame(QImage image, int newIndex) {
    updateActiveImage(image);
    activeFrame = newIndex;
    emit(updateFrame(sprites[activeFrame]));
    emit updateList(sprites, activeFrame);
}


/**
 * Exports the file to GIF
 * @param fullFilename - File name/path
 * @param activeImage - The active image to save to GIF
 */
void sprite::export_To_GIF(QString fullFilename, QImage activeImage){
    updateActiveImage(activeImage);
    GifWriter writer;
    //convert QString to char array.
    QByteArray toCharArray = fullFilename.toLatin1();
    const char* filePath = toCharArray.data();
    GifBegin(&writer, filePath, activeImage.width(), activeImage.height(), 1, 8, false);
    for(int i = 0; i < sprites.length(); i++){
        //Invert RGB to BGR
        QImage imageEightBit = sprites[i].rgbSwapped();
        //Create a char* point to the first pixel in memory.
        const uint8_t* image = imageEightBit.bits();
        GifWriteFrame(&writer, image, activeImage.width(), activeImage.height(),1,8, false);
    }
    GifEnd(&writer);
}

void sprite::onion_Skin(){

    if(sprites.count() < 2)
        return;
    qDebug() << "Length: " << sprites.length();
    QImage image = sprites[sprites.length()-2];
    emit onion_skin_frame(image);
}



/**
 * Replaces (edits) a frame that was already created.
 * @param pixmap - The updates that need to be added to a frame
 * @param index - The index of where the frame is at in the list
 */
void sprite::on_addEditFrame(QPixmap pixmap, int index)
{
    sprites.replace(index,pixmap.toImage());
}

/**
 * Update the preview box with the latest image.
 * @param indx - Index of the frame in the list
 */
void sprite::on_preview_label_clicked(int indx)
{
    QImage image = sprites[indx];
    emit updateFrame(image);
}

/**
 *
 * @param indx
 */
void sprite::on_deleteIndex(int indx)
{
    --activeFrame;
    sprites.remove(indx);
}

void sprite::on_playButtonClicked()
{
    emit animationVector(sprites);
}

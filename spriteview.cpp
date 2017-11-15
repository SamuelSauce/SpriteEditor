#include <QDesktopWidget>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QPushButton>
#include <QColorDialog>
#include <QInputDialog>
#include "previewlabel.h"
#include "spriteview.h"
#include "ui_spriteview.h"
#include "sprite.h"
#include "QShortcut"

/**
 * Constructor.
 * @param sprObject - The model for the MVC design
 * @param parent - Parent widget
 */
SpriteView::SpriteView(sprite &sprObject, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SpriteView)
{
    ui->setupUi(this);
    init();
    centralWidget()->setStyleSheet("QToolTip { color: #fff; background-color: rgba(0,0,0,0); border: none; }");
    connect(&sprObject, &sprite::updateFrame, ui->canvas, &SpriteCanvas::set_Image);
    connect(this, &SpriteView::load, &sprObject, &sprite::load);
    connect(this, &SpriteView::save, &sprObject, &sprite::save);
    connect(this, &SpriteView::exportToPNG, &sprObject, &sprite::export_To_PNG);
    connect(this, &SpriteView::exportToGIF, &sprObject, &sprite::export_To_GIF);
    connect(this, &SpriteView::onionSkin, &sprObject, &sprite::onion_Skin);
    connect(&sprObject, &sprite::setOnionSkin, ui->canvas, &SpriteCanvas::set_Image);
    connect(&sprObject, &sprite::updateList, this, &SpriteView::update_List);

    connect(this, &SpriteView::addFrame, &sprObject, &sprite::add_Frame);

    connect(ui->canvas,&SpriteCanvas::updatePreview,this,&SpriteView::update_Frame_Preview);

    //connect(ui->canvas,&SpriteCanvas::deleteKeyPressed,this,&SpriteView::on_deleteKey_pressed);



    //connect(ui->blankCanvasButton, &QPushButton::clicked,&canvas,&SpriteCanvas::clearImage);

    // Undo connections to sprite canvas
    connect(ui->undoButton, &QPushButton::clicked, ui->canvas, &SpriteCanvas::undo);
    connect(ui->canvas, &SpriteCanvas::enableUndoButton, this, &SpriteView::enable_Undo_Button);

    // Keyboard Shortcuts
    // CTRL + Z -> Undo
    QShortcut *undoShortcut = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Z), this);
    connect(undoShortcut, &QShortcut::activated, ui->canvas, &SpriteCanvas::undo);
    // CTRL + N -> New/Add Frame
    QShortcut *newFrameShortcut = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_N), this);
    connect(newFrameShortcut, &QShortcut::activated, this, &SpriteView::on_addButton_clicked);
    // CTRL + S -> Save Project
    QShortcut *saveShortcut = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_S), this);
    connect(saveShortcut, &QShortcut::activated, this, &SpriteView::on_saveButton_clicked);


    connect(this,&SpriteView::addEditFrame,&sprObject,&sprite::on_addEditFrame);

    connect(ui->canvas,&SpriteCanvas::deleteKeyPressed,this,&SpriteView::on_deleteKey_pressed);
    connect(this,&SpriteView::previewIndex,&sprObject,&sprite::on_preview_label_clicked);
    connect(this,&SpriteView::deleteIndex,&sprObject,&sprite::on_deleteIndex);
    connect(this,&SpriteView::playButtonClicked,&sprObject,&sprite::on_playButtonClicked);
    connect(&sprObject,&sprite::animationVector,this,&SpriteView::on_animationVector);
    connect(&sprObject,&sprite::onion_skin_frame,ui->canvas,&SpriteCanvas::on_onion_skin_frame);
    connect(this,&SpriteView::clear_onion_skin,ui->canvas,&SpriteCanvas::on_onion_skin_clear);
}

/**
 * Destructor for the sprite view.
 */
SpriteView::~SpriteView()
{
    delete ui;
}

/*******************************************************
 ****************** PRIVATE FUNCTIONS ******************
 *******************************************************/
/**
 * Inititalize the componenets.
 */
void SpriteView::init()
{
    ui->canvas->setFocus();

    QPixmap xIcon = QPixmap(":/icons/Images/Icons/paint-palette (1).png");
    QPainter painter(&xIcon);
    painter.setCompositionMode(QPainter::CompositionMode_SourceIn);
    painter.fillRect(xIcon.rect(), Qt::red);
    painter.end();
    ui->colorButton->setIcon(QIcon(xIcon));
    QWidget::setMouseTracking(true);
    pixMapIndex = 0;
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    spriteIndexLoaded = -1;

    ui->canvas->drawingSquare = false;
    ui->canvas->drawingPencil = true;
    ui->canvas->drawingEraser = false;
}

//*
// * Helper panel to rename panel
// * @param idx - Index of the starting panel

void SpriteView::renamePanels(int idx)
{
    for(int i = idx; i < ui->horizontalLayout->count() - 1; i++)
    {
        qobject_cast<QLabel*>(ui->horizontalLayout->itemAt(i)->widget())->setObjectName(QString::number(i));
    }
}

//*
// * Helper function to delete preview list
void SpriteView::deletePreviewList()
{
    while(ui->horizontalLayout->count() > 1) {
        qDebug() << ui->horizontalLayout->count();
        QWidget* widget = ui->horizontalLayout->itemAt(0)->widget();
        ui->horizontalLayout->removeWidget(widget);
        delete widget;
    }
}

//void SpriteView::deleteOnion(QImage& activeImage){
//    for(int i = 0; i < activeImage.width(); i++){
//        for(int j = 0; j < activeImage.height(); j++){
//            QColor pixelColor(activeImage.pixel(i,j));
//            if(pixelColor.alpha() != 255)
//                qDebug() << pixelColor.alpha();
//            if(pixelColor.alpha() != 255){
//                qDebug() << "herp";
//                pixelColor.setAlpha(0);
//                activeImage.setPixel(i, j, pixelColor.rgba());
//            }
//        }
//    }
//}


/*******************************************************
 ************************ SLOTS ************************
 *******************************************************/

/**
 * Updates the frame list (with a preview) shown on the UI.
 * @param frames - The frames to show on UI
 * @param selectedFrame - Current selected frame by the user
 */
void SpriteView::update_List(QVector<QImage> frames, int selectedFrame) {

    qDebug() << "Active frame: " << selectedFrame;

    PreviewLabel* label = new PreviewLabel(ui->scrollAreaWidgetContents);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
    label->setMinimumSize(110,75);
    label->setMaximumSize(110,75);
    label->setSizePolicy(sizePolicy);
    label->setPixmap(QPixmap::fromImage(frames[selectedFrame - 1].scaled(110,75)));
    label->setScaledContents(true);
    label->setFocusPolicy(Qt::ClickFocus);
    label->setObjectName(QString::number(selectedFrame - 1));

    connect(label,&PreviewLabel::clicked,this,&SpriteView::preview_Panel_Clicked);

    ui->horizontalLayout->insertWidget(selectedFrame - 1,label);
    ui->scrollAreaWidgetContents->setMinimumSize(ui->scrollAreaWidgetContents->width()+100,ui->scrollAreaWidgetContents->height());
    if(frames.size() == 5)
    {
        ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    }

//    pixmapPreviews.append(*ui->previewFrame->pixmap());
//    populatePreviewPanels();

}



/**
 * Update the current selected frame everytime mouse press is released.
 * @param image - Updated image
 */
void SpriteView::update_Frame_Preview(const QImage *image)
{
   ui->previewFrame->setPixmap(QPixmap::fromImage(*image));
}

/**
 * Add frame button action. Create a new image and add it to the canvas.
 */
void SpriteView::on_addButton_clicked()
{
    qDebug()<< "SpriteIndexLoaded: " << spriteIndexLoaded;
    ui->onionButton->setChecked(false);
    //QImage temp(ui->canvas->getImage());
    //deleteOnion(temp);
    if(spriteIndexLoaded == -1){
        QImage currentImage = ui->canvas->getImage();
        emit addFrame(currentImage);
    }
    else
    {

        QPixmap editedPixmap = *ui->previewFrame->pixmap();
        qobject_cast<QLabel*>(ui->horizontalLayout->itemAt(spriteIndexLoaded)->widget())->setPixmap(editedPixmap);
        //pixmapPreviews.replace(spriteIndexLoaded,editedPixmap);
        emit addEditFrame(editedPixmap,spriteIndexLoaded);

        ui->canvas->clear_Image();

        spriteIndexLoaded = -1;
    }

    ui->canvas->clearUndoStack();
}

/**
 * Save button click action. Prompt the user for location and the name of the file.
 * Emit the user information to the model.
 */
void SpriteView::on_saveButton_clicked()
{
    //Save to .ssp
    //This only works with the image on canvas. We currently do not have a data structure for multiple frames.
    QString filePath = QFileDialog::getSaveFileName(this, tr("Save Project"), QDir::homePath(), tr("Spritesheet.png (*.png);;Animated.gif (*.gif);; Spritesheet.ssp (*.ssp)"));
    if(filePath.contains(".ssp")){
        qDebug() << filePath;
        emit save(filePath, ui->canvas->getImage());
    }
    else if(filePath.contains(".png")){
        emit exportToPNG(filePath,ui->canvas->getImage());
    }
    else if(filePath.contains(".gif")){
        emit exportToGIF(filePath, ui->canvas->getImage());
    }
}

/**
 * Color button action. Opens up the color picker and send the user selected color to the canvas.
 */
void SpriteView::on_colorButton_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white);
    QPixmap xIcon = QPixmap(":/icons/Images/Icons/paint-palette (1).png");

    QPainter painter(&xIcon);
    painter.setCompositionMode(QPainter::CompositionMode_SourceIn);
    painter.fillRect(xIcon.rect(), color);
    painter.end();

    //xIcon.fill(color);
    ui->colorButton->setIcon(QIcon(xIcon));
    ui->canvas->setPenColor(color);
}

/**
 * Erase button action. Enable the erase button in the canvas.
 */
void SpriteView::on_eraserButton_clicked()
{
    ui->canvas->drawingEraser = true;
    ui->canvas->drawingSquare = false;
    ui->canvas->drawingPencil = true;
    ui->canvas->filling = false;
}

/**
 * Draw square button action. Activate the draw sqare/rectangle in canvas so the user can draw.
 */
void SpriteView::on_drawSquare_clicked()
{
    ui->canvas->drawingSquare = false;
    ui->canvas->drawingSquare = true;
    ui->canvas->drawingPencil = false;
    ui->canvas->filling = false;
}

/**
 * Draw button action. Activate the pen in the canvas.
 */
void SpriteView::on_drawingButton_clicked()
{
    ui->canvas->drawingSquare = false;
    ui->canvas->drawingPencil = true;
    ui->canvas->drawingEraser = false;
    ui->canvas->filling = false;
}

/**
 * Blank button action. Erase everything on canvas. (Clear all)
 */
void SpriteView::on_blankCanvasButton_clicked()
{
    ui->canvas->clear_Image();
    ui->canvas->clearUndoStack();
}

/**
 * Open button action. Open the finder so the user can open up saved project.
 */
void SpriteView::on_openButton_clicked()
{
    QString filepath = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("PNG files (*.png);;Spritesheet project (*.ssp)"));
    QRegularExpression fileCheck("(.+_\\d+[xX]\\d+\\.[pP][nN][gG])|(.+\\.[sS]{2}[pP])");
    if (!fileCheck.match(filepath).hasMatch()) {
        QMessageBox::information(this, "Incorrect file format", "Please ensure file format is either [filename].ssp or [filename]_[width]x[height].png");
        return;
    }
    deletePreviewList();
    emit load(filepath);
}

/**
 * Focus in on the user selected frame in the prevew panel.
 */
void SpriteView::preview_Panel_Clicked()
{
    spriteIndexLoaded = sender()->objectName().toInt();
    qDebug() << "Index clicked: " << spriteIndexLoaded;
    emit previewIndex(spriteIndexLoaded);
    ui->canvas->setFocus();
}

/**
 * Helper function which enables/disables the undo button depending on if there is
 * anything to undo in on the canvas.
 * @param enable - True/False
 */
void SpriteView::enable_Undo_Button(bool enable) {
    ui->undoButton->setEnabled(enable);
}

/**
 * Deletes the currently focused frame.
 */
void SpriteView::on_deleteKey_pressed()
{
    if(spriteIndexLoaded == -1)
    {
        ui->canvas->clear_Image();
    }
    else
    {
        QWidget* widget = ui->horizontalLayout->itemAt(spriteIndexLoaded)->widget();
        ui->horizontalLayout->removeWidget(widget);
        delete widget;

        ui->scrollAreaWidgetContents->setMinimumSize(ui->scrollAreaWidgetContents->width()-100,ui->scrollAreaWidgetContents->height());
        //--pixMapIndex;
        ui->canvas->clear_Image();
        qDebug() << "removing: " << spriteIndexLoaded;
        emit deleteIndex(spriteIndexLoaded);
        //pixmapPreviews.remove(spriteIndexLoaded);
        renamePanels(spriteIndexLoaded);
        spriteIndexLoaded = -1;
    }
}

/**
 * Play button action. Open up another window to show animated view of the users project/frames.
 */
void SpriteView::on_playButton_clicked()
{
//    ui->blankCanvasButton->blockSignals(true);
//    ui->addButton->blockSignals(true);
    emit playButtonClicked();

}


/**
 * Fills in a shape with selected color paint.
 */
void SpriteView::on_paintBucketButton_clicked()
{
    ui->canvas->drawingSquare = false;
    ui->canvas->drawingPencil = false;
    ui->canvas->drawingEraser = false;
    ui->canvas->filling = true;
}

void SpriteView::on_animationVector(QVector<QImage> sprites)
{
    AnimationDialog dialog(sprites,this);
    dialog.exec();
}

void SpriteView::on_onionButton_clicked()
{
    if(spriteIndexLoaded == -1){
        if(!ui->onionButton->isChecked())
        {
            emit clear_onion_skin();
        }
        else
        {
            emit onionSkin();
        }
    }

}

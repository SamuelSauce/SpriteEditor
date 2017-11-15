#include "spritecanvas.h"
#include <QInputDialog>
#include <QDebug>
#include <QQueue>
using namespace std;

/**
 * Constructor.
 * @param parent - Parent widget
 */
SpriteCanvas::SpriteCanvas(QWidget *parent)
  : QWidget(parent)
{

    bool ok;
    gridSize = QInputDialog::getInt(this, tr("Pixel image size"),tr("Grid Size:"), 32, 32, 128, 32, &ok);

    image = QImage(gridSize, gridSize, QImage::Format_ARGB32);
    onionSkinImage = QImage(gridSize, gridSize, QImage::Format_ARGB32);
    //unionSkinImage = QImage(grideSize, gridSize, QImage::Format_ARGB32);
    drawingPencil = true;
    scribbling = false;

    myPenWidth = 1;
    myPenColor = Qt::red;
    QWidget::setMouseTracking(true);

    lastPoint = QPoint(0,0);
    lastHighlightedColor = QColor(0,0,0,0);

    clear_Image();
}

/*******************************************************
 ****************** PUBLIC FUNCTIONS *******************
 *******************************************************/
/**
 * Sets the pen width.
 * @param newWidth - Size of the pen
 */
void SpriteCanvas::setPenWidth(int newWidth)
{
    myPenWidth = newWidth;
}

/**
 * Sets the pen color.
 * @param newColor - Color
 */
void SpriteCanvas::setPenColor(const QColor &newColor)
{
    myPenColor = newColor;
}

/**
 * Sets the grid size.
 * @param newGridSize - Grid size
 */
void SpriteCanvas::setGridSize(int newGridSize)
{
    newGridSize = gridSize;
}

/**
 * Clear the undo stack, delete the undo_cached image.
 */
void SpriteCanvas::clearUndoStack() {
    lastHighlighted = QPoint(0,0);
    lastHighlightedColor = QColor(0,0,0,0);
    currentColor = QColor(0,0,0,0);
    undo_stack.clear();
    undo_cache = QImage();
    emit enableUndoButton(false);
}

/**
 * Returns the current image on canvas.
 * @return - Image
 */
QImage SpriteCanvas::getImage(){
    return image;
}

/*******************************************************
 ****************** PRIVATE FUNCTIONS ******************
 *******************************************************/
/**
 * Highlight the point where the mouse is hovering.
 * @param currentPoint - Position on the canvas.
 */
void SpriteCanvas::highlightPosition(const QPoint &currentPoint)
{
    QPainter painter(&image);

    if(lastPoint != currentPoint)
    {
        image.setPixelColor(lastPoint,lastHighlightedColor);
        painter.setPen(QPen(QColor(250,250,250,150), myPenWidth, Qt::SolidLine, Qt::RoundCap,
                                   Qt::RoundJoin));
        painter.drawPoint(currentPoint);

        lastHighlightedColor = currentColor;
        lastPoint = currentPoint;
        update();
        //emit updatePreview(&tempImage);
    }
}

/**
 * Draws a box/square.
 * @param releasePoint - The ending cordinates.
 */
void SpriteCanvas::drawBox(const QPoint &releasePoint)
{
    QPainter painter(&image);

    painter.setPen(QPen(myPenColor, myPenWidth, Qt::SolidLine, Qt::RoundCap,
                       Qt::RoundJoin));

    painter.drawRect(QRect(lastPoint,QPoint(releasePoint.x()-1,releasePoint.y()-1)));
    update();
    //emit updatePreview(&image);
}

/**
 * Draws a line
 * @param endPoint - The end position on canvas
 */
void SpriteCanvas::drawLineTo(const QPoint &endPoint)
{
    QPainter painter(&image);
    if(drawingEraser)
    {
        image.setPixelColor(endPoint,QColor(0,0,0,0));
        lastHighlightedColor = QColor(0,0,0,0);
    }
    else
    {
        painter.setPen(QPen(myPenColor, myPenWidth, Qt::SolidLine, Qt::RoundCap,
                           Qt::RoundJoin));
        painter.drawLine(lastPoint, endPoint);
        lastHighlightedColor = myPenColor;
    }


    modified = true;
    update();

    lastPoint = endPoint;
}

void SpriteCanvas::fillPath(const QPoint &currentPoint)
{
    if(lastHighlightedColor == myPenColor)
    {
        return;
    }
    QPainter painter(&image);
    painter.setPen(QPen(myPenColor, myPenWidth, Qt::SolidLine, Qt::RoundCap,
                       Qt::RoundJoin));
    painter.drawPoint(currentPoint);
    update();

    QQueue<QPoint> pixels;
    pixels.enqueue(currentPoint);
    while(pixels.isEmpty() == 0)
    {

       QPoint newPoint = pixels.dequeue();

       QPoint left((newPoint.x()-1), newPoint.y());
       if(left.x() >-1 && left.x() < image.width() && image.pixelColor(left) == lastHighlightedColor)
       {
           pixels.enqueue(left);
           painter.drawPoint(left);
           update();
       }

       QPoint right((newPoint.x()+1), newPoint.y());
       if(right.x() > -1 && right.x() < image.width() && image.pixelColor(right) == lastHighlightedColor)
       {
           pixels.enqueue(right);
           painter.drawPoint(right);
           update();
       }

       QPoint up((newPoint.x()), (newPoint.y()-1));
       if(up.y() > -1 && up.y() < image.height() && image.pixelColor(up) == lastHighlightedColor)
       {
           pixels.enqueue(up);
           painter.drawPoint(up);
           update();
       }

       QPoint down((newPoint.x()), (newPoint.y()+1));
       if(down.y() > -1 && down.y() < image.height() && image.pixelColor(down) == lastHighlightedColor)
       {
           pixels.enqueue(down);
           painter.drawPoint(down);
           update();
       }
    }
    lastHighlightedColor = myPenColor;
}

/**
 * Helper function to calculate point.
 * @param event - Mouse press event.
 * @return - The calculated point
 */
QPoint SpriteCanvas::calculatePoint(QMouseEvent *event)
{
    return QPoint((event->x()-3)/float(width()-6)*gridSize, (event->y()-3)/float(height()-6)*gridSize);
}


/*******************************************************
 ************************ SLOTS ************************
 *******************************************************/
/**
 * Create a new blank image replacing the old one.
 */
void SpriteCanvas::clear_Image()
{
    image.fill(QColor(255,255,255,0));
    onionSkinImage.fill(QColor(255,255,255,0));
    modified = true;
    update();
    QImage tempImage(image.scaled(131,91));
    emit updatePreview(&tempImage);
}

/**
 * Set the image of canvas.
 * @param newImage - The image to be set.
 */
void SpriteCanvas::set_Image(QImage &newImage) {
    clear_Image();
    image = QImage(newImage.scaled(gridSize, gridSize));
    setFocus();
    update();
    QImage tempImage(newImage.scaled(131,91));
    emit updatePreview(&tempImage);
    clearUndoStack();
    undo_stack.append(image.copy());
}

/**
 * Undoes the last thing that was drawn.
 */
void SpriteCanvas::undo() {
    undoWait = true;
    if (!undo_stack.isEmpty()) {
        undo_stack.removeLast();
        clear_Image();
        if (!undo_stack.isEmpty()) {
            image = undo_stack.last().copy();
        } else {
            if (!undo_cache.isNull()) {
                image = undo_cache.copy();
            }
            emit enableUndoButton(false);
        }
    }
    QImage tempImage(image.scaled(131,91));
    emit updatePreview(&tempImage);
}

void SpriteCanvas::on_onion_skin_frame(QImage & image)
{
    onionSkinImage = image;
    unsigned int rgb;

    for(int y=0;y<onionSkinImage.height();y++){
      for(int x=0;x<onionSkinImage.width();x++){
        rgb=onionSkinImage.pixel(x,y);
        if(rgb == 16777215)
        {
            continue;
        }
        onionSkinImage.setPixel(x,y,qRgba(qRed(rgb),qGreen(rgb),qBlue(rgb),120));

      }
    }

    update();
}

void SpriteCanvas::on_onion_skin_clear()
{
    onionSkinImage.fill(QColor(255,255,255,0));
    update();
}


/*******************************************************
 ********************** PROTECTED **********************
 *******************************************************/
/**
 * @brief SpriteCanvas::mousePressEvent
 * @param event
 */

 /* Track the mouse when the left button is pressed.
 * @param event - Mouse press event.
 */
void SpriteCanvas::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        lastPoint = calculatePoint(event);
        scribbling = true;
        startClick = lastPoint;
        if(drawingPencil)
            drawLineTo(lastPoint);
    }
}

/**
 * Keep tracking the mouse press.
 * @param event - Mouse move event.
 */
void SpriteCanvas::mouseMoveEvent(QMouseEvent *event)
{
    QPoint mousePoint = calculatePoint(event);
    if(event->buttons() == Qt::LeftButton && drawingPencil)
        drawLineTo(mousePoint);

    if(!scribbling)
    {
        currentColor = image.pixelColor(mousePoint);
        image.setPixelColor(mousePoint,currentColor);

        highlightPosition(mousePoint);
    }
}

/**
 * Calculate what was drawn when the mouse press is released.
 * @param event - Mouse press release
 */
void SpriteCanvas::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && drawingPencil) {
        startClick= calculatePoint(event);
        drawLineTo(calculatePoint(event));
    }
    else if(event->button() == Qt::LeftButton && drawingSquare)
    {
        drawBox(calculatePoint(event));
        lastHighlightedColor = penColor();
    }
    else if(event->button() == Qt::LeftButton && filling)
    {
        fillPath(calculatePoint(event));
        neighbors.clear();
        visited.clear();

    }

    // Store a copy of image to undo stack
    undo_stack.append(image.copy());
    // Only keep 5 undos
    if (undo_stack.size() > 5) {
        undo_cache = undo_stack.first().copy();
        undo_stack.removeFirst();
    }
    // Enable the undo button
    emit enableUndoButton(true);

    scribbling = false;
    QImage tempImage(image.scaled(131,91));
    emit updatePreview(&tempImage);
}

/**
 * Point click event, draw where the mouse was clicked.
 * @param event - Paint event
 */
void SpriteCanvas::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);


    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawImage(this->rect().marginsAdded(QMargins(-3,-3,-3,-3)), onionSkinImage);
    painter.drawImage(this->rect().marginsAdded(QMargins(-3,-3,-3,-3)), image);


}

/**
 * Resize the current image on canvas.
 * @param event 0 Resize event
 */
void SpriteCanvas::resizeEvent(QResizeEvent *event)
{
    update();
    QImage tempImage(image.scaled(131,91));
    emit updatePreview(&tempImage);
    QWidget::resizeEvent(event);
}

/**
 * Leave Event
 * @param event
 */
void SpriteCanvas::leaveEvent(QEvent *event)
{
    image.setPixelColor(lastPoint,lastHighlightedColor);
}

/**
 * Delete key press event.
 * @param event Key event
 */
void SpriteCanvas::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Backspace)
    {
        emit deleteKeyPressed(event);
    }
}

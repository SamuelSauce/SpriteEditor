#ifndef SPRITECANVAS_H
#define SPRITECANVAS_H

#include <QWidget>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QPainter>
#include <QStyleOption>
#include <QStack>


class SpriteCanvas : public QWidget
{
    Q_OBJECT
public:
    explicit SpriteCanvas(QWidget *parent = nullptr);

    bool drawingSquare;
    bool drawingPencil;
    bool drawingEraser;
    bool filling;
    bool scribbling;
    QColor prevColor;


    void setPenWidth(int newWidth);
    void setPenColor(const QColor &newColor);
    void setGridSize(int newGridSize);
    void clearUndoStack();
    QImage getImage();

    // Not implemented yet?
    bool openImage(const QString &fileName);
    bool saveImage(const QString &fileName, const char *fileFormat);
    bool isModified() const { return modified; }
    int penWidth() const { return myPenWidth; }
    QColor penColor() const { return myPenColor; }


private:
    bool modified;
    bool undoWait;
    int myPenWidth;
    int gridSize;

    QColor myPenColor;
    QImage image;
    QPoint lastPoint;
    QPoint lastHighlighted;
    QColor lastHighlightedColor;
    QVector<QPoint> neighbors;
    QVector<QPoint> visited;
    QPoint startClick;

    //Added
    QColor currentColor;
    QPoint oldPoint;

    // Undo
    QStack<QImage> undo_stack;
    QImage undo_cache;
    QImage onionSkinImage;



    /*****************************/

    void highlightPosition(const QPoint &currentPoint);
    void drawBox(const QPoint &releasePoint);
    void drawLineTo(const QPoint &endPoint);
    void fillPath(const QPoint &currentPoint);
    void calculateUnvisitedBlankNeighbors(const QPoint &currentPoint);
    QPoint calculatePoint(QMouseEvent *event);

    // Not implemented yet?
    void resizeImage(QImage *image, const QSize &newSize);

public slots:
    void clear_Image();
    void set_Image(QImage &newImage);
    void undo();
    void on_onion_skin_frame(QImage&image);
    void on_onion_skin_clear();

signals:
    void updatePreview(const QImage* image);
    void deleteKeyPressed(QKeyEvent * event);
    void enableUndoButton(bool enable);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
    void leaveEvent(QEvent * event) override;
    void keyPressEvent(QKeyEvent * event) override;

};

#endif // SPRITECANVAS_H

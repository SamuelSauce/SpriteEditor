#ifndef SPRITEVIEW_H
#define SPRITEVIEW_H

#include <QMainWindow>
#include <QLabel>
#include <QKeyEvent>
#include "spritecanvas.h"
#include "sprite.h"
#include "animationdialog.h"

namespace Ui {
class SpriteView;
}

class SpriteView : public QMainWindow
{
    Q_OBJECT

public:
    explicit SpriteView(sprite &sprObject, QWidget *parent = 0);
    ~SpriteView();

private:
    Ui::SpriteView *ui;
    QVector<QPixmap> pixmapPreviews;
    int pixMapIndex;
    SpriteCanvas* canvas;
    int spriteIndexLoaded;

    void createMenus();
    void init();
    void populatePreviewPanels();
    void renamePanels(int idx);
    void deletePreviewList();
    void deleteOnion(QImage&);

public slots:
    void update_List(QVector<QImage> frames, int selectedFrame);
    void update_Frame_Preview(const QImage* image);
    void on_addButton_clicked();
    void on_saveButton_clicked();
    void on_colorButton_clicked();
    void on_eraserButton_clicked();
    void on_drawSquare_clicked();
    void on_drawingButton_clicked();
    void on_blankCanvasButton_clicked();
    void on_openButton_clicked();
    void preview_Panel_Clicked();
    void enable_Undo_Button(bool enable);
    void on_deleteKey_pressed();
    void on_playButton_clicked();
    void on_paintBucketButton_clicked();
    void on_animationVector(QVector<QImage> sprites);

signals:
    void load(QString fullFilename);
    void changeActiveFrame(QImage&, int);
    void addFrame(QImage& image);
    void addEditFrame(QPixmap pixmap, int spriteIndexLoaded);
    void previewIndex(int indx);
    void deleteIndex(int inx);
    void playButtonClicked();

    void save(QString fullFilename, QImage activeImage);
    void exportToPNG(QString fullFilename, QImage activeImage);
    void exportToGIF(QString fullFilename, QImage activeImage);
    void onionSkin();
    void clear_onion_skin();
private slots:
    void on_onionButton_clicked();
};

#endif // SPRITEVIEW_H

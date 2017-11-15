#ifndef SPRITE_H
#define SPRITE_H
#include <QObject>
#include <QImage>
#include <QVector>
#include <QListWidgetItem>

class sprite : public QObject
{
    Q_OBJECT
public:
    sprite();

private:
    QVector<QImage> sprites;
    int activeFrame;
    void updateActiveImage(QImage &store);
    int spriteIndexLoaded;
    int pixMapIndex;

public slots:
    void load(QString fullFilename);
    void save(QString fullFilename, QImage activeImage);
    void export_To_PNG(QString fullFilename, QImage activeImage);
    void export_To_GIF(QString fullFilename, QImage activeImage);
    void add_Frame(QImage);
    void update_Active_Frame(QImage, int);
    void on_addEditFrame(QPixmap pixmap, int index);
    void on_preview_label_clicked(int indx);
    void on_deleteIndex(int indx);
    void onion_Skin();
    void on_playButtonClicked();

signals:
    void onion_skin_frame(QImage&);
    void updateFrame(QImage&);
    void updateList(QVector<QImage>, int selected);
    void setOnionSkin(QImage&);
    void animationVector(QVector<QImage> sprites);
};

#endif // SPRITE_H

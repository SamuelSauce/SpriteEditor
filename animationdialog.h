#ifndef ANIMATIONDIALOG_H
#define ANIMATIONDIALOG_H

#include <QDialog>

namespace Ui {
class AnimationDialog;
}

class AnimationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AnimationDialog(QVector<QImage> sprites, QWidget *parent = 0);
    ~AnimationDialog();

public slots:
    void showFrame();


private slots:

    void on_horizontalSlider_valueChanged(int value);

    void on_radioButton_clicked(bool checked);

private:
    Ui::AnimationDialog *ui;
    QVector<QImage> sprites;
    int index;
    QTimer *timer;
    bool actualSize;
};

#endif // ANIMATIONDIALOG_H

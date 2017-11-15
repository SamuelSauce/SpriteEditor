#include "animationdialog.h"
#include "ui_animationdialog.h"
#include <QDebug>
#include <QTimer>
#include <QPixmap>

AnimationDialog::AnimationDialog(QVector<QImage> _sprites, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AnimationDialog)
{
    ui->setupUi(this);
    sprites = _sprites;
    index = 0;
    ui->horizontalSlider->setFocus();
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout, this, &AnimationDialog::showFrame);
    timer->start(500);


}

AnimationDialog::~AnimationDialog()
{
    delete ui;
}

void AnimationDialog::showFrame(){

    if(sprites.count() == 1)
    {
        return;
    }
    if(actualSize)
        ui->animationWindow->setPixmap(QPixmap::fromImage(sprites[index++]));
    else{
        ui->animationWindow->setPixmap(QPixmap::fromImage(sprites[index++].scaled(361,271)));
        ui->animationWindow->setAlignment(Qt::AlignCenter);
    }
    if(index == sprites.count() - 1)
    {
        index = 0;
    }
}

void AnimationDialog::on_horizontalSlider_valueChanged(int value)
{
    ui->fpsLabel->setText("FPS: " + QString::number(value));
    timer->start(1000/value);
}

void AnimationDialog::on_radioButton_clicked(bool checked)
{
    actualSize = checked;
}

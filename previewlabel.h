#ifndef PREVIEWLABEL_H
#define PREVIEWLABEL_H

#include <QObject>
#include <QLabel>
#include <QMouseEvent>
#include <QWidget>

class PreviewLabel : public QLabel{
        Q_OBJECT
public:
    PreviewLabel(QWidget* parent = 0);
    ~PreviewLabel();

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent* event);
};

#endif // PREVIEWLABEL_H

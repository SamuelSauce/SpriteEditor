#include "previewlabel.h"

PreviewLabel::PreviewLabel(QWidget* parent)
    : QLabel(parent) {}

PreviewLabel::~PreviewLabel(){}

void PreviewLabel::mousePressEvent(QMouseEvent *event)
{
    emit clicked();
}

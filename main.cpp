#include "spriteview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sprite sprObject;
    SpriteView w(sprObject);
    w.show();

    return a.exec();
}

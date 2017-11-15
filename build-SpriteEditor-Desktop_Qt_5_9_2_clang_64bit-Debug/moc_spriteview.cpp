/****************************************************************************
** Meta object code from reading C++ file 'spriteview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SpriteEditor/spriteview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spriteview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpriteView_t {
    QByteArrayData data[45];
    char stringdata0[671];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpriteView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpriteView_t qt_meta_stringdata_SpriteView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SpriteView"
QT_MOC_LITERAL(1, 11, 4), // "load"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 12), // "fullFilename"
QT_MOC_LITERAL(4, 30, 17), // "changeActiveFrame"
QT_MOC_LITERAL(5, 48, 7), // "QImage&"
QT_MOC_LITERAL(6, 56, 8), // "addFrame"
QT_MOC_LITERAL(7, 65, 5), // "image"
QT_MOC_LITERAL(8, 71, 12), // "addEditFrame"
QT_MOC_LITERAL(9, 84, 6), // "pixmap"
QT_MOC_LITERAL(10, 91, 17), // "spriteIndexLoaded"
QT_MOC_LITERAL(11, 109, 12), // "previewIndex"
QT_MOC_LITERAL(12, 122, 4), // "indx"
QT_MOC_LITERAL(13, 127, 11), // "deleteIndex"
QT_MOC_LITERAL(14, 139, 3), // "inx"
QT_MOC_LITERAL(15, 143, 17), // "playButtonClicked"
QT_MOC_LITERAL(16, 161, 4), // "save"
QT_MOC_LITERAL(17, 166, 11), // "activeImage"
QT_MOC_LITERAL(18, 178, 11), // "exportToPNG"
QT_MOC_LITERAL(19, 190, 11), // "exportToGIF"
QT_MOC_LITERAL(20, 202, 9), // "onionSkin"
QT_MOC_LITERAL(21, 212, 16), // "clear_onion_skin"
QT_MOC_LITERAL(22, 229, 11), // "update_List"
QT_MOC_LITERAL(23, 241, 15), // "QVector<QImage>"
QT_MOC_LITERAL(24, 257, 6), // "frames"
QT_MOC_LITERAL(25, 264, 13), // "selectedFrame"
QT_MOC_LITERAL(26, 278, 20), // "update_Frame_Preview"
QT_MOC_LITERAL(27, 299, 13), // "const QImage*"
QT_MOC_LITERAL(28, 313, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(29, 334, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(30, 356, 22), // "on_colorButton_clicked"
QT_MOC_LITERAL(31, 379, 23), // "on_eraserButton_clicked"
QT_MOC_LITERAL(32, 403, 21), // "on_drawSquare_clicked"
QT_MOC_LITERAL(33, 425, 24), // "on_drawingButton_clicked"
QT_MOC_LITERAL(34, 450, 28), // "on_blankCanvasButton_clicked"
QT_MOC_LITERAL(35, 479, 21), // "on_openButton_clicked"
QT_MOC_LITERAL(36, 501, 21), // "preview_Panel_Clicked"
QT_MOC_LITERAL(37, 523, 18), // "enable_Undo_Button"
QT_MOC_LITERAL(38, 542, 6), // "enable"
QT_MOC_LITERAL(39, 549, 20), // "on_deleteKey_pressed"
QT_MOC_LITERAL(40, 570, 21), // "on_playButton_clicked"
QT_MOC_LITERAL(41, 592, 28), // "on_paintBucketButton_clicked"
QT_MOC_LITERAL(42, 621, 18), // "on_animationVector"
QT_MOC_LITERAL(43, 640, 7), // "sprites"
QT_MOC_LITERAL(44, 648, 22) // "on_onionButton_clicked"

    },
    "SpriteView\0load\0\0fullFilename\0"
    "changeActiveFrame\0QImage&\0addFrame\0"
    "image\0addEditFrame\0pixmap\0spriteIndexLoaded\0"
    "previewIndex\0indx\0deleteIndex\0inx\0"
    "playButtonClicked\0save\0activeImage\0"
    "exportToPNG\0exportToGIF\0onionSkin\0"
    "clear_onion_skin\0update_List\0"
    "QVector<QImage>\0frames\0selectedFrame\0"
    "update_Frame_Preview\0const QImage*\0"
    "on_addButton_clicked\0on_saveButton_clicked\0"
    "on_colorButton_clicked\0on_eraserButton_clicked\0"
    "on_drawSquare_clicked\0on_drawingButton_clicked\0"
    "on_blankCanvasButton_clicked\0"
    "on_openButton_clicked\0preview_Panel_Clicked\0"
    "enable_Undo_Button\0enable\0"
    "on_deleteKey_pressed\0on_playButton_clicked\0"
    "on_paintBucketButton_clicked\0"
    "on_animationVector\0sprites\0"
    "on_onionButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpriteView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  159,    2, 0x06 /* Public */,
       4,    2,  162,    2, 0x06 /* Public */,
       6,    1,  167,    2, 0x06 /* Public */,
       8,    2,  170,    2, 0x06 /* Public */,
      11,    1,  175,    2, 0x06 /* Public */,
      13,    1,  178,    2, 0x06 /* Public */,
      15,    0,  181,    2, 0x06 /* Public */,
      16,    2,  182,    2, 0x06 /* Public */,
      18,    2,  187,    2, 0x06 /* Public */,
      19,    2,  192,    2, 0x06 /* Public */,
      20,    0,  197,    2, 0x06 /* Public */,
      21,    0,  198,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    2,  199,    2, 0x0a /* Public */,
      26,    1,  204,    2, 0x0a /* Public */,
      28,    0,  207,    2, 0x0a /* Public */,
      29,    0,  208,    2, 0x0a /* Public */,
      30,    0,  209,    2, 0x0a /* Public */,
      31,    0,  210,    2, 0x0a /* Public */,
      32,    0,  211,    2, 0x0a /* Public */,
      33,    0,  212,    2, 0x0a /* Public */,
      34,    0,  213,    2, 0x0a /* Public */,
      35,    0,  214,    2, 0x0a /* Public */,
      36,    0,  215,    2, 0x0a /* Public */,
      37,    1,  216,    2, 0x0a /* Public */,
      39,    0,  219,    2, 0x0a /* Public */,
      40,    0,  220,    2, 0x0a /* Public */,
      41,    0,  221,    2, 0x0a /* Public */,
      42,    1,  222,    2, 0x0a /* Public */,
      44,    0,  225,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QImage,    3,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QImage,    3,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QImage,    3,   17,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 23, QMetaType::Int,   24,   25,
    QMetaType::Void, 0x80000000 | 27,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   43,
    QMetaType::Void,

       0        // eod
};

void SpriteView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpriteView *_t = static_cast<SpriteView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->load((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->changeActiveFrame((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->addFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->addEditFrame((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->previewIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->deleteIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->playButtonClicked(); break;
        case 7: _t->save((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 8: _t->exportToPNG((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 9: _t->exportToGIF((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 10: _t->onionSkin(); break;
        case 11: _t->clear_onion_skin(); break;
        case 12: _t->update_List((*reinterpret_cast< QVector<QImage>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->update_Frame_Preview((*reinterpret_cast< const QImage*(*)>(_a[1]))); break;
        case 14: _t->on_addButton_clicked(); break;
        case 15: _t->on_saveButton_clicked(); break;
        case 16: _t->on_colorButton_clicked(); break;
        case 17: _t->on_eraserButton_clicked(); break;
        case 18: _t->on_drawSquare_clicked(); break;
        case 19: _t->on_drawingButton_clicked(); break;
        case 20: _t->on_blankCanvasButton_clicked(); break;
        case 21: _t->on_openButton_clicked(); break;
        case 22: _t->preview_Panel_Clicked(); break;
        case 23: _t->enable_Undo_Button((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->on_deleteKey_pressed(); break;
        case 25: _t->on_playButton_clicked(); break;
        case 26: _t->on_paintBucketButton_clicked(); break;
        case 27: _t->on_animationVector((*reinterpret_cast< QVector<QImage>(*)>(_a[1]))); break;
        case 28: _t->on_onionButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QImage> >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QImage> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpriteView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::load)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SpriteView::*_t)(QImage & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::changeActiveFrame)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SpriteView::*_t)(QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::addFrame)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SpriteView::*_t)(QPixmap , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::addEditFrame)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SpriteView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::previewIndex)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SpriteView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::deleteIndex)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SpriteView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::playButtonClicked)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (SpriteView::*_t)(QString , QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::save)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (SpriteView::*_t)(QString , QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::exportToPNG)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (SpriteView::*_t)(QString , QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::exportToGIF)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (SpriteView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::onionSkin)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (SpriteView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteView::clear_onion_skin)) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject SpriteView::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SpriteView.data,
      qt_meta_data_SpriteView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpriteView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpriteView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpriteView.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SpriteView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void SpriteView::load(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpriteView::changeActiveFrame(QImage & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SpriteView::addFrame(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SpriteView::addEditFrame(QPixmap _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SpriteView::previewIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SpriteView::deleteIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SpriteView::playButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SpriteView::save(QString _t1, QImage _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SpriteView::exportToPNG(QString _t1, QImage _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SpriteView::exportToGIF(QString _t1, QImage _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SpriteView::onionSkin()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void SpriteView::clear_onion_skin()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

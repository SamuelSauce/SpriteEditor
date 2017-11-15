/****************************************************************************
** Meta object code from reading C++ file 'spritecanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SpriteEditor/spritecanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spritecanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpriteCanvas_t {
    QByteArrayData data[17];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpriteCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpriteCanvas_t qt_meta_stringdata_SpriteCanvas = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SpriteCanvas"
QT_MOC_LITERAL(1, 13, 13), // "updatePreview"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "const QImage*"
QT_MOC_LITERAL(4, 42, 5), // "image"
QT_MOC_LITERAL(5, 48, 16), // "deleteKeyPressed"
QT_MOC_LITERAL(6, 65, 10), // "QKeyEvent*"
QT_MOC_LITERAL(7, 76, 5), // "event"
QT_MOC_LITERAL(8, 82, 16), // "enableUndoButton"
QT_MOC_LITERAL(9, 99, 6), // "enable"
QT_MOC_LITERAL(10, 106, 11), // "clear_Image"
QT_MOC_LITERAL(11, 118, 9), // "set_Image"
QT_MOC_LITERAL(12, 128, 7), // "QImage&"
QT_MOC_LITERAL(13, 136, 8), // "newImage"
QT_MOC_LITERAL(14, 145, 4), // "undo"
QT_MOC_LITERAL(15, 150, 19), // "on_onion_skin_frame"
QT_MOC_LITERAL(16, 170, 19) // "on_onion_skin_clear"

    },
    "SpriteCanvas\0updatePreview\0\0const QImage*\0"
    "image\0deleteKeyPressed\0QKeyEvent*\0"
    "event\0enableUndoButton\0enable\0clear_Image\0"
    "set_Image\0QImage&\0newImage\0undo\0"
    "on_onion_skin_frame\0on_onion_skin_clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpriteCanvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       8,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   63,    2, 0x0a /* Public */,
      11,    1,   64,    2, 0x0a /* Public */,
      14,    0,   67,    2, 0x0a /* Public */,
      15,    1,   68,    2, 0x0a /* Public */,
      16,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    4,
    QMetaType::Void,

       0        // eod
};

void SpriteCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpriteCanvas *_t = static_cast<SpriteCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePreview((*reinterpret_cast< const QImage*(*)>(_a[1]))); break;
        case 1: _t->deleteKeyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 2: _t->enableUndoButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->clear_Image(); break;
        case 4: _t->set_Image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 5: _t->undo(); break;
        case 6: _t->on_onion_skin_frame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 7: _t->on_onion_skin_clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpriteCanvas::*_t)(const QImage * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteCanvas::updatePreview)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SpriteCanvas::*_t)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteCanvas::deleteKeyPressed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SpriteCanvas::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpriteCanvas::enableUndoButton)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SpriteCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpriteCanvas.data,
      qt_meta_data_SpriteCanvas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpriteCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpriteCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpriteCanvas.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SpriteCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SpriteCanvas::updatePreview(const QImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpriteCanvas::deleteKeyPressed(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SpriteCanvas::enableUndoButton(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

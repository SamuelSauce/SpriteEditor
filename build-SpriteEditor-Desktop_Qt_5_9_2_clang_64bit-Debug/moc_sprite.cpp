/****************************************************************************
** Meta object code from reading C++ file 'sprite.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SpriteEditor/sprite.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sprite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sprite_t {
    QByteArrayData data[27];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sprite_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sprite_t qt_meta_stringdata_sprite = {
    {
QT_MOC_LITERAL(0, 0, 6), // "sprite"
QT_MOC_LITERAL(1, 7, 16), // "onion_skin_frame"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "QImage&"
QT_MOC_LITERAL(4, 33, 11), // "updateFrame"
QT_MOC_LITERAL(5, 45, 10), // "updateList"
QT_MOC_LITERAL(6, 56, 15), // "QVector<QImage>"
QT_MOC_LITERAL(7, 72, 8), // "selected"
QT_MOC_LITERAL(8, 81, 12), // "setOnionSkin"
QT_MOC_LITERAL(9, 94, 15), // "animationVector"
QT_MOC_LITERAL(10, 110, 7), // "sprites"
QT_MOC_LITERAL(11, 118, 4), // "load"
QT_MOC_LITERAL(12, 123, 12), // "fullFilename"
QT_MOC_LITERAL(13, 136, 4), // "save"
QT_MOC_LITERAL(14, 141, 11), // "activeImage"
QT_MOC_LITERAL(15, 153, 13), // "export_To_PNG"
QT_MOC_LITERAL(16, 167, 13), // "export_To_GIF"
QT_MOC_LITERAL(17, 181, 9), // "add_Frame"
QT_MOC_LITERAL(18, 191, 19), // "update_Active_Frame"
QT_MOC_LITERAL(19, 211, 15), // "on_addEditFrame"
QT_MOC_LITERAL(20, 227, 6), // "pixmap"
QT_MOC_LITERAL(21, 234, 5), // "index"
QT_MOC_LITERAL(22, 240, 24), // "on_preview_label_clicked"
QT_MOC_LITERAL(23, 265, 4), // "indx"
QT_MOC_LITERAL(24, 270, 14), // "on_deleteIndex"
QT_MOC_LITERAL(25, 285, 10), // "onion_Skin"
QT_MOC_LITERAL(26, 296, 20) // "on_playButtonClicked"

    },
    "sprite\0onion_skin_frame\0\0QImage&\0"
    "updateFrame\0updateList\0QVector<QImage>\0"
    "selected\0setOnionSkin\0animationVector\0"
    "sprites\0load\0fullFilename\0save\0"
    "activeImage\0export_To_PNG\0export_To_GIF\0"
    "add_Frame\0update_Active_Frame\0"
    "on_addEditFrame\0pixmap\0index\0"
    "on_preview_label_clicked\0indx\0"
    "on_deleteIndex\0onion_Skin\0"
    "on_playButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sprite[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       5,    2,  100,    2, 0x06 /* Public */,
       8,    1,  105,    2, 0x06 /* Public */,
       9,    1,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  111,    2, 0x0a /* Public */,
      13,    2,  114,    2, 0x0a /* Public */,
      15,    2,  119,    2, 0x0a /* Public */,
      16,    2,  124,    2, 0x0a /* Public */,
      17,    1,  129,    2, 0x0a /* Public */,
      18,    2,  132,    2, 0x0a /* Public */,
      19,    2,  137,    2, 0x0a /* Public */,
      22,    1,  142,    2, 0x0a /* Public */,
      24,    1,  145,    2, 0x0a /* Public */,
      25,    0,  148,    2, 0x0a /* Public */,
      26,    0,  149,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    7,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 6,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QImage,   12,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QImage,   12,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QImage,   12,   14,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int,   20,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sprite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sprite *_t = static_cast<sprite *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onion_skin_frame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->updateFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->updateList((*reinterpret_cast< QVector<QImage>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setOnionSkin((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 4: _t->animationVector((*reinterpret_cast< QVector<QImage>(*)>(_a[1]))); break;
        case 5: _t->load((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->save((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 7: _t->export_To_PNG((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 8: _t->export_To_GIF((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 9: _t->add_Frame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 10: _t->update_Active_Frame((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->on_addEditFrame((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->on_preview_label_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_deleteIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->onion_Skin(); break;
        case 15: _t->on_playButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QImage> >(); break;
            }
            break;
        case 4:
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
            typedef void (sprite::*_t)(QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sprite::onion_skin_frame)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (sprite::*_t)(QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sprite::updateFrame)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (sprite::*_t)(QVector<QImage> , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sprite::updateList)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (sprite::*_t)(QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sprite::setOnionSkin)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (sprite::*_t)(QVector<QImage> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sprite::animationVector)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject sprite::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_sprite.data,
      qt_meta_data_sprite,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sprite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sprite::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sprite.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int sprite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void sprite::onion_skin_frame(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void sprite::updateFrame(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void sprite::updateList(QVector<QImage> _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void sprite::setOnionSkin(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void sprite::animationVector(QVector<QImage> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

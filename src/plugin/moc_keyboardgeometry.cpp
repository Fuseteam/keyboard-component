/****************************************************************************
** Meta object code from reading C++ file 'keyboardgeometry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "keyboardgeometry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyboardgeometry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KeyboardGeometry_t {
    QByteArrayData data[17];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyboardGeometry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyboardGeometry_t qt_meta_stringdata_KeyboardGeometry = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KeyboardGeometry"
QT_MOC_LITERAL(1, 17, 19), // "keypadHeightChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "canvasHeightChanged"
QT_MOC_LITERAL(4, 58, 18), // "visibleRectChanged"
QT_MOC_LITERAL(5, 77, 18), // "orientationChanged"
QT_MOC_LITERAL(6, 96, 12), // "shownChanged"
QT_MOC_LITERAL(7, 109, 14), // "setVisibleRect"
QT_MOC_LITERAL(8, 124, 4), // "rect"
QT_MOC_LITERAL(9, 129, 8), // "setShown"
QT_MOC_LITERAL(10, 138, 4), // "show"
QT_MOC_LITERAL(11, 143, 12), // "keypadHeight"
QT_MOC_LITERAL(12, 156, 12), // "canvasHeight"
QT_MOC_LITERAL(13, 169, 11), // "visibleRect"
QT_MOC_LITERAL(14, 181, 11), // "orientation"
QT_MOC_LITERAL(15, 193, 21), // "Qt::ScreenOrientation"
QT_MOC_LITERAL(16, 215, 5) // "shown"

    },
    "KeyboardGeometry\0keypadHeightChanged\0"
    "\0canvasHeightChanged\0visibleRectChanged\0"
    "orientationChanged\0shownChanged\0"
    "setVisibleRect\0rect\0setShown\0show\0"
    "keypadHeight\0canvasHeight\0visibleRect\0"
    "orientation\0Qt::ScreenOrientation\0"
    "shown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyboardGeometry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   54,    2, 0x0a /* Public */,
       9,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    8,
    QMetaType::Void, QMetaType::Bool,   10,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00495001,
      12, QMetaType::Int, 0x00495001,
      13, QMetaType::QRectF, 0x00495103,
      14, 0x80000000 | 15, 0x00495009,
      16, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void KeyboardGeometry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyboardGeometry *_t = static_cast<KeyboardGeometry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keypadHeightChanged(); break;
        case 1: _t->canvasHeightChanged(); break;
        case 2: _t->visibleRectChanged(); break;
        case 3: _t->orientationChanged(); break;
        case 4: _t->shownChanged(); break;
        case 5: _t->setVisibleRect((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 6: _t->setShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (KeyboardGeometry::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyboardGeometry::keypadHeightChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KeyboardGeometry::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyboardGeometry::canvasHeightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (KeyboardGeometry::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyboardGeometry::visibleRectChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (KeyboardGeometry::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyboardGeometry::orientationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (KeyboardGeometry::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyboardGeometry::shownChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        KeyboardGeometry *_t = static_cast<KeyboardGeometry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->keypadHeight(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->canvasHeight(); break;
        case 2: *reinterpret_cast< QRectF*>(_v) = _t->visibleRect(); break;
        case 3: *reinterpret_cast< Qt::ScreenOrientation*>(_v) = _t->orientation(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->shown(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        KeyboardGeometry *_t = static_cast<KeyboardGeometry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setVisibleRect(*reinterpret_cast< QRectF*>(_v)); break;
        case 4: _t->setShown(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject KeyboardGeometry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KeyboardGeometry.data,
      qt_meta_data_KeyboardGeometry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *KeyboardGeometry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyboardGeometry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KeyboardGeometry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KeyboardGeometry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KeyboardGeometry::keypadHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KeyboardGeometry::canvasHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void KeyboardGeometry::visibleRectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KeyboardGeometry::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KeyboardGeometry::shownChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

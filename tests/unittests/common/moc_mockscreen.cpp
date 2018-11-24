/****************************************************************************
** Meta object code from reading C++ file 'mockscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mockscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mockscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MockScreen_t {
    QByteArrayData data[12];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MockScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MockScreen_t qt_meta_stringdata_MockScreen = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MockScreen"
QT_MOC_LITERAL(1, 11, 18), // "orientationChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 21), // "Qt::ScreenOrientation"
QT_MOC_LITERAL(4, 53, 11), // "orientation"
QT_MOC_LITERAL(5, 65, 25), // "primaryOrientationChanged"
QT_MOC_LITERAL(6, 91, 15), // "geometryChanged"
QT_MOC_LITERAL(7, 107, 8), // "geometry"
QT_MOC_LITERAL(8, 116, 14), // "setOrientation"
QT_MOC_LITERAL(9, 131, 21), // "setPrimaryOrientation"
QT_MOC_LITERAL(10, 153, 11), // "setGeometry"
QT_MOC_LITERAL(11, 165, 18) // "primaryOrientation"

    },
    "MockScreen\0orientationChanged\0\0"
    "Qt::ScreenOrientation\0orientation\0"
    "primaryOrientationChanged\0geometryChanged\0"
    "geometry\0setOrientation\0setPrimaryOrientation\0"
    "setGeometry\0primaryOrientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MockScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   53,    2, 0x0a /* Public */,
       9,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QRect,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QRect,    7,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
      11, 0x80000000 | 3, 0x0049510b,
       7, QMetaType::QRect, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void MockScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MockScreen *_t = static_cast<MockScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->orientationChanged((*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[1]))); break;
        case 1: _t->primaryOrientationChanged((*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[1]))); break;
        case 2: _t->geometryChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 3: _t->setOrientation((*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[1]))); break;
        case 4: _t->setPrimaryOrientation((*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[1]))); break;
        case 5: _t->setGeometry((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MockScreen::*_t)(Qt::ScreenOrientation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MockScreen::orientationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MockScreen::*_t)(Qt::ScreenOrientation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MockScreen::primaryOrientationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MockScreen::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MockScreen::geometryChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MockScreen *_t = static_cast<MockScreen *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::ScreenOrientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast< Qt::ScreenOrientation*>(_v) = _t->primaryOrientation(); break;
        case 2: *reinterpret_cast< QRect*>(_v) = _t->geometry(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MockScreen *_t = static_cast<MockScreen *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast< Qt::ScreenOrientation*>(_v)); break;
        case 1: _t->setPrimaryOrientation(*reinterpret_cast< Qt::ScreenOrientation*>(_v)); break;
        case 2: _t->setGeometry(*reinterpret_cast< QRect*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MockScreen::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MockScreen.data,
      qt_meta_data_MockScreen,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MockScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MockScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MockScreen.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MockScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MockScreen::orientationChanged(Qt::ScreenOrientation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MockScreen::primaryOrientationChanged(Qt::ScreenOrientation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MockScreen::geometryChanged(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

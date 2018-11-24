/****************************************************************************
** Meta object code from reading C++ file 'inputmethodextensions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputmethodextensions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputmethodextensions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ubuntu__Keyboard__InputMethodExtension_t {
    QByteArrayData data[4];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ubuntu__Keyboard__InputMethodExtension_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ubuntu__Keyboard__InputMethodExtension_t qt_meta_stringdata_Ubuntu__Keyboard__InputMethodExtension = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Ubuntu::Keyboard::InputMethod..."
QT_MOC_LITERAL(1, 39, 28), // "inputMethodExtensionsChanged"
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 10) // "extensions"

    },
    "Ubuntu::Keyboard::InputMethodExtension\0"
    "inputMethodExtensionsChanged\0\0extensions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ubuntu__Keyboard__InputMethodExtension[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QVariantMap, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Ubuntu::Keyboard::InputMethodExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputMethodExtension *_t = static_cast<InputMethodExtension *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inputMethodExtensionsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (InputMethodExtension::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethodExtension::inputMethodExtensionsChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        InputMethodExtension *_t = static_cast<InputMethodExtension *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = _t->inputMethodExtensions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        InputMethodExtension *_t = static_cast<InputMethodExtension *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInputMethodExtensions(*reinterpret_cast< QVariantMap*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Ubuntu::Keyboard::InputMethodExtension::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Ubuntu__Keyboard__InputMethodExtension.data,
      qt_meta_data_Ubuntu__Keyboard__InputMethodExtension,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Ubuntu::Keyboard::InputMethodExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ubuntu::Keyboard::InputMethodExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ubuntu__Keyboard__InputMethodExtension.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Ubuntu::Keyboard::InputMethodExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Ubuntu::Keyboard::InputMethodExtension::inputMethodExtensionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Ubuntu__Keyboard__InputMethod_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ubuntu__Keyboard__InputMethod_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ubuntu__Keyboard__InputMethod_t qt_meta_stringdata_Ubuntu__Keyboard__InputMethod = {
    {
QT_MOC_LITERAL(0, 0, 29) // "Ubuntu::Keyboard::InputMethod"

    },
    "Ubuntu::Keyboard::InputMethod"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ubuntu__Keyboard__InputMethod[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Ubuntu::Keyboard::InputMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Ubuntu::Keyboard::InputMethod::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Ubuntu__Keyboard__InputMethod.data,
      qt_meta_data_Ubuntu__Keyboard__InputMethod,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Ubuntu::Keyboard::InputMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ubuntu::Keyboard::InputMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ubuntu__Keyboard__InputMethod.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Ubuntu::Keyboard::InputMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

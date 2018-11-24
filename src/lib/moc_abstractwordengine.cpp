/****************************************************************************
** Meta object code from reading C++ file 'abstractwordengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "logic/abstractwordengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractwordengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MaliitKeyboard__Logic__AbstractWordEngine_t {
    QByteArrayData data[18];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaliitKeyboard__Logic__AbstractWordEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaliitKeyboard__Logic__AbstractWordEngine_t qt_meta_stringdata_MaliitKeyboard__Logic__AbstractWordEngine = {
    {
QT_MOC_LITERAL(0, 0, 41), // "MaliitKeyboard::Logic::Abstra..."
QT_MOC_LITERAL(1, 42, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 7), // "enabled"
QT_MOC_LITERAL(4, 66, 17), // "candidatesChanged"
QT_MOC_LITERAL(5, 84, 17), // "WordCandidateList"
QT_MOC_LITERAL(6, 102, 10), // "candidates"
QT_MOC_LITERAL(7, 113, 18), // "preeditFaceChanged"
QT_MOC_LITERAL(8, 132, 24), // "Model::Text::PreeditFace"
QT_MOC_LITERAL(9, 157, 4), // "face"
QT_MOC_LITERAL(10, 162, 23), // "primaryCandidateChanged"
QT_MOC_LITERAL(11, 186, 9), // "candidate"
QT_MOC_LITERAL(12, 196, 13), // "pluginChanged"
QT_MOC_LITERAL(13, 210, 10), // "setEnabled"
QT_MOC_LITERAL(14, 221, 24), // "setWordPredictionEnabled"
QT_MOC_LITERAL(15, 246, 2), // "on"
QT_MOC_LITERAL(16, 249, 22), // "setSpellcheckerEnabled"
QT_MOC_LITERAL(17, 272, 21) // "setAutoCorrectEnabled"

    },
    "MaliitKeyboard::Logic::AbstractWordEngine\0"
    "enabledChanged\0\0enabled\0candidatesChanged\0"
    "WordCandidateList\0candidates\0"
    "preeditFaceChanged\0Model::Text::PreeditFace\0"
    "face\0primaryCandidateChanged\0candidate\0"
    "pluginChanged\0setEnabled\0"
    "setWordPredictionEnabled\0on\0"
    "setSpellcheckerEnabled\0setAutoCorrectEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaliitKeyboard__Logic__AbstractWordEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       7,    1,   65,    2, 0x06 /* Public */,
      10,    1,   68,    2, 0x06 /* Public */,
      12,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   72,    2, 0x0a /* Public */,
      14,    1,   75,    2, 0x0a /* Public */,
      16,    1,   78,    2, 0x0a /* Public */,
      17,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void MaliitKeyboard::Logic::AbstractWordEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractWordEngine *_t = static_cast<AbstractWordEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->candidatesChanged((*reinterpret_cast< const WordCandidateList(*)>(_a[1]))); break;
        case 2: _t->preeditFaceChanged((*reinterpret_cast< Model::Text::PreeditFace(*)>(_a[1]))); break;
        case 3: _t->primaryCandidateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->pluginChanged(); break;
        case 5: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setWordPredictionEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setSpellcheckerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setAutoCorrectEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AbstractWordEngine::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractWordEngine::enabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractWordEngine::*_t)(const WordCandidateList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractWordEngine::candidatesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AbstractWordEngine::*_t)(Model::Text::PreeditFace );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractWordEngine::preeditFaceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AbstractWordEngine::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractWordEngine::primaryCandidateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AbstractWordEngine::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractWordEngine::pluginChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AbstractWordEngine *_t = static_cast<AbstractWordEngine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AbstractWordEngine *_t = static_cast<AbstractWordEngine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MaliitKeyboard::Logic::AbstractWordEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MaliitKeyboard__Logic__AbstractWordEngine.data,
      qt_meta_data_MaliitKeyboard__Logic__AbstractWordEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MaliitKeyboard::Logic::AbstractWordEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaliitKeyboard::Logic::AbstractWordEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MaliitKeyboard__Logic__AbstractWordEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MaliitKeyboard::Logic::AbstractWordEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void MaliitKeyboard::Logic::AbstractWordEngine::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MaliitKeyboard::Logic::AbstractWordEngine::candidatesChanged(const WordCandidateList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MaliitKeyboard::Logic::AbstractWordEngine::preeditFaceChanged(Model::Text::PreeditFace _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MaliitKeyboard::Logic::AbstractWordEngine::primaryCandidateChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MaliitKeyboard::Logic::AbstractWordEngine::pluginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

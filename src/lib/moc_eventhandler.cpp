/****************************************************************************
** Meta object code from reading C++ file 'eventhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "logic/eventhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MaliitKeyboard__Logic__EventHandler_t {
    QByteArrayData data[23];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaliitKeyboard__Logic__EventHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaliitKeyboard__Logic__EventHandler_t qt_meta_stringdata_MaliitKeyboard__Logic__EventHandler = {
    {
QT_MOC_LITERAL(0, 0, 35), // "MaliitKeyboard::Logic::EventH..."
QT_MOC_LITERAL(1, 36, 10), // "keyPressed"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 3), // "Key"
QT_MOC_LITERAL(4, 52, 3), // "key"
QT_MOC_LITERAL(5, 56, 11), // "keyReleased"
QT_MOC_LITERAL(6, 68, 20), // "wordCandidatePressed"
QT_MOC_LITERAL(7, 89, 13), // "WordCandidate"
QT_MOC_LITERAL(8, 103, 9), // "candidate"
QT_MOC_LITERAL(9, 113, 21), // "wordCandidateReleased"
QT_MOC_LITERAL(10, 135, 23), // "languageChangeRequested"
QT_MOC_LITERAL(11, 159, 10), // "languageId"
QT_MOC_LITERAL(12, 170, 19), // "qmlCandidateChanged"
QT_MOC_LITERAL(13, 190, 5), // "words"
QT_MOC_LITERAL(14, 196, 22), // "onWordCandidatePressed"
QT_MOC_LITERAL(15, 219, 4), // "word"
QT_MOC_LITERAL(16, 224, 9), // "userInput"
QT_MOC_LITERAL(17, 234, 23), // "onWordCandidateReleased"
QT_MOC_LITERAL(18, 258, 12), // "onKeyPressed"
QT_MOC_LITERAL(19, 271, 5), // "label"
QT_MOC_LITERAL(20, 277, 6), // "action"
QT_MOC_LITERAL(21, 284, 13), // "onKeyReleased"
QT_MOC_LITERAL(22, 298, 21) // "onQmlCandidateChanged"

    },
    "MaliitKeyboard::Logic::EventHandler\0"
    "keyPressed\0\0Key\0key\0keyReleased\0"
    "wordCandidatePressed\0WordCandidate\0"
    "candidate\0wordCandidateReleased\0"
    "languageChangeRequested\0languageId\0"
    "qmlCandidateChanged\0words\0"
    "onWordCandidatePressed\0word\0userInput\0"
    "onWordCandidateReleased\0onKeyPressed\0"
    "label\0action\0onKeyReleased\0"
    "onQmlCandidateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaliitKeyboard__Logic__EventHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       9,    1,   88,    2, 0x06 /* Public */,
      10,    1,   91,    2, 0x06 /* Public */,
      12,    1,   94,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    2,   97,    2, 0x02 /* Public */,
      17,    2,  102,    2, 0x02 /* Public */,
      18,    2,  107,    2, 0x02 /* Public */,
      18,    1,  112,    2, 0x22 /* Public | MethodCloned */,
      21,    2,  115,    2, 0x02 /* Public */,
      21,    1,  120,    2, 0x22 /* Public | MethodCloned */,
      22,    1,  123,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QStringList,   13,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   20,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   20,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QStringList,   13,

       0        // eod
};

void MaliitKeyboard::Logic::EventHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EventHandler *_t = static_cast<EventHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyPressed((*reinterpret_cast< const Key(*)>(_a[1]))); break;
        case 1: _t->keyReleased((*reinterpret_cast< const Key(*)>(_a[1]))); break;
        case 2: _t->wordCandidatePressed((*reinterpret_cast< const WordCandidate(*)>(_a[1]))); break;
        case 3: _t->wordCandidateReleased((*reinterpret_cast< const WordCandidate(*)>(_a[1]))); break;
        case 4: _t->languageChangeRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->qmlCandidateChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 6: _t->onWordCandidatePressed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->onWordCandidateReleased((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->onKeyPressed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->onKeyPressed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->onKeyReleased((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->onKeyReleased((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->onQmlCandidateChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (EventHandler::*_t)(const Key & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventHandler::keyPressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (EventHandler::*_t)(const Key & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventHandler::keyReleased)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (EventHandler::*_t)(const WordCandidate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventHandler::wordCandidatePressed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (EventHandler::*_t)(const WordCandidate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventHandler::wordCandidateReleased)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (EventHandler::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventHandler::languageChangeRequested)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (EventHandler::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventHandler::qmlCandidateChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject MaliitKeyboard::Logic::EventHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MaliitKeyboard__Logic__EventHandler.data,
      qt_meta_data_MaliitKeyboard__Logic__EventHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MaliitKeyboard::Logic::EventHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaliitKeyboard::Logic::EventHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MaliitKeyboard__Logic__EventHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MaliitKeyboard::Logic::EventHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MaliitKeyboard::Logic::EventHandler::keyPressed(const Key & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MaliitKeyboard::Logic::EventHandler::keyReleased(const Key & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MaliitKeyboard::Logic::EventHandler::wordCandidatePressed(const WordCandidate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MaliitKeyboard::Logic::EventHandler::wordCandidateReleased(const WordCandidate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MaliitKeyboard::Logic::EventHandler::languageChangeRequested(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MaliitKeyboard::Logic::EventHandler::qmlCandidateChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

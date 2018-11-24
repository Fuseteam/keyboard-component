/****************************************************************************
** Meta object code from reading C++ file 'wordribbon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "models/wordribbon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wordribbon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MaliitKeyboard__WordRibbon_t {
    QByteArrayData data[15];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaliitKeyboard__WordRibbon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaliitKeyboard__WordRibbon_t qt_meta_stringdata_MaliitKeyboard__WordRibbon = {
    {
QT_MOC_LITERAL(0, 0, 26), // "MaliitKeyboard::WordRibbon"
QT_MOC_LITERAL(1, 27, 21), // "wordCandidateSelected"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 9), // "candidate"
QT_MOC_LITERAL(4, 60, 21), // "userCandidateSelected"
QT_MOC_LITERAL(5, 82, 14), // "enabledChanged"
QT_MOC_LITERAL(6, 97, 7), // "enabled"
QT_MOC_LITERAL(7, 105, 22), // "onWordCandidatePressed"
QT_MOC_LITERAL(8, 128, 13), // "WordCandidate"
QT_MOC_LITERAL(9, 142, 23), // "onWordCandidateReleased"
QT_MOC_LITERAL(10, 166, 23), // "onWordCandidatesChanged"
QT_MOC_LITERAL(11, 190, 17), // "WordCandidateList"
QT_MOC_LITERAL(12, 208, 10), // "candidates"
QT_MOC_LITERAL(13, 219, 20), // "setWordRibbonVisible"
QT_MOC_LITERAL(14, 240, 7) // "visible"

    },
    "MaliitKeyboard::WordRibbon\0"
    "wordCandidateSelected\0\0candidate\0"
    "userCandidateSelected\0enabledChanged\0"
    "enabled\0onWordCandidatePressed\0"
    "WordCandidate\0onWordCandidateReleased\0"
    "onWordCandidatesChanged\0WordCandidateList\0"
    "candidates\0setWordRibbonVisible\0visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaliitKeyboard__WordRibbon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   58,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      13,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   14,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       2,

       0        // eod
};

void MaliitKeyboard::WordRibbon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WordRibbon *_t = static_cast<WordRibbon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wordCandidateSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->userCandidateSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onWordCandidatePressed((*reinterpret_cast< const WordCandidate(*)>(_a[1]))); break;
        case 4: _t->onWordCandidateReleased((*reinterpret_cast< const WordCandidate(*)>(_a[1]))); break;
        case 5: _t->onWordCandidatesChanged((*reinterpret_cast< const WordCandidateList(*)>(_a[1]))); break;
        case 6: _t->setWordRibbonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WordRibbon::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WordRibbon::wordCandidateSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WordRibbon::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WordRibbon::userCandidateSelected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WordRibbon::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WordRibbon::enabledChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        WordRibbon *_t = static_cast<WordRibbon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        WordRibbon *_t = static_cast<WordRibbon *>(_o);
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

const QMetaObject MaliitKeyboard::WordRibbon::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_MaliitKeyboard__WordRibbon.data,
      qt_meta_data_MaliitKeyboard__WordRibbon,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MaliitKeyboard::WordRibbon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaliitKeyboard::WordRibbon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MaliitKeyboard__WordRibbon.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int MaliitKeyboard::WordRibbon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
void MaliitKeyboard::WordRibbon::wordCandidateSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MaliitKeyboard::WordRibbon::userCandidateSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MaliitKeyboard::WordRibbon::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

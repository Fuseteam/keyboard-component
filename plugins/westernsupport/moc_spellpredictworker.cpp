/****************************************************************************
** Meta object code from reading C++ file 'spellpredictworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spellpredictworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spellpredictworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpellPredictWorker_t {
    QByteArrayData data[19];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpellPredictWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpellPredictWorker_t qt_meta_stringdata_SpellPredictWorker = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SpellPredictWorker"
QT_MOC_LITERAL(1, 19, 22), // "newSpellingSuggestions"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "word"
QT_MOC_LITERAL(4, 48, 11), // "suggestions"
QT_MOC_LITERAL(5, 60, 24), // "newPredictionSuggestions"
QT_MOC_LITERAL(6, 85, 19), // "parsePredictionText"
QT_MOC_LITERAL(7, 105, 15), // "surroundingLeft"
QT_MOC_LITERAL(8, 121, 7), // "preedit"
QT_MOC_LITERAL(9, 129, 17), // "newSpellCheckWord"
QT_MOC_LITERAL(10, 147, 11), // "setLanguage"
QT_MOC_LITERAL(11, 159, 8), // "language"
QT_MOC_LITERAL(12, 168, 10), // "pluginPath"
QT_MOC_LITERAL(13, 179, 18), // "setSpellCheckLimit"
QT_MOC_LITERAL(14, 198, 5), // "limit"
QT_MOC_LITERAL(15, 204, 17), // "addToUserWordList"
QT_MOC_LITERAL(16, 222, 11), // "addOverride"
QT_MOC_LITERAL(17, 234, 4), // "orig"
QT_MOC_LITERAL(18, 239, 9) // "overriden"

    },
    "SpellPredictWorker\0newSpellingSuggestions\0"
    "\0word\0suggestions\0newPredictionSuggestions\0"
    "parsePredictionText\0surroundingLeft\0"
    "preedit\0newSpellCheckWord\0setLanguage\0"
    "language\0pluginPath\0setSpellCheckLimit\0"
    "limit\0addToUserWordList\0addOverride\0"
    "orig\0overriden"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpellPredictWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    2,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   64,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      10,    2,   72,    2, 0x0a /* Public */,
      13,    1,   77,    2, 0x0a /* Public */,
      15,    1,   80,    2, 0x0a /* Public */,
      16,    2,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   18,

       0        // eod
};

void SpellPredictWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpellPredictWorker *_t = static_cast<SpellPredictWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newSpellingSuggestions((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 1: _t->newPredictionSuggestions((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 2: _t->parsePredictionText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->newSpellCheckWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setLanguage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->setSpellCheckLimit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->addToUserWordList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->addOverride((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SpellPredictWorker::*_t)(QString , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpellPredictWorker::newSpellingSuggestions)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SpellPredictWorker::*_t)(QString , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpellPredictWorker::newPredictionSuggestions)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SpellPredictWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpellPredictWorker.data,
      qt_meta_data_SpellPredictWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpellPredictWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpellPredictWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpellPredictWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SpellPredictWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SpellPredictWorker::newSpellingSuggestions(QString _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpellPredictWorker::newPredictionSuggestions(QString _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

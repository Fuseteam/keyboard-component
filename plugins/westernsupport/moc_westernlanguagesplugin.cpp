/****************************************************************************
** Meta object code from reading C++ file 'westernlanguagesplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "westernlanguagesplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'westernlanguagesplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WesternLanguagesPlugin_t {
    QByteArrayData data[21];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WesternLanguagesPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WesternLanguagesPlugin_t qt_meta_stringdata_WesternLanguagesPlugin = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WesternLanguagesPlugin"
QT_MOC_LITERAL(1, 23, 22), // "newSpellingSuggestions"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 4), // "word"
QT_MOC_LITERAL(4, 52, 11), // "suggestions"
QT_MOC_LITERAL(5, 64, 24), // "newPredictionSuggestions"
QT_MOC_LITERAL(6, 89, 17), // "newSpellCheckWord"
QT_MOC_LITERAL(7, 107, 18), // "setSpellCheckLimit"
QT_MOC_LITERAL(8, 126, 5), // "limit"
QT_MOC_LITERAL(9, 132, 23), // "setSpellPredictLanguage"
QT_MOC_LITERAL(10, 156, 8), // "language"
QT_MOC_LITERAL(11, 165, 10), // "pluginPath"
QT_MOC_LITERAL(12, 176, 19), // "parsePredictionText"
QT_MOC_LITERAL(13, 196, 15), // "surroundingLeft"
QT_MOC_LITERAL(14, 212, 7), // "preedit"
QT_MOC_LITERAL(15, 220, 21), // "setPredictionLanguage"
QT_MOC_LITERAL(16, 242, 17), // "addToUserWordList"
QT_MOC_LITERAL(17, 260, 11), // "addOverride"
QT_MOC_LITERAL(18, 272, 4), // "orig"
QT_MOC_LITERAL(19, 277, 9), // "overriden"
QT_MOC_LITERAL(20, 287, 28) // "spellCheckFinishedProcessing"

    },
    "WesternLanguagesPlugin\0newSpellingSuggestions\0"
    "\0word\0suggestions\0newPredictionSuggestions\0"
    "newSpellCheckWord\0setSpellCheckLimit\0"
    "limit\0setSpellPredictLanguage\0language\0"
    "pluginPath\0parsePredictionText\0"
    "surroundingLeft\0preedit\0setPredictionLanguage\0"
    "addToUserWordList\0addOverride\0orig\0"
    "overriden\0spellCheckFinishedProcessing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WesternLanguagesPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    2,   69,    2, 0x06 /* Public */,
       6,    1,   74,    2, 0x06 /* Public */,
       7,    1,   77,    2, 0x06 /* Public */,
       9,    2,   80,    2, 0x06 /* Public */,
      12,    2,   85,    2, 0x06 /* Public */,
      15,    1,   90,    2, 0x06 /* Public */,
      16,    1,   93,    2, 0x06 /* Public */,
      17,    2,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    2,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   14,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   18,   19,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    4,

       0        // eod
};

void WesternLanguagesPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WesternLanguagesPlugin *_t = static_cast<WesternLanguagesPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newSpellingSuggestions((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 1: _t->newPredictionSuggestions((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 2: _t->newSpellCheckWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setSpellCheckLimit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setSpellPredictLanguage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->parsePredictionText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->setPredictionLanguage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->addToUserWordList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->addOverride((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->spellCheckFinishedProcessing((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WesternLanguagesPlugin::*_t)(QString , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WesternLanguagesPlugin::newSpellingSuggestions)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WesternLanguagesPlugin::*_t)(QString , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WesternLanguagesPlugin::newPredictionSuggestions)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WesternLanguagesPlugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WesternLanguagesPlugin::newSpellCheckWord)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WesternLanguagesPlugin::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WesternLanguagesPlugin::setSpellCheckLimit)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WesternLanguagesPlugin::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WesternLanguagesPlugin::setSpellPredictLanguage)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WesternLanguagesPlugin::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WesternLanguagesPlugin::parsePredictionText)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WesternLanguagesPlugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WesternLanguagesPlugin::setPredictionLanguage)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WesternLanguagesPlugin::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WesternLanguagesPlugin::addToUserWordList)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (WesternLanguagesPlugin::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WesternLanguagesPlugin::addOverride)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject WesternLanguagesPlugin::staticMetaObject = {
    { &AbstractLanguagePlugin::staticMetaObject, qt_meta_stringdata_WesternLanguagesPlugin.data,
      qt_meta_data_WesternLanguagesPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WesternLanguagesPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WesternLanguagesPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WesternLanguagesPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "com.canonical.UbuntuKeyboard.LanguagePluginInterface"))
        return static_cast< LanguagePluginInterface*>(this);
    return AbstractLanguagePlugin::qt_metacast(_clname);
}

int WesternLanguagesPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractLanguagePlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WesternLanguagesPlugin::newSpellingSuggestions(QString _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WesternLanguagesPlugin::newPredictionSuggestions(QString _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WesternLanguagesPlugin::newSpellCheckWord(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WesternLanguagesPlugin::setSpellCheckLimit(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WesternLanguagesPlugin::setSpellPredictLanguage(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WesternLanguagesPlugin::parsePredictionText(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WesternLanguagesPlugin::setPredictionLanguage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WesternLanguagesPlugin::addToUserWordList(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WesternLanguagesPlugin::addOverride(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

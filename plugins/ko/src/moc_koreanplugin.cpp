/****************************************************************************
** Meta object code from reading C++ file 'koreanplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "koreanplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'koreanplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KoreanPlugin_t {
    QByteArrayData data[21];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KoreanPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KoreanPlugin_t qt_meta_stringdata_KoreanPlugin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KoreanPlugin"
QT_MOC_LITERAL(1, 13, 22), // "newSpellingSuggestions"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "word"
QT_MOC_LITERAL(4, 42, 11), // "suggestions"
QT_MOC_LITERAL(5, 54, 24), // "newPredictionSuggestions"
QT_MOC_LITERAL(6, 79, 17), // "newSpellCheckWord"
QT_MOC_LITERAL(7, 97, 18), // "setSpellCheckLimit"
QT_MOC_LITERAL(8, 116, 5), // "limit"
QT_MOC_LITERAL(9, 122, 23), // "setSpellPredictLanguage"
QT_MOC_LITERAL(10, 146, 8), // "language"
QT_MOC_LITERAL(11, 155, 10), // "pluginPath"
QT_MOC_LITERAL(12, 166, 19), // "parsePredictionText"
QT_MOC_LITERAL(13, 186, 15), // "surroundingLeft"
QT_MOC_LITERAL(14, 202, 7), // "preedit"
QT_MOC_LITERAL(15, 210, 21), // "setPredictionLanguage"
QT_MOC_LITERAL(16, 232, 17), // "addToUserWordList"
QT_MOC_LITERAL(17, 250, 11), // "addOverride"
QT_MOC_LITERAL(18, 262, 4), // "orig"
QT_MOC_LITERAL(19, 267, 9), // "overriden"
QT_MOC_LITERAL(20, 277, 28) // "spellCheckFinishedProcessing"

    },
    "KoreanPlugin\0newSpellingSuggestions\0"
    "\0word\0suggestions\0newPredictionSuggestions\0"
    "newSpellCheckWord\0setSpellCheckLimit\0"
    "limit\0setSpellPredictLanguage\0language\0"
    "pluginPath\0parsePredictionText\0"
    "surroundingLeft\0preedit\0setPredictionLanguage\0"
    "addToUserWordList\0addOverride\0orig\0"
    "overriden\0spellCheckFinishedProcessing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KoreanPlugin[] = {

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

void KoreanPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KoreanPlugin *_t = static_cast<KoreanPlugin *>(_o);
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
            typedef void (KoreanPlugin::*_t)(QString , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KoreanPlugin::newSpellingSuggestions)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KoreanPlugin::*_t)(QString , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KoreanPlugin::newPredictionSuggestions)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (KoreanPlugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KoreanPlugin::newSpellCheckWord)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (KoreanPlugin::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KoreanPlugin::setSpellCheckLimit)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (KoreanPlugin::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KoreanPlugin::setSpellPredictLanguage)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (KoreanPlugin::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KoreanPlugin::parsePredictionText)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (KoreanPlugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KoreanPlugin::setPredictionLanguage)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (KoreanPlugin::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KoreanPlugin::addToUserWordList)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (KoreanPlugin::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KoreanPlugin::addOverride)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject KoreanPlugin::staticMetaObject = {
    { &AbstractLanguagePlugin::staticMetaObject, qt_meta_stringdata_KoreanPlugin.data,
      qt_meta_data_KoreanPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *KoreanPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KoreanPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KoreanPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "com.canonical.UbuntuKeyboard.LanguagePluginInterface"))
        return static_cast< LanguagePluginInterface*>(this);
    return AbstractLanguagePlugin::qt_metacast(_clname);
}

int KoreanPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KoreanPlugin::newSpellingSuggestions(QString _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KoreanPlugin::newPredictionSuggestions(QString _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KoreanPlugin::newSpellCheckWord(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KoreanPlugin::setSpellCheckLimit(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KoreanPlugin::setSpellPredictLanguage(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KoreanPlugin::parsePredictionText(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KoreanPlugin::setPredictionLanguage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KoreanPlugin::addToUserWordList(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void KoreanPlugin::addOverride(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    '@',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    ',',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '\'', 0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'E',  'x',  'a',  'm', 
    'p',  'l',  'e',  's',  '.',  'K',  'o',  'r', 
    'e',  'a',  'n',  'P',  'l',  'u',  'g',  'i', 
    'n',  0x00, 0x00, 0x00, 0x9b, 0x0a, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0c, 0x00, 'K',  'o', 
    'r',  'e',  'a',  'n',  'P',  'l',  'u',  'g', 
    'i',  'n',  0x00, 0x00, 0xba, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x12, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x8c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '\'', 0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'E',  'x',  'a',  'm', 
    'p',  'l',  'e',  's',  '.',  'K',  'o',  'r', 
    'e',  'a',  'n',  'P',  'l',  'u',  'g',  'i', 
    'n',  0x00, 0x00, 0x00, 0x95, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0e, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0c, 0x00, 'K',  'o',  'r',  'e',  'a',  'n', 
    'P',  'l',  'u',  'g',  'i',  'n',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x0c, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, '`',  0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    't',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    '@',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    ',',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '\'', 0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'E',  'x',  'a',  'm', 
    'p',  'l',  'e',  's',  '.',  'K',  'o',  'r', 
    'e',  'a',  'n',  'P',  'l',  'u',  'g',  'i', 
    'n',  0x00, 0x00, 0x00, 0x95, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x03, 0x00, 'I',  'I', 
    'D',  0x00, 0x00, 0x00, '\'', 0x00, 'o',  'r', 
    'g',  '.',  'q',  't',  '-',  'p',  'r',  'o', 
    'j',  'e',  'c',  't',  '.',  'Q',  't',  '.', 
    'E',  'x',  'a',  'm',  'p',  'l',  'e',  's', 
    '.',  'K',  'o',  'r',  'e',  'a',  'n',  'P', 
    'l',  'u',  'g',  'i',  'n',  0x00, 0x00, 0x00,
    0x95, 0x0a, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1b, 0x0e, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0c, 0x00, 'K',  'o', 
    'r',  'e',  'a',  'n',  'P',  'l',  'u',  'g', 
    'i',  'n',  0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x0c, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    '`',  0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x1b, ' ',  0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0c, 0x00, 'K',  'o',  'r',  'e',  'a',  'n', 
    'P',  'l',  'u',  'g',  'i',  'n',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0xba, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
    0x10, 0x01, 0x00, 0x00, 0x1c, 0x01, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(KoreanPlugin, KoreanPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE

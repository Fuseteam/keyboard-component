/****************************************************************************
** Meta object code from reading C++ file 'esperantoplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "esperantoplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'esperantoplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EsperantoPlugin_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EsperantoPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EsperantoPlugin_t qt_meta_stringdata_EsperantoPlugin = {
    {
QT_MOC_LITERAL(0, 0, 15) // "EsperantoPlugin"

    },
    "EsperantoPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EsperantoPlugin[] = {

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

void EsperantoPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject EsperantoPlugin::staticMetaObject = {
    { &WesternLanguagesPlugin::staticMetaObject, qt_meta_stringdata_EsperantoPlugin.data,
      qt_meta_data_EsperantoPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EsperantoPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EsperantoPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EsperantoPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "com.canonical.UbuntuKeyboard.LanguagePluginInterface"))
        return static_cast< LanguagePluginInterface*>(this);
    return WesternLanguagesPlugin::qt_metacast(_clname);
}

int EsperantoPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WesternLanguagesPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    'H',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    '4',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '*',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'E',  'x',  'a',  'm', 
    'p',  'l',  'e',  's',  '.',  'E',  's',  'p', 
    'e',  'r',  'a',  'n',  't',  'o',  'P',  'l', 
    'u',  'g',  'i',  'n',  0x9b, 0x0a, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0f, 0x00, 'E',  's', 
    'p',  'e',  'r',  'a',  'n',  't',  'o',  'P', 
    'l',  'u',  'g',  'i',  'n',  0x00, 0x00, 0x00,
    0xba, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x12, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0xa0, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x03, 0x00, 'I',  'I', 
    'D',  0x00, 0x00, 0x00, '*',  0x00, 'o',  'r', 
    'g',  '.',  'q',  't',  '-',  'p',  'r',  'o', 
    'j',  'e',  'c',  't',  '.',  'Q',  't',  '.', 
    'E',  'x',  'a',  'm',  'p',  'l',  'e',  's', 
    '.',  'E',  's',  'p',  'e',  'r',  'a',  'n', 
    't',  'o',  'P',  'l',  'u',  'g',  'i',  'n', 
    0x95, 0x0a, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1b, 0x0e, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0f, 0x00, 'E',  's', 
    'p',  'e',  'r',  'a',  'n',  't',  'o',  'P', 
    'l',  'u',  'g',  'i',  'n',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x0c, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, '`',  0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    'x',  0x00, 0x00, 0x00, 'h',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    'H',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    '4',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '*',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'E',  'x',  'a',  'm', 
    'p',  'l',  'e',  's',  '.',  'E',  's',  'p', 
    'e',  'r',  'a',  'n',  't',  'o',  'P',  'l', 
    'u',  'g',  'i',  'n',  0x95, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0xa0, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x03, 0x00, 'I',  'I', 
    'D',  0x00, 0x00, 0x00, '*',  0x00, 'o',  'r', 
    'g',  '.',  'q',  't',  '-',  'p',  'r',  'o', 
    'j',  'e',  'c',  't',  '.',  'Q',  't',  '.', 
    'E',  'x',  'a',  'm',  'p',  'l',  'e',  's', 
    '.',  'E',  's',  'p',  'e',  'r',  'a',  'n', 
    't',  'o',  'P',  'l',  'u',  'g',  'i',  'n', 
    0x95, 0x0a, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1b, 0x0e, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0f, 0x00, 'E',  's', 
    'p',  'e',  'r',  'a',  'n',  't',  'o',  'P', 
    'l',  'u',  'g',  'i',  'n',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x0c, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, '`',  0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x9b, ' ',  0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0f, 0x00, 'E',  's', 
    'p',  'e',  'r',  'a',  'n',  't',  'o',  'P', 
    'l',  'u',  'g',  'i',  'n',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0xba, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00,
    0x18, 0x01, 0x00, 0x00, '$',  0x01, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(EsperantoPlugin, EsperantoPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE

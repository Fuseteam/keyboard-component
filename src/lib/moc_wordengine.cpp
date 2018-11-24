/****************************************************************************
** Meta object code from reading C++ file 'wordengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "logic/wordengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wordengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MaliitKeyboard__Logic__WordEngine_t {
    QByteArrayData data[12];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaliitKeyboard__Logic__WordEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaliitKeyboard__Logic__WordEngine_t qt_meta_stringdata_MaliitKeyboard__Logic__WordEngine = {
    {
QT_MOC_LITERAL(0, 0, 33), // "MaliitKeyboard::Logic::WordEn..."
QT_MOC_LITERAL(1, 34, 23), // "onWordCandidateSelected"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 4), // "word"
QT_MOC_LITERAL(4, 64, 17), // "onLanguageChanged"
QT_MOC_LITERAL(5, 82, 10), // "pluginPath"
QT_MOC_LITERAL(6, 93, 10), // "languageId"
QT_MOC_LITERAL(7, 104, 19), // "updateQmlCandidates"
QT_MOC_LITERAL(8, 124, 13), // "qmlCandidates"
QT_MOC_LITERAL(9, 138, 22), // "newSpellingSuggestions"
QT_MOC_LITERAL(10, 161, 11), // "suggestions"
QT_MOC_LITERAL(11, 173, 24) // "newPredictionSuggestions"

    },
    "MaliitKeyboard::Logic::WordEngine\0"
    "onWordCandidateSelected\0\0word\0"
    "onLanguageChanged\0pluginPath\0languageId\0"
    "updateQmlCandidates\0qmlCandidates\0"
    "newSpellingSuggestions\0suggestions\0"
    "newPredictionSuggestions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaliitKeyboard__Logic__WordEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    2,   42,    2, 0x0a /* Public */,
       7,    1,   47,    2, 0x0a /* Public */,
       9,    2,   50,    2, 0x0a /* Public */,
      11,    2,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,   10,

       0        // eod
};

void MaliitKeyboard::Logic::WordEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WordEngine *_t = static_cast<WordEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onWordCandidateSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onLanguageChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->updateQmlCandidates((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->newSpellingSuggestions((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 4: _t->newPredictionSuggestions((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject MaliitKeyboard::Logic::WordEngine::staticMetaObject = {
    { &AbstractWordEngine::staticMetaObject, qt_meta_stringdata_MaliitKeyboard__Logic__WordEngine.data,
      qt_meta_data_MaliitKeyboard__Logic__WordEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MaliitKeyboard::Logic::WordEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaliitKeyboard::Logic::WordEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MaliitKeyboard__Logic__WordEngine.stringdata0))
        return static_cast<void*>(this);
    return AbstractWordEngine::qt_metacast(_clname);
}

int MaliitKeyboard::Logic::WordEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractWordEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

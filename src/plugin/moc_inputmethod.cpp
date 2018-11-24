/****************************************************************************
** Meta object code from reading C++ file 'inputmethod.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputmethod.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputmethod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputMethod_t {
    QByteArrayData data[84];
    char stringdata0[1431];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputMethod_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputMethod_t qt_meta_stringdata_InputMethod = {
    {
QT_MOC_LITERAL(0, 0, 11), // "InputMethod"
QT_MOC_LITERAL(1, 12, 18), // "contentTypeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "TextContentType"
QT_MOC_LITERAL(4, 48, 11), // "contentType"
QT_MOC_LITERAL(5, 60, 16), // "activateAutocaps"
QT_MOC_LITERAL(6, 77, 18), // "deactivateAutocaps"
QT_MOC_LITERAL(7, 96, 23), // "enabledLanguagesChanged"
QT_MOC_LITERAL(8, 120, 9), // "languages"
QT_MOC_LITERAL(9, 130, 21), // "activeLanguageChanged"
QT_MOC_LITERAL(10, 152, 8), // "language"
QT_MOC_LITERAL(11, 161, 23), // "previousLanguageChanged"
QT_MOC_LITERAL(12, 185, 23), // "useAudioFeedbackChanged"
QT_MOC_LITERAL(13, 209, 25), // "audioFeedbackSoundChanged"
QT_MOC_LITERAL(14, 235, 5), // "sound"
QT_MOC_LITERAL(15, 241, 24), // "useHapticFeedbackChanged"
QT_MOC_LITERAL(16, 266, 24), // "wordEngineEnabledChanged"
QT_MOC_LITERAL(17, 291, 17), // "wordEngineEnabled"
QT_MOC_LITERAL(18, 309, 24), // "wordRibbonEnabledChanged"
QT_MOC_LITERAL(19, 334, 17), // "wordRibbonEnabled"
QT_MOC_LITERAL(20, 352, 25), // "windowGeometryRectChanged"
QT_MOC_LITERAL(21, 378, 4), // "rect"
QT_MOC_LITERAL(22, 383, 24), // "actionKeyOverrideChanged"
QT_MOC_LITERAL(23, 408, 20), // "keyboardStateChanged"
QT_MOC_LITERAL(24, 429, 5), // "state"
QT_MOC_LITERAL(25, 435, 13), // "keyboardReset"
QT_MOC_LITERAL(26, 449, 19), // "hasSelectionChanged"
QT_MOC_LITERAL(27, 469, 12), // "hasSelection"
QT_MOC_LITERAL(28, 482, 24), // "currentPluginPathChanged"
QT_MOC_LITERAL(29, 507, 17), // "currentPluginPath"
QT_MOC_LITERAL(30, 525, 21), // "languagePluginChanged"
QT_MOC_LITERAL(31, 547, 10), // "pluginPath"
QT_MOC_LITERAL(32, 558, 10), // "languageId"
QT_MOC_LITERAL(33, 569, 14), // "preeditChanged"
QT_MOC_LITERAL(34, 584, 7), // "preedit"
QT_MOC_LITERAL(35, 592, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(36, 614, 15), // "cursor_position"
QT_MOC_LITERAL(37, 630, 14), // "opacityChanged"
QT_MOC_LITERAL(38, 645, 7), // "opacity"
QT_MOC_LITERAL(39, 653, 4), // "hide"
QT_MOC_LITERAL(40, 658, 24), // "deviceOrientationChanged"
QT_MOC_LITERAL(41, 683, 21), // "Qt::ScreenOrientation"
QT_MOC_LITERAL(42, 705, 11), // "orientation"
QT_MOC_LITERAL(43, 717, 16), // "updateWordEngine"
QT_MOC_LITERAL(44, 734, 14), // "setContentType"
QT_MOC_LITERAL(45, 749, 17), // "setActiveLanguage"
QT_MOC_LITERAL(46, 767, 11), // "newLanguage"
QT_MOC_LITERAL(47, 779, 19), // "setPreviousLanguage"
QT_MOC_LITERAL(48, 799, 12), // "prevLanguage"
QT_MOC_LITERAL(49, 812, 20), // "onVisibleRectChanged"
QT_MOC_LITERAL(50, 833, 16), // "setKeyboardState"
QT_MOC_LITERAL(51, 850, 5), // "close"
QT_MOC_LITERAL(52, 856, 17), // "onLanguageChanged"
QT_MOC_LITERAL(53, 874, 20), // "onPluginPathsChanged"
QT_MOC_LITERAL(54, 895, 11), // "pluginPaths"
QT_MOC_LITERAL(55, 907, 27), // "onAutoCorrectSettingChanged"
QT_MOC_LITERAL(56, 935, 32), // "onEnabledLanguageSettingsChanged"
QT_MOC_LITERAL(57, 968, 27), // "onDoubleSpaceSettingChanged"
QT_MOC_LITERAL(58, 996, 14), // "updateAutoCaps"
QT_MOC_LITERAL(59, 1011, 16), // "onKeyboardClosed"
QT_MOC_LITERAL(60, 1028, 20), // "onLayoutWidthChanged"
QT_MOC_LITERAL(61, 1049, 5), // "width"
QT_MOC_LITERAL(62, 1055, 21), // "onLayoutHeightChanged"
QT_MOC_LITERAL(63, 1077, 6), // "height"
QT_MOC_LITERAL(64, 1084, 25), // "onWordEnginePluginChanged"
QT_MOC_LITERAL(65, 1110, 19), // "languageIsSupported"
QT_MOC_LITERAL(66, 1130, 6), // "plugin"
QT_MOC_LITERAL(67, 1137, 16), // "enabledLanguages"
QT_MOC_LITERAL(68, 1154, 14), // "activeLanguage"
QT_MOC_LITERAL(69, 1169, 16), // "previousLanguage"
QT_MOC_LITERAL(70, 1186, 16), // "useAudioFeedback"
QT_MOC_LITERAL(71, 1203, 18), // "audioFeedbackSound"
QT_MOC_LITERAL(72, 1222, 17), // "actionKeyOverride"
QT_MOC_LITERAL(73, 1240, 17), // "useHapticFeedback"
QT_MOC_LITERAL(74, 1258, 13), // "keyboardState"
QT_MOC_LITERAL(75, 1272, 14), // "cursorPosition"
QT_MOC_LITERAL(76, 1287, 15), // "surroundingLeft"
QT_MOC_LITERAL(77, 1303, 16), // "surroundingRight"
QT_MOC_LITERAL(78, 1320, 19), // "FreeTextContentType"
QT_MOC_LITERAL(79, 1340, 17), // "NumberContentType"
QT_MOC_LITERAL(80, 1358, 22), // "PhoneNumberContentType"
QT_MOC_LITERAL(81, 1381, 16), // "EmailContentType"
QT_MOC_LITERAL(82, 1398, 14), // "UrlContentType"
QT_MOC_LITERAL(83, 1413, 17) // "CustomContentType"

    },
    "InputMethod\0contentTypeChanged\0\0"
    "TextContentType\0contentType\0"
    "activateAutocaps\0deactivateAutocaps\0"
    "enabledLanguagesChanged\0languages\0"
    "activeLanguageChanged\0language\0"
    "previousLanguageChanged\0useAudioFeedbackChanged\0"
    "audioFeedbackSoundChanged\0sound\0"
    "useHapticFeedbackChanged\0"
    "wordEngineEnabledChanged\0wordEngineEnabled\0"
    "wordRibbonEnabledChanged\0wordRibbonEnabled\0"
    "windowGeometryRectChanged\0rect\0"
    "actionKeyOverrideChanged\0keyboardStateChanged\0"
    "state\0keyboardReset\0hasSelectionChanged\0"
    "hasSelection\0currentPluginPathChanged\0"
    "currentPluginPath\0languagePluginChanged\0"
    "pluginPath\0languageId\0preeditChanged\0"
    "preedit\0cursorPositionChanged\0"
    "cursor_position\0opacityChanged\0opacity\0"
    "hide\0deviceOrientationChanged\0"
    "Qt::ScreenOrientation\0orientation\0"
    "updateWordEngine\0setContentType\0"
    "setActiveLanguage\0newLanguage\0"
    "setPreviousLanguage\0prevLanguage\0"
    "onVisibleRectChanged\0setKeyboardState\0"
    "close\0onLanguageChanged\0onPluginPathsChanged\0"
    "pluginPaths\0onAutoCorrectSettingChanged\0"
    "onEnabledLanguageSettingsChanged\0"
    "onDoubleSpaceSettingChanged\0updateAutoCaps\0"
    "onKeyboardClosed\0onLayoutWidthChanged\0"
    "width\0onLayoutHeightChanged\0height\0"
    "onWordEnginePluginChanged\0languageIsSupported\0"
    "plugin\0enabledLanguages\0activeLanguage\0"
    "previousLanguage\0useAudioFeedback\0"
    "audioFeedbackSound\0actionKeyOverride\0"
    "useHapticFeedback\0keyboardState\0"
    "cursorPosition\0surroundingLeft\0"
    "surroundingRight\0FreeTextContentType\0"
    "NumberContentType\0PhoneNumberContentType\0"
    "EmailContentType\0UrlContentType\0"
    "CustomContentType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputMethod[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
      16,  312, // properties
       1,  376, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  219,    2, 0x06 /* Public */,
       5,    0,  222,    2, 0x06 /* Public */,
       6,    0,  223,    2, 0x06 /* Public */,
       7,    1,  224,    2, 0x06 /* Public */,
       9,    1,  227,    2, 0x06 /* Public */,
      11,    1,  230,    2, 0x06 /* Public */,
      12,    0,  233,    2, 0x06 /* Public */,
      13,    1,  234,    2, 0x06 /* Public */,
      15,    0,  237,    2, 0x06 /* Public */,
      16,    1,  238,    2, 0x06 /* Public */,
      18,    1,  241,    2, 0x06 /* Public */,
      20,    1,  244,    2, 0x06 /* Public */,
      22,    0,  247,    2, 0x06 /* Public */,
      23,    1,  248,    2, 0x06 /* Public */,
      25,    0,  251,    2, 0x06 /* Public */,
      26,    1,  252,    2, 0x06 /* Public */,
      28,    1,  255,    2, 0x06 /* Public */,
      30,    2,  258,    2, 0x06 /* Public */,
      33,    1,  263,    2, 0x06 /* Public */,
      35,    1,  266,    2, 0x06 /* Public */,
      37,    1,  269,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      39,    0,  272,    2, 0x0a /* Public */,
      40,    1,  273,    2, 0x0a /* Public */,
      43,    0,  276,    2, 0x0a /* Public */,
      44,    1,  277,    2, 0x0a /* Public */,
      45,    1,  280,    2, 0x0a /* Public */,
      47,    1,  283,    2, 0x0a /* Public */,
      49,    0,  286,    2, 0x0a /* Public */,
      50,    1,  287,    2, 0x0a /* Public */,
      51,    0,  290,    2, 0x0a /* Public */,
      52,    1,  291,    2, 0x0a /* Public */,
      53,    1,  294,    2, 0x0a /* Public */,
      55,    0,  297,    2, 0x08 /* Private */,
      56,    0,  298,    2, 0x08 /* Private */,
      57,    0,  299,    2, 0x08 /* Private */,
      58,    0,  300,    2, 0x08 /* Private */,
      59,    0,  301,    2, 0x08 /* Private */,
      60,    1,  302,    2, 0x08 /* Private */,
      62,    1,  305,    2, 0x08 /* Private */,
      64,    0,  308,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      65,    1,  309,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::QRect,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   31,   32,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Double,   38,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QStringList,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   61,
    QMetaType::Void, QMetaType::Int,   63,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,   66,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
      67, QMetaType::QStringList, 0x00495001,
      68, QMetaType::QString, 0x00495103,
      69, QMetaType::QString, 0x00495103,
      70, QMetaType::Bool, 0x00495001,
      71, QMetaType::QString, 0x00495001,
      72, QMetaType::QObjectStar, 0x00495001,
      73, QMetaType::Bool, 0x00495001,
      74, QMetaType::QString, 0x00495103,
      27, QMetaType::Bool, 0x00495001,
      29, QMetaType::QString, 0x00495001,
      34, QMetaType::QString, 0x00495003,
      75, QMetaType::Int, 0x00495103,
      38, QMetaType::Double, 0x00495001,
      76, QMetaType::QString, 0x00095001,
      77, QMetaType::QString, 0x00095001,

 // properties: notify_signal_id
       0,
       3,
       4,
       5,
       6,
       7,
      12,
       8,
      13,
      15,
      16,
      18,
      19,
      20,
       0,
       0,

 // enums: name, flags, count, data
       3, 0x0,    6,  380,

 // enum data: key, value
      78, uint(InputMethod::FreeTextContentType),
      79, uint(InputMethod::NumberContentType),
      80, uint(InputMethod::PhoneNumberContentType),
      81, uint(InputMethod::EmailContentType),
      82, uint(InputMethod::UrlContentType),
      83, uint(InputMethod::CustomContentType),

       0        // eod
};

void InputMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputMethod *_t = static_cast<InputMethod *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentTypeChanged((*reinterpret_cast< TextContentType(*)>(_a[1]))); break;
        case 1: _t->activateAutocaps(); break;
        case 2: _t->deactivateAutocaps(); break;
        case 3: _t->enabledLanguagesChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->activeLanguageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->previousLanguageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->useAudioFeedbackChanged(); break;
        case 7: _t->audioFeedbackSoundChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->useHapticFeedbackChanged(); break;
        case 9: _t->wordEngineEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->wordRibbonEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->windowGeometryRectChanged((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 12: _t->actionKeyOverrideChanged(); break;
        case 13: _t->keyboardStateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->keyboardReset(); break;
        case 15: _t->hasSelectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->currentPluginPathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->languagePluginChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->preeditChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->hide(); break;
        case 22: _t->deviceOrientationChanged((*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[1]))); break;
        case 23: _t->updateWordEngine(); break;
        case 24: _t->setContentType((*reinterpret_cast< TextContentType(*)>(_a[1]))); break;
        case 25: _t->setActiveLanguage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->setPreviousLanguage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->onVisibleRectChanged(); break;
        case 28: _t->setKeyboardState((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->close(); break;
        case 30: _t->onLanguageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->onPluginPathsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 32: _t->onAutoCorrectSettingChanged(); break;
        case 33: _t->onEnabledLanguageSettingsChanged(); break;
        case 34: _t->onDoubleSpaceSettingChanged(); break;
        case 35: _t->updateAutoCaps(); break;
        case 36: _t->onKeyboardClosed(); break;
        case 37: _t->onLayoutWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->onLayoutHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->onWordEnginePluginChanged(); break;
        case 40: { bool _r = _t->languageIsSupported((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (InputMethod::*_t)(TextContentType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::contentTypeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::activateAutocaps)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::deactivateAutocaps)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::enabledLanguagesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::activeLanguageChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::previousLanguageChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::useAudioFeedbackChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::audioFeedbackSoundChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::useHapticFeedbackChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::wordEngineEnabledChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::wordRibbonEnabledChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::windowGeometryRectChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::actionKeyOverrideChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::keyboardStateChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::keyboardReset)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::hasSelectionChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::currentPluginPathChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::languagePluginChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::preeditChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::cursorPositionChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (InputMethod::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputMethod::opacityChanged)) {
                *result = 20;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        InputMethod *_t = static_cast<InputMethod *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TextContentType*>(_v) = _t->contentType(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->enabledLanguages(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->activeLanguage(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->previousLanguage(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->useAudioFeedback(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->audioFeedbackSound(); break;
        case 6: *reinterpret_cast< QObject**>(_v) = _t->actionKeyOverride(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->useHapticFeedback(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->keyboardState(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hasSelection(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->currentPluginPath(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->preedit(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->cursorPosition(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->opacity(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->surroundingLeft(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->surroundingRight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        InputMethod *_t = static_cast<InputMethod *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContentType(*reinterpret_cast< TextContentType*>(_v)); break;
        case 2: _t->setActiveLanguage(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPreviousLanguage(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setKeyboardState(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->replacePreedit(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject InputMethod::staticMetaObject = {
    { &MAbstractInputMethod::staticMetaObject, qt_meta_stringdata_InputMethod.data,
      qt_meta_data_InputMethod,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InputMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputMethod.stringdata0))
        return static_cast<void*>(this);
    return MAbstractInputMethod::qt_metacast(_clname);
}

int InputMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MAbstractInputMethod::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void InputMethod::contentTypeChanged(TextContentType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InputMethod::activateAutocaps()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InputMethod::deactivateAutocaps()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void InputMethod::enabledLanguagesChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void InputMethod::activeLanguageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void InputMethod::previousLanguageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void InputMethod::useAudioFeedbackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void InputMethod::audioFeedbackSoundChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void InputMethod::useHapticFeedbackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void InputMethod::wordEngineEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void InputMethod::wordRibbonEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void InputMethod::windowGeometryRectChanged(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void InputMethod::actionKeyOverrideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void InputMethod::keyboardStateChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void InputMethod::keyboardReset()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void InputMethod::hasSelectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void InputMethod::currentPluginPathChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void InputMethod::languagePluginChanged(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void InputMethod::preeditChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void InputMethod::cursorPositionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void InputMethod::opacityChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

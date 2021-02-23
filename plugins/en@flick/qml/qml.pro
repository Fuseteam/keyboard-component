TOP_BUILDDIR = $$OUT_PWD/../../..
TOP_SRCDIR = $$PWD/../../..

include($${TOP_SRCDIR}/config.pri)

TARGET = dummy
TEMPLATE = lib

lang_en@flick.path = "$$UBUNTU_KEYBOARD_LIB_DIR/en@flick/"
lang_en@flick.files = *.qml *.js

lang_en@flick_keys.path = "$${UBUNTU_KEYBOARD_LIB_DIR}/keys"
lang_en@flick_keys.files = keys/*.qml keys/*.js keys/*.svg

lang_en@flick_layout.path = "$${UBUNTU_KEYBOARD_LIB_DIR}/languages"
lang_en@flick_layout.files = languages/*.qml


INSTALLS += lang_en@flick lang_en@flick_keys

# for QtCreator
OTHER_FILES += \
    Keyboard_en@flick.qml \
    Keyboard_en@flick_email.qml \
    Keyboard_en@flick_url.qml \
    Keyboard_en@flick_url_search.qml


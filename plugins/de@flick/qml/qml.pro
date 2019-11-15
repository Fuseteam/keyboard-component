TOP_BUILDDIR = $$OUT_PWD/../../..
TOP_SRCDIR = $$PWD/../../..

include($${TOP_SRCDIR}/config.pri)

TARGET = dummy
TEMPLATE = lib

lang_de@flick.path = "$$UBUNTU_KEYBOARD_LIB_DIR/de@flick/"
lang_de@flick.files = *.qml *.js

INSTALLS += lang_de@flick

# for QtCreator
OTHER_FILES += \
    Keyboard_de@flick.qml \
    Keyboard_de@flick_email.qml \
    Keyboard_de@flick_url.qml \
    Keyboard_de@flick_url_search.qml


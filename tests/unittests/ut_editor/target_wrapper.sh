#!/bin/sh
LD_LIBRARY_PATH=/usr/lib/arm-linux-gnueabihf${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}
export LD_LIBRARY_PATH
QT_PLUGIN_PATH=/usr/lib/arm-linux-gnueabihf/qt5/plugins${QT_PLUGIN_PATH:+:$QT_PLUGIN_PATH}
export QT_PLUGIN_PATH
exec env MALIIT_PLUGINS_DATADIR=/home/kugi_igi/ubuntu-keyboard/tests/unittests/../../data MALIIT_KEYBOARD_DATADIR=/home/kugi_igi/ubuntu-keyboard/tests/unittests/../../data LD_LIBRARY_PATH=/home/kugi_igi/ubuntu-keyboard/tests/unittests/ut_editor/../../../src/plugin:/usr/lib:/usr/lib/arm-linux-gnueabihf:$(LD_LIBRARY_PATH) "$@"

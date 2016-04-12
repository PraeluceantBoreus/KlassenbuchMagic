#! /usr/bin/env bash
$EXTRACTRC `find . -name \*.ui -o -name \*.rc -o -name \*.kcfg` >> rc.cpp
$XGETTEXT `find . -name \*.cpp` -o $podir/klassenbuchmagic.pot
rm -f rc.cpp

#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/bitcoinv1.png
ICON_DST=../../src/qt/res/icons/bitcoinv1.ico
convert ${ICON_SRC} -resize 16x16 bitcoinv1-16.png
convert ${ICON_SRC} -resize 32x32 bitcoinv1-32.png
convert ${ICON_SRC} -resize 48x48 bitcoinv1-48.png
convert bitcoinv1-16.png bitcoinv1-32.png bitcoinv1-48.png ${ICON_DST}


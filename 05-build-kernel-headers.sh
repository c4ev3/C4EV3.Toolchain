#!/bin/sh

cd linux-*
make ARCH=arm INSTALL_HDR_PATH=/opt/cross/arm-linux headers_install

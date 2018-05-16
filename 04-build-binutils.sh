#!/bin/sh

mkdir -p build-binutils/
cd build-binutils/
../binutils-*/configure --prefix=/opt/cross --target=arm-linux-gnueabi --program-prefix=arm-c4ev3-linux-gnueabi- --with-pkgversion="GCC for c4ev3 $(date "+%Y-%m-%d")" --with-bugurl=https://github.com/c4ev3/toolchain
make -j4
make install

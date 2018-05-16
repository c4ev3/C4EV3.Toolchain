#!/bin/sh

mkdir -p build-gcc/
cd build-gcc/
../gcc-*/configure --prefix=/opt/cross --target=arm-linux-gnueabi --program-prefix=arm-c4ev3-linux-gnueabi- --with-pkgversion="GCC for c4ev3 $(date "+%Y-%m-%d")" --with-bugurl=https://github.com/c4ev3/toolchain --enable-languages=c,c++
make -j4 all-gcc
make install-gcc

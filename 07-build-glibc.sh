#!/bin/sh

mkdir -p build-glibc/
cd build-glibc/
../glibc-*/configure --prefix=/opt/cross/arm-linux --target=arm-c4ev3-linux-gnueabi --host=arm-c4ev3-linux-gnueabi --build=$MACHTYPE --program-prefix=c4ev3 --with-pkgversion="GCC for c4ev3 $(date "+%Y-%m-%d")" --with-bugurl=https://github.com/c4ev3/toolchain --with-headers=/opt/cross/arm-linux/include libc_cv_forced_unwind=yes libc_cv_c_cleanup=yes libc_cv_arm_tls=yes --enable-add-ons=nptl,ports
make install-bootstrap-headers=yes install-headers
make -j4 csu/subdir_lib
ginstall csu/crt1.o csu/crti.o csu/crtn.o /opt/cross/arm-linux/lib
arm-c4ev3-linux-gnueabi-gcc -nostdlib -nostartfiles -shared -x c /dev/null -o /opt/cross/arm-linux/lib/libc.so
touch /opt/cross/arm-linux/include/gnu/stubs.h

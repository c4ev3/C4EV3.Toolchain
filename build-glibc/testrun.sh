#!/bin/sh
GCONV_PATH='/opt/cross/c4ev3/build-glibc/iconvdata' \
exec  /opt/cross/c4ev3/build-glibc/elf/ld-linux.so.3 --library-path /opt/cross/c4ev3/build-glibc:/opt/cross/c4ev3/build-glibc/math:/opt/cross/c4ev3/build-glibc/elf:/opt/cross/c4ev3/build-glibc/dlfcn:/opt/cross/c4ev3/build-glibc/nss:/opt/cross/c4ev3/build-glibc/nis:/opt/cross/c4ev3/build-glibc/rt:/opt/cross/c4ev3/build-glibc/resolv:/opt/cross/c4ev3/build-glibc/crypt:/opt/cross/c4ev3/build-glibc/nptl ${1+"$@"}

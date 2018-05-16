#!/bin/sh

CC=arm-c4ev3-linux-gnueabi-gcc

cd build-gcc
make -j4 all-target-libgcc
make install-target-libgcc

#!/bin/sh

cd build-glibc
make -j4
make install

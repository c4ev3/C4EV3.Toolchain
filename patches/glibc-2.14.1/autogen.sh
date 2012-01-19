#!/bin/bash

# rebuild ./configure (required by
# 0003-configure.in-detect-readelf-with-AC_CHECK_TARGET_TOO.patch) but do not
# use autoreconf, this does not work on every system correctly. Even makefiles
# do it that way!
autoconf configure.in > configure


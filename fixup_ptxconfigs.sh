#!/bin/bash

fixup() {
    eval `echo ${1} |
    sed -e "s/ptxconfigs\/\(.*\)_gcc-\(.*\)_glibc-\(.*\)_linux-\([^_-]*\).*\.ptxconfig/TARGET=\1 GCC=\2 GLIBC=\3 LINUX=\4/"`

    sed -i \
	-e "s/\(PTXCONF_GNU_TARGET\)=.*/\1=\"${TARGET}\"/" \
	-e "s/\(PTXCONF_CROSS_GCC_VERSION\)=.*/\1=\"${GCC}\"/" \
	-e "s/\(PTXCONF_GLIBC_VERSION\)=.*/\1=\"${GLIBC}\"/" \
	-e "s/\(PTXCONF_KERNEL_HEADERS_VERSION\)=.*/\1=\"${LINUX}\"/" \
	${1}
}

#
# main()
#
if test -n "${1}"; then
    fixup ${1}
else
    for config in `find ptxconfigs -name "*.ptxconfig"`; do
	fixup ${config}
    done
fi

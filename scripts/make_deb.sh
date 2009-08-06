#!/bin/bash

main() {
    while getopts "d:s:" opt; do
	case "${opt}" in
	    d)
		local deb="${OPTARG}"
		;;
	    s)
		local src="${OPTARG}"
	esac
    done

    if [ -z "${deb}" -o -z "${src}" ]; then
	exit 1
    fi

    local ifs_orig="${IFS}"
    IFS="_"
    set -- ${deb}
    IFS="${ifs_orig}"

    local package="${1##*/}"
    local inst="${1%${package}}"
    local version="${2}"
    local arch="${3%%.deb}"

    local prefix="opt/${src##*/opt/}"
    local destdir="${src%${prefix}}"
    local debian_tmp="${inst}/${package}-temp"
    if [ -e "${debian_tmp}" ]; then
	rm -rf "${debian_tmp}"
    fi

    mkdir -p "${debian_tmp}/DEBIAN"

    cat <<EOF > "${debian_tmp}/DEBIAN/control"
Package: ${package}
Version: ${version}
Priority: optional
Architecture: ${arch}
Essential: no
Section: devel
Maintainer: Pengutronix <ptxdist@pengutronix.de>
Description: ${package}
Origin: pengutronix.de
Homepage: http://www.pengutronix.de/oselas/toolchain/
Bugs: mailto:bugs@pengutronix.de
EOF
#Depends: autoconf, automake, libtool, flex, bison, gcc, g++, python-dev, libncurses5-dev, gawk, pkg-config, make, diff, patch, quilt
    # copy data
    tar -C "${destdir}" -c "${prefix}" | tar -C "${debian_tmp}" -x

    # make a deb out of it
    echo dpkg -b "${debian_tmp}" "${deb}" | fakeroot

    rm -rf "${debian_tmp}"
}


main "${@}"
exit $?

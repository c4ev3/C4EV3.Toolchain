#!/bin/bash
#
# Copyright (C) 2018 by Michael Olbrich <m.olbrich@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

ptxd_make_debian_version_ext() {
    local num="$(. /etc/os-release; echo ${VERSION_ID})"
    local version="-0ptx1"

    if [ -n "${num}" ]; then
	version="${version}~bpo${num}+1"
    fi
    echo "${version}"
}
export -f ptxd_make_debian_version_ext

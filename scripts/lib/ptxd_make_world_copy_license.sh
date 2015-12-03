#!/bin/bash
#
# Copyright (C) 2015 by Michael Olbrich <m.olbrich@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

ptxd_make_world_copy_license() {
    ptxd_make_world_license_init || return

    local license_dir="$(ptxd_get_ptxconf PTXCONF_SYSROOT_CROSS)/share/compliance"
    local license_url="file://\$(PTXDIST_PLATFORMDIR)/selected_toolchain/../share/compliance"
    local name="${pkg_label#host-}"
    name="${name#cross-}"
    pkg_license_target="${pkg_license_target:-${pkg_label}}"
    pkg_license_target_license="${pkg_license_target_license:-${pkg_license}}"
    pkg_license_target_pattern="${pkg_license_target_pattern:-*}"

    echo "Exporting license information..."

    rm -rf "${license_dir}/${name}" &&
    mkdir -p "${license_dir}/${name}" &&
    cp "${pkg_license_dir}/license/"* \
	"${license_dir}/${name}" &&
    rm "${license_dir}/${name}/MD5SUM"
    (
	local TARGET="$(ptxd_name_to_NAME ${pkg_license_target})"
	echo "${TARGET}_LICENSE := ${pkg_license_target_license}" &&
	echo -n "${TARGET}_LICENSE_FILES := " &&
	cd "${license_dir}/${name}" &&
	md5sum ${pkg_license_target_pattern} | \
	sed -n -e "s@\([^ ]*\)  \(.*\)@\t${license_url}/${name}/\2;md5=\1@" \
		-e H -e '${g;s/\n/ \\\n/g;p}'
	check_pipe_status
    ) > "${license_dir}/${pkg_license_target}.make"
}
export -f ptxd_make_world_copy_license

#!/bin/sh -e

die() {
	echo >&2 "$@"
	return 1
}

# This script assumes to have CWD = toplevel of OSELAS.Toolchain
test -f debian/changelog || die "debian/changelog not found"
test "$(dpkg-vendor --query Vendor)" = "Debian" || die "This script only works on Debian"

toolchain_version=$(dpkg-parsechangelog -SVersion | sed -e 's/-[^-]*$//')
newcontrol=$(mktemp debian/control.XXXXXXXXX)
trap 'rm -v -- "$newcontrol"' INT QUIT EXIT

cat > "$newcontrol" << EOF
Source: oselas.toolchain
Section: devel
Priority: optional
Maintainer: PTXdist Devevelopers <ptxdist@pengutronix.de>
Homepage: https://www.pengutronix.de/software/toolchain.html
Bugs: mailto:bugs@pengutronix.de
Build-Depends: debhelper (>= 9), libncurses-dev, python3-dev, bison, flex
EOF

find ptxconfigs -maxdepth 2 -name \*.ptxconfig |
while read configfile; do
	toolchain_name="$(basename "${configfile}" .ptxconfig | sed s/_/-/g)"
	pkg="oselas.toolchain-${toolchain_version}-${toolchain_name}"
	gnutriplet="$(sed -n 's/^PTXCONF_GNU_TARGET="\(.*\)"/\1/p' "$configfile")"

	cat >> "$newcontrol" << EOF

Package: $pkg
Architecture: any
Depends: \${shlibs:Depends}, \${misc:Depends}
Description: OSELAS Toolchain for ${gnutriplet}
 
Package: oselas.toolchain-${toolchain_version}-${gnutriplet}
Architecture: all
Depends: $pkg
Description: Meta package depending on latest OSELAS Toolchain for ${gnutriplet}

Package: oselas.toolchain-${toolchain_version%.*}-${gnutriplet}
Architecture: all
Depends: $pkg
Description: Meta package depending on latest OSELAS Toolchain for ${gnutriplet}
EOF

	echo "/opt/OSELAS.Toolchain-2018.02.0/${gnutriplet}" > "debian/${pkg}.install"
done

if ! cmp -s "$newcontrol" "debian/control"; then
	mv "$newcontrol" "debian/control"
	trap '' INT QUIT EXIT

	echo >&2 debian/control was updated successfully.
	echo >&2 Nevertheless return failure here to eventually abort
	echo >&2 building because the debian/control must not change
	echo >&2 during a build.

	exit 1
else
	touch "debian/control"
fi

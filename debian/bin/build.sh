#!/bin/bash

RELEASE="$(lsb_release -c -s)"
VERSION="$(cat /etc/debian_version)"
VERSION="${VERSION%%.*}"

if ! [[ "${VERSION}" =~ .*/sid ]]; then
	git checkout debian/changelog
	dch --local ~deb${VERSION}+ --distribution ${RELEASE} "Rebuild for ${RELEASE}" || exit
fi

debian/bin/gencontrol.sh "${@}"

dpkg-buildpackage -uc -b -nc

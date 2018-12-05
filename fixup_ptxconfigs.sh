#!/bin/bash

ARGS_FULL=("${@}")

get_replace()
{
    local var="${1}"

    if [ "${!var}" = "y" ]; then
	echo "-e \"s~\# \(${var}\) is not set.*~\1=${!var}~\""
	#FIXME turn it off again
    else
	echo "-e \"s~\(${var}\)=.*~\1=\\\"${!var}\\\"~\""
    fi
}

fixup()
{
    local config="${1}"

    # version
    PTXCONF_CONFIGFILE_VERSION="2018.02.0"
    PTXCONF_PROJECT="OSELAS.Toolchain-2018.02.0"
    PTXCONF_PROJECT="${PTXCONF_PROJECT##*/}"

    # defaults
    PTXCONF_PREFIX="/opt"
    PTXCONF_GLIBC_CONFIG_EXTRA=""
    PTXCONF_GLIBC_TIMESTAMP=""
    PTXCONF_CROSS_GCC_LANG_JAVA=n
    PTXCONF_KERNEL_HEADERS_SANITIZED=n
    # FIXME: nptl vs. linuxthreads

    touple="${config##*/}"
    touple="${touple%.ptxconfig}"

    local ifs_old="${IFS}"
    IFS="_"
    set -- ${touple}
    IFS="${ifs_orig}"

    while [ ${#} -ne 0 ]; do
	part="${1}"
	shift

	case "${part}" in
	    gcc*)
		PTXCONF_CROSS_GCC_VERSION="${part##gcc-}"
		;;
	    glibc*)
		PTXCONF_GLIBC_VERSION="${part##glibc-}"
		;;
	    uclibc*)
		PTXCONF_UCLIBC_VERSION="${part##uclibc-}"
		;;
	    libc*)
		PTXCONF_AVRLIB_VERSION="${part##libc-}"
		;;
	    newlib*)
		PTXCONF_NEWLIB_VERSION="${part##newlib-}"
		;;
	    binutils*)
		PTXCONF_CROSS_BINUTILS_VERSION="${part##binutils-}"
		;;
	    kernel*)
		PTXCONF_KERNEL_HEADERS_VERSION="${part##kernel-}"
		PTXCONF_KERNEL_HEADERS_VERSION="${PTXCONF_KERNEL_HEADERS_VERSION%-sanitized}"

		case "${part}" in
		    *-sanitized)
			PTXCONF_KERNEL_HEADERS_SANITIZED=y
			;;
		esac
		;;
	    linux*)
		echo "please use kernel instead of linux"
		exit 1
		;;
	    java)
		PTXCONF_CROSS_GCC_LANG_JAVA=y
		;;
	    *)
		PTXCONF_GNU_TARGET="${PTXCONF_GNU_TARGET}${PTXCONF_GNU_TARGET:+_}${part}"
		;;
	esac
    done

    #
    # PTXCONF_GLIBC_HEADERS_FAKE_CROSS
    # - ARM eabi hack
    # - mips hack
    #
    case "${PTXCONF_GNU_TARGET}" in
	arm*gnueabi)
	    PTXCONF_GLIBC_HEADERS_FAKE_CROSS="-D__ARM_EABI__"
	    ;;
	mips*)
	    PTXCONF_GLIBC_HEADERS_FAKE_CROSS="-DBOOTSTRAP_GCC -D_MIPS_SIM=_ABIO32"
	    ;;
	*)
	    ;;
    esac

    case "${PTXCONF_GNU_TARGET}" in
	arm*)
	    PTXCONF_ARCH_ARM=y
	    ;;
	aarch64*)
	    PTXCONF_ARCH_ARM64=y
	    ;;
	i?86*)
	    PTXCONF_ARCH_I386=y
	    ;;
	mips*)
	    PTXCONF_ARCH_MIPS=y
	    ;;
	powerpc*)
	    PTXCONF_ARCH_POWERPC=y
	    ;;
	avr)
	    PTXCONF_ARCH_AVR=y
	    ;;
	x86_64*)
	    PTXCONF_ARCH_X86_64=y
	    ;;
	*)
	    echo "unsupported GNU_TARGET: ${PTXCONF_GNU_TARGET}"
	    exit 1
	    ;;
    esac

    #
    # PTXCONF_CROSS_GCC_CONFIG_EXTRA
    # PTXCONF_GLIBC_CONFIG_EXTRA
    #
    case "${PTXCONF_GNU_TARGET}" in
	# softfp, vfp
	arm-1136jfs-linux-gnueabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=softfp	--with-fpu=vfp	--with-cpu=arm1136jf-s"
	    ;;

	# hard, vfp
	arm-1136jfs-linux-gnueabihf)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=hard	--with-fpu=vfp	--with-cpu=arm1136jf-s"
	    ;;

	# softfp, neon
	arm-v7a-linux-gnueabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=softfp	--with-fpu=vfpv3-d16			--with-arch=armv7-a	--with-mode=thumb	--with-tune=cortex-a9"
	    ;;

	# hard, neon
	arm-v7a-linux-gnueabihf)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=hard	--with-fpu=vfpv3-d16			--with-arch=armv7-a	--with-mode=thumb	--with-tune=cortex-a9"
	    ;;

	# softfp, neon
	arm-cortexa8-linux-gnueabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=softfp	--with-fpu=neon	--with-cpu=cortex-a8				--with-mode=thumb"
	    PTXCONF_GLIBC_CONFIG_EXTRA="--disable-multi-arch"
	    ;;

	# hard, neon
	arm-cortexa8-linux-gnueabihf)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=hard	--with-fpu=neon	--with-cpu=cortex-a8				--with-mode=thumb"
	    PTXCONF_GLIBC_CONFIG_EXTRA="--disable-multi-arch"
	    ;;

	# soft, vfp
	arm-v4t-linux-gnueabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft	--with-fpu=vfp				--with-arch=armv4t"
	    ;;
	arm-v5te-linux-gnueabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft	--with-fpu=vfp	--with-cpu=arm926ej-s"
	    ;;
	arm-v7m-uclinuxeabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft	--with-fpu=vfp				--with-arch=armv7-m	--with-mode=thumb"
	    ;;
	arm-v7m-eabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft	--with-fpu=vfp				--with-arch=armv7-m	--with-mode=thumb"
	    ;;

	# hard, vfp
	arm-v7em-*eabihf)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=hard	--with-fpu=fpv4-sp-d16			--with-arch=armv7e-m	--with-mode=thumb"
	    ;;

	aarch64-v8a-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-abi=lp64						--with-arch=armv8-a"
	    ;;

	i486-unknown-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-arch=i486"
	    ;;
	i586-unknown-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-arch=i586"
	    ;;
	i686-unknown-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-arch=i686"
	    ;;
	i686-atom-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-arch=atom --with-fpmath=sse --with-specs='%{!mmovbe:%{!mno-movbe:-mno-movbe}}'"
	    ;;

	x86_64-unknown-linux-gnu)
	    ;;

	mipsel-softfloat-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft"
	    PTXCONF_GLIBC_CONFIG_EXTRA="libc_mips_float=soft"
	    ;;
	powerpc-603e-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-cpu=603e	--disable-altivec"
	    ;;

	avr)
	    #FIXME
	    ;;

	arm-elf)
	    #FIXME
	    ;;

	*)
	    echo "unknown GNU_TARGET: ${PTXCONF_GNU_TARGET}"
	    exit 1
	    ;;
    esac
    case "${PTXCONF_GNU_TARGET}" in
	*linux-gnu*)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="$PTXCONF_CROSS_GCC_CONFIG_EXTRA --enable-linker-build-id"
	    ;;
    esac
    #
    # PTXCONF_GLIBC_CONFIG_EXTRA_CROSS
    #
    PTXCONF_GLIBC_CONFIG_EXTRA_CROSS="--enable-obsolete-rpc --enable-obsolete-nsl --enable-stackguard-randomization --enable-stack-protector=strong"
    case "${PTXCONF_GNU_TARGET}" in
	x86_64-unknown-linux-gnu)
		PTXCONF_GLIBC_CONFIG_EXTRA_CROSS="${PTXCONF_GLIBC_CONFIG_EXTRA_CROSS} --enable-mathvec"
	    ;;
    esac

    #
    # PTXCONF_GLIBC_ENABLE_KERNEL
    #
    case "${PTXCONF_KERNEL_HEADERS_VERSION}" in
	2.6.18)
	    PTXCONF_GLIBC_ENABLE_KERNEL="2.6.16"
	    ;;
	2.6.2[6789])
	    PTXCONF_GLIBC_ENABLE_KERNEL="2.6.23"
	    ;;
	2.6.3[56789])
	    PTXCONF_GLIBC_ENABLE_KERNEL="2.6.23"
	    ;;
	3.[123456789])
	    PTXCONF_GLIBC_ENABLE_KERNEL="2.6.32"
	    ;;
	3.1[0123456789])
	    PTXCONF_GLIBC_ENABLE_KERNEL="3.0"
	    ;;
	4.[0123456789]*)
	    PTXCONF_GLIBC_ENABLE_KERNEL="3.10"
	    ;;
	"")
	    ;;
	*)
	    echo "unknown KERNEL_HEADERS_VERSION: ${PTXCONF_KERNEL_HEADERS_VERSION}"
	    exit 1
    esac


    #
    # PTXCONF_CROSS_GDB_VERSION
    #
    PTXCONF_CROSS_GDB_VERSION="8.2"
    case "${PTXCONF_CROSS_GCC_VERSION}" in
	3.*|4.[012].*)
	    PTXCONF_CROSS_GCC_43=n
	    ;;
	4.[34].*)
	    PTXCONF_CROSS_GCC_43=y
	    ;;
	linaro-4.[34][-.]*)
	    PTXCONF_CROSS_GCC_43=y
	    ;;
	4.[567].*)
	    PTXCONF_CROSS_GCC_45=y
	    ;;
	linaro-4.[567][-.]*)
	    PTXCONF_CROSS_GCC_45=y
	    ;;
	4.[89].*)
	    PTXCONF_CROSS_GCC_48=y
	    ;;
	linaro-4.[89][-.]*)
	    PTXCONF_CROSS_GCC_48=y
	    ;;
	5.*|7.*|8.*)
	    PTXCONF_CROSS_GCC_50=y
	    ;;
	*)
	    echo "unknown CROSS_GCC_VERSION: ${PTXCONF_CROSS_GCC_VERSION}"
	    exit 1
    esac

    case "${PTXCONF_GLIBC_VERSION}" in
	2.22)
	    PTXCONF_GLIBC_LICENSE="GPL-2.0+ AND LGPL-2.1+"
	    PTXCONF_GLIBC_LICENSE_FILES="file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263 file://COPYING.LIB;md5=4fbd65380cdd255951079008b364516c file://LICENSES;md5=e9a558e243b36d3209f380deb394b213"
	    ;;
    esac

    case "${PTXCONF_UCLIBC_VERSION}" in
	0.9.33.2)
	    PTXCONF_UCLIBC_LICENSE="LGPL-2.1+"
	    PTXCONF_UCLIBC_LICENSE_FILES="file://COPYING.LIB;md5=a6f89e2100d9b6cdffcea4f398e37343"
	    ;;
    esac

    case "${PTXCONF_CROSS_GCC_VERSION}" in
	5.2.0)
	    PTXCONF_CROSS_GCC_LICENSE="GPL-2.0+ WITH Classpath-exception-2.0 AND LGPL-2.1+ AND GPL-3.0+ AND GPL-3.0+ WITH GCC-exception-3.1 AND LGPL-3.0+"
	    PTXCONF_CROSS_GCC_LICENSE_FILES="file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552 file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 file://COPYING.RUNTIME;md5=fe60d87048567d4fe8c8a0ed2448bcc8 file://COPYING3;md5=d32239bcb673463ab874e80d47fae504 file://COPYING3.LIB;md5=6a6a8e020838b23406c81b19c1d46df6"
	    PTXCONF_CROSS_GCC_GCCLIBS_LICENSE="GPL-3.0 WITH GCC-exception-3.1"
	    PTXCONF_CROSS_GCC_GCCLIBS_LICENSES="COPYING3 COPYING.RUNTIME"
	    ;;
    esac

    case "${PTXCONF_CROSS_BINUTILS_VERSION}" in
	2.25.1)
	    PTXCONF_CROSS_BINUTILS_LICENSE="GPL-2.0+ AND LGPL-2.0+ GPL-3.0+ AND LGPL-3.0+"
	    PTXCONF_CROSS_BINUTILS_LICENSE_FILES="file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552 file://COPYING.LIB;md5=9f604d8a4f8e74f4f5140845a21b6674 file://COPYING3;md5=d32239bcb673463ab874e80d47fae504 file://COPYING3.LIB;md5=6a6a8e020838b23406c81b19c1d46df6"
	    ;;
    esac

    case "${PTXCONF_CROSS_GDB_VERSION}" in
	7.10)
	    PTXCONF_CROSS_GDB_LICENSE="GPL-2.0+ AND LGPL-2.0+ GPL-3.0+ AND LGPL-3.0+"
	    PTXCONF_CROSS_GDB_LICENSE_FILES="file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552 file://COPYING.LIB;md5=9f604d8a4f8e74f4f5140845a21b6674 file://COPYING3;md5=d32239bcb673463ab874e80d47fae504 file://COPYING3.LIB;md5=6a6a8e020838b23406c81b19c1d46df6"
	    ;;
    esac

    clear

    # add any new variables so they can be replaced
    ./p --force --ptxconfig="${config}" oldconfig < /dev/null || exit 1

    local sed_magic=""
    for var in ${!PTXCONF_@}; do
	# remove tabs :)
	eval "${var}"=\"$(echo "${!var}" | sed -e "s/[\t]\+/ /g")\"

	echo "${var}"="${!var}"
	sed_magic="${sed_magic} $(get_replace "${var}")"
	if [ "${var}" != "PTXCONF_CONFIGFILE_VERSION" ]; then
	    unset "${var}"
	fi
    done

    eval sed -i "${sed_magic}" "${config}"

    echo
    echo
    echo

    # change the configfile to force update
    sed -i 's/PTXCONF__ptxconfig_MAGIC__=y//' "${config}"

    ./p --force --ptxconfig="${config}" oldconfig || exit 1

    # fix PTXdist version
    eval sed -i "$(get_replace PTXCONF_CONFIGFILE_VERSION)" \
	-e "\"s~^\(\# PTXdist \).*~\1${PTXCONF_CONFIGFILE_VERSION}~\"" \
		"${config}"
}

update()
{
    local config="${1}"
    local cmd="${2}"

    local ifs_old="${IFS}"
    IFS=":"
    set -- ${cmd}
    IFS="${ifs_orig}"

    if [ -z "${1}" -o -z "${2}" -o -z "${3}" ]; then
	echo "use --update <component>:<from>:<to>"
	exit 1
    fi

    local component="${1}"
    local from="${2}"
    local to="${3}"

    local config_new="${config/${component}-${from}/${component}-${to}}"

    if [ "${config}" != "${config_new}" ]; then
	git mv "${config}" "${config_new}" || return $?
	fixup "${config_new}"
    fi
}


#
# main()
#

action=fixup
action_args=""

set -- "${ARGS_FULL[@]}"

while [ ${#} -ne 0 ]; do
    arg="${1}"
    shift

    case "${arg}" in
	--update)
	    action=update
	    action_args="${1}"
	    shift
	    ;;
	*)
	    ARGS_SECOND[${#ARGS_SECOND[@]}]="${arg}"
	    ;;
    esac
done


set --  "${ARGS_SECOND[@]}"

if test -n "${1}"; then
    if [ \! -e "${1}" ]; then
	echo "error: '${1}' does not exist"
	exit 1
    fi
    ${action} ${1} "${action_args[@]}"
else
    for config in `find ptxconfigs -name "*.ptxconfig"`; do
	    ${action} ${config} "${action_args[@]}"
    done
fi

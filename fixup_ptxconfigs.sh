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
    PTXCONF_CONFIGFILE_VERSION="2012.12.0"
    PTXCONF_PROJECT="OSELAS.Toolchain-2012.12.0"
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
	    mingw*)
		PTXCONF_MINGW_RUNTIME_VERSION="${part##mingw-}"
		;;
	    w32api*)
		PTXCONF_W32API_VERSION="${part##w32api-}"
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
	    PTXCONF_GLIBC_HEADERS_FAKE_CROSS="-DBOOTSTRAP_GCC"
	    ;;
	*)
	    ;;
    esac

    case "${PTXCONF_GNU_TARGET}" in
	arm*)
	    PTXCONF_ARCH_ARM=y
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
	# hard, fpa
	arm-v4t_hardfloat-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=hard	--with-fpu=fpa				--with-arch=armv4t"
	    ;;
	arm-xscale_hardfloat-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=hard	--with-fpu=fpa	--with-cpu=xscale"
	    ;;

	# softfp, vfp
	arm-1136jfs-linux-gnueabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=softfp	--with-fpu=vfp	--with-cpu=arm1136jf-s"
	    ;;

	# hard, vfp
	arm-1136jfs-linux-gnueabihf)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=hard	--with-fpu=vfp	--with-cpu=arm1136jf-s"
	    ;;

	arm-v5te_vfp-linux-gnueabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=softfp	--with-fpu=vfp	--with-cpu=arm926ej-s"
	    ;;

	# softfp, neon
	arm-cortexa8-linux-gnueabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=softfp	--with-fpu=neon	--with-cpu=cortex-a8"
	    ;;

	# hard, neon
	arm-cortexa8-linux-gnueabihf)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=hard	--with-fpu=neon	--with-cpu=cortex-a8"
	    ;;

	# softfp, neon
	arm-cortexa9-linux-gnueabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=softfp	--with-fpu=neon	--with-cpu=cortex-a9"
	    ;;

	# hard, neon
	arm-cortexa9-linux-gnueabihf)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=hard	--with-fpu=neon	--with-cpu=cortex-a9"
	    ;;

	# soft, vfp
	armeb-xscale-linux-gnueabi|armeb-xscale-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft	--with-fpu=vfp	--with-cpu=xscale"
	    PTXCONF_GLIBC_CONFIG_EXTRA="--without-fp"
	    ;;
	arm-iwmmx-linux-gnueabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft	--with-fpu=vfp	--with-cpu=iwmmxt"
	    PTXCONF_GLIBC_CONFIG_EXTRA="--without-fp"
	    ;;
	arm-v4t-linux-gnueabi|arm-v4t-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft	--with-fpu=vfp				--with-arch=armv4t"
	    PTXCONF_GLIBC_CONFIG_EXTRA="--without-fp"
	    ;;
	arm-v5te-linux-gnueabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft	--with-fpu=vfp	--with-cpu=arm926ej-s"
	    PTXCONF_GLIBC_CONFIG_EXTRA="--without-fp"
	    ;;
	arm-xscale-linux-gnueabi|arm-xscale-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft	--with-fpu=vfp	--with-cpu=xscale"
	    PTXCONF_GLIBC_CONFIG_EXTRA="--without-fp"
	    ;;

	arm-cortexm3-uclinuxeabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft	--with-fpu=vfp	--with-cpu=cortex-m3				--with-mode=thumb	--disable-libgomp --disable-libitm"
	    ;;
	arm-cortexm3-eabi)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft	--with-fpu=vfp	--with-cpu=cortex-m3				--with-mode=thumb"
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
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-arch=atom --with-fpmath=sse"
	    ;;

	x86_64-unknown-linux-gnu)
	    ;;

	mipsel-softfloat-linux-gnu)
	    PTXCONF_CROSS_GCC_CONFIG_EXTRA="--with-float=soft"
	    PTXCONF_GLIBC_CONFIG_EXTRA="--without-fp"
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

	i586-mingw32msvc)
	    #FIXME
	    ;;

	*)
	    echo "unknown GNU_TARGET: ${PTXCONF_GNU_TARGET}"
	    exit 1
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
	"")
	    ;;
	*)
	    echo "unknown KERNEL_HEADERS_VERSION: ${PTXCONF_KERNEL_HEADERS_VERSION}"
	    exit 1
    esac


    #
    # PTXCONF_CROSS_GDB_VERSION
    #
    PTXCONF_CROSS_GDB_VERSION="7.5"
    case "${PTXCONF_CROSS_GCC_VERSION}" in
	3.*|4.[012].*)
	    PTXCONF_CROSS_GCC_43=n
	    ;;
	4.[3456789].*)
	    PTXCONF_CROSS_GCC_43=y
	    ;;
	linaro-4.[3456789][-.]*)
	    PTXCONF_CROSS_GCC_43=y
	    ;;
	*)
	    echo "unknown CROSS_GCC_VERSION: ${PTXCONF_CROSS_GCC_VERSION}"
	    exit 1
    esac


    clear

    local sed_magic=""
    for var in ${!PTXCONF_@}; do
	# remove tabs :)
	eval "${var}"=\"$(echo "${!var}" | sed -e "s/[\t]\+/ /g")\"

	echo "${var}"="${!var}"
	sed_magic="${sed_magic} $(get_replace "${var}")"
	unset "${var}"
    done

    eval sed -i "${sed_magic}" "${config}"

    echo
    echo
    echo

    # change the configfile to force update
    sed -i 's/PTXCONF__ptxconfig_MAGIC__=y//' "${config}"

    ./p --force --ptxconfig="${config}" oldconfig || exit 1
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

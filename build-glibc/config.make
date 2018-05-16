# config.make.  Generated from config.make.in by configure.
# Don't edit this file.  Put configuration parameters in configparms instead.

version = 2.8
release = stable

# Installation prefixes.
install_root =
prefix = /opt/cross/arm-linux
exec_prefix = ${prefix}
datadir = ${datarootdir}
libdir = ${exec_prefix}/lib
slibdir = 
localedir = 
sysconfdir = ${prefix}/etc
libexecdir = ${exec_prefix}/libexec
rootsbindir = 
infodir = ${datarootdir}/info
includedir = ${prefix}/include
datarootdir = ${prefix}/share

# Should we use and build ldconfig?
use-ldconfig = yes

# Maybe the `ldd' script must be rewritten.
ldd-rewrite-script = no

# System configuration.
config-machine = arm
base-machine = arm
config-vendor = c4ev3
config-os = linux-gnueabi
config-sysdirs =  ports/sysdeps/arm/elf ports/sysdeps/unix/sysv/linux/arm/eabi/nptl ports/sysdeps/unix/sysv/linux/arm/eabi ports/sysdeps/unix/sysv/linux/arm/nptl ports/sysdeps/unix/sysv/linux/arm nptl/sysdeps/unix/sysv/linux nptl/sysdeps/pthread sysdeps/pthread ports/sysdeps/unix/sysv/linux sysdeps/unix/sysv/linux sysdeps/gnu sysdeps/unix/common sysdeps/unix/mman sysdeps/unix/inet nptl/sysdeps/unix/sysv ports/sysdeps/unix/sysv sysdeps/unix/sysv ports/sysdeps/unix/arm nptl/sysdeps/unix ports/sysdeps/unix sysdeps/unix sysdeps/posix ports/sysdeps/arm/eabi ports/sysdeps/arm/fpu ports/sysdeps/arm/nptl ports/sysdeps/arm sysdeps/wordsize-32 sysdeps/ieee754/flt-32 sysdeps/ieee754/dbl-64 sysdeps/ieee754 sysdeps/generic/elf sysdeps/generic
with-cpu = 

defines =  -D_LIBC_REENTRANT
sysincludes = -nostdinc -isystem /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include -isystem /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include-fixed -isystem /opt/cross/arm-linux/include
c++-sysincludes = -isystem ../../../../include/c++/8.1.0 -isystem ../../../../include/c++/8.1.0/arm-linux-gnueabi -isystem ../../../../include/c++/8.1.0/backward
all-warnings = 

elf = yes
have-z-combreloc = no
have-z-execstack = yes
have-initfini = 
have-Bgroup = yes
have-as-needed = yes
libgcc_s_suffix = 
need-nopic-initfini = 
with-fp = yes
with-cvs = yes
old-glibc-headers = no
unwind-find-fde = no
have-cpp-asm-debuginfo = @libc_cv_cpp_asm_debuginfo@
enable-check-abi = no
have-forced-unwind = yes
have-fpie = no
gnu89-inline-CFLAGS = -fgnu89-inline
have-ssp = no
have-selinux = no
have-libaudit = 
have-libcap = 
have-cc-with-libunwind = no
fno-unit-at-a-time = -fno-toplevel-reorder -fno-section-anchors
bind-now = no
have-hash-style = yes

static-libgcc = -static-libgcc

versioning = yes
oldest-abi = default
no-whole-archive = -Wl,--no-whole-archive
exceptions = -fexceptions

mach-interface-list = 

have-bash2 = yes
have-ksh = yes

sizeof-long-double = 0

# Configuration options.
build-static = yes
build-shared = yes
build-pic-default= no
build-profile = no
build-omitfp = no
build-bounded = no
build-static-nss = no
add-ons = nptl ports
add-on-subdirs = 
sysdeps-add-ons =  nptl ports
cross-compiling = yes
force-install = yes

# Build tools.
CC = arm-c4ev3-linux-gnueabi-gcc
CXX = arm-c4ev3-linux-gnueabi-g++
BUILD_CC = gcc
CFLAGS = -g -O2
ASFLAGS-config =  -Wa,--noexecstack
AR = /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/../../../../arm-linux-gnueabi/bin/ar
RANLIB = :
MAKEINFO = makeinfo
AS = $(CC) -c
MIG = 
PWD_P = /bin/pwd
BISON = /usr/bin/bison
AUTOCONF = autoconf
OBJDUMP = /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/../../../../arm-linux-gnueabi/bin/objdump

# Installation tools.
INSTALL = /usr/local/bin/ginstall -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_INFO = /usr/bin/install-info
LN_S = ln -s
MSGFMT = msgfmt

# Script execution tools.
BASH = /bin/bash
KSH = /bin/bash
AWK = gawk
PERL = /usr/local/bin/perl

# Additional libraries.
LIBGD = no

# More variables may be inserted below by configure.

override stddef.h = # The installed <stddef.h> seems to be libc-friendly.

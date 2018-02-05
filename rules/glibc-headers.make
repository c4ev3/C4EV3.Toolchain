# -*-makefile-*-
#
# Copyright (C) 2006 by Robert Schwebel
#               2009 by Marc Kleine-Budde <mkl@pengutronix.de>
#               2013 by Michael Olbrich <m.olbrich@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_GLIBC_HEADERS) += glibc-headers

#
# Paths and names
#
GLIBC_HEADERS_VERSION	:= $(call remove_quotes,$(PTXCONF_GLIBC_VERSION))
GLIBC_HEADERS_MD5	:= $(call remove_quotes,$(PTXCONF_GLIBC_MD5))
GLIBC_HEADERS		:= glibc-$(GLIBC_HEADERS_VERSION)
GLIBC_HEADERS_SUFFIX	:= tar.bz2
GLIBC_HEADERS_SOURCE	:= $(SRCDIR)/$(GLIBC_HEADERS).$(GLIBC_HEADERS_SUFFIX)
GLIBC_HEADERS_DIR	:= $(BUILDDIR)/glibc-headers-$(GLIBC_HEADERS_VERSION)
GLIBC_HEADERS_BUILDDIR	:= $(GLIBC_HEADERS_DIR)-build
GLIBC_HEADERS_URL	 = $(GLIBC_URL)
GLIBC_HEADERS_BUILD_OOT	:= YES
GLIBC_HEADERS_LICENSE	:= ignore

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

GLIBC_HEADERS_PATH := PATH=$(CROSS_PATH)
#
# these various env variables are necessary, because we are using the host compiler
# it doesn't matter if we define ppc stuff during arm build
# they aren't tested :)
# no ifdefs for simplicity
#
GLIBC_HEADERS_ENV  := \
	$(HOST_ENV) \
	CC="gcc $(PTXCONF_GLIBC_HEADERS_FAKE_CROSS)" \
	\
	libc_cv_prog_as_gnu=yes \
	libc_cv_prog_ld_gnu=yes \
	ac_cv_prog_AS="$(PTXCONF_SYSROOT_CROSS)/bin/$(COMPILER_PREFIX)as" \
	ac_cv_prog_LD="$(PTXCONF_SYSROOT_CROSS)/bin/$(COMPILER_PREFIX)ld.bfd" \
	\
	libc_cv_asm_cfi_directive_sections=yes \
	libc_cv_asm_cfi_directives=yes \
	libc_cv_asm_cfi_personality=yes \
	libc_cv_asm_protected_directive=yes \
	libc_cv_asm_symver_directive=yes \
	libc_cv_broken_alias_attribute=no \
	libc_cv_broken_visibility_attribute=no \
	libc_cv_forced_unwind=yes \
	libc_cv_gcc___thread=yes \
	libc_cv_initfini_array=yes \
	libc_cv_visibility_attribute=yes \
	libc_cv_z_initfirst=yes \
	libc_cv_z_nodelete=yes \
	libc_cv_z_nodlopen=yes \
	libc_cv_z_relro=yes \
	libc_cv_predef_stack_protector=no \
	\
	libc_cv_386_tls=yes \
	\
	libc_cv_x86_64_tls=yes \
	\
	libc_cv_arm_tls=yes \
	\
	libc_cv_mips_tls=yes \
	libc_cv_have_sdata_section=yes \
	\
	libc_cv_powerpc32_tls=yes \
	libc_cv_powerpc64_tls=yes \
	libc_cv_mlong_double_128ibm=set \
	libc_cv_mlong_double_128=set \
	libc_cv_ppc_machine=yes \
	libc_cv_ppc_rel16=yes \
	\
	ac_cv_header_cpuid_h=yes \
	ac_cv_path_GREP=grep

#
# autoconf
#
GLIBC_HEADERS_CONF_TOOL	:= autoconf
GLIBC_HEADERS_CONF_OPT	 = \
	$(GLIBC_AUTOCONF_COMMON) \
	\
	--enable-hacker-mode

$(STATEDIR)/glibc-headers.prepare:
	@$(call targetinfo)
#	# --enable-hacker-mode is not a real option but needed here
	@sed -i "s:^\(enable_option_checking\)=.*:\1=no:" \
		$(GLIBC_HEADERS_DIR)/configure
	@$(call world/prepare, GLIBC_HEADERS)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

GLIBC_HEADERS_MAKE_OPT	:= sysdeps/gnu/errlist.c

$(STATEDIR)/glibc-headers.compile:
	@$(call targetinfo)
	@$(call world/compile, GLIBC_HEADERS)
	@mkdir -vp $(GLIBC_HEADERS_BUILDDIR)/stdio-common
	touch $(GLIBC_HEADERS_BUILDDIR)/stdio-common/errlist-compat.c
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

GLIBC_HEADERS_INSTALL_OPT := \
	cross_compiling=yes \
	install_root=$(SYSROOT) \
	install-headers

$(STATEDIR)/glibc-headers.install:
	@$(call targetinfo)
	@$(call world/install, GLIBC_HEADERS)
	@mkdir -vp $(SYSROOT)/usr/include/gnu
	touch $(SYSROOT)/usr/include/gnu/stubs.h
	@cp -v $(GLIBC_HEADERS_DIR)/include/features.h $(SYSROOT)/usr/include/features.h
	@cp -v $(GLIBC_HEADERS_BUILDDIR)/bits/stdio_lim.h $(SYSROOT)/usr/include/bits/stdio_lim.h
	@$(call touch)

# vim: syntax=make

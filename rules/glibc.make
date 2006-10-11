# -*-makefile-*-
# $Id$
#
# Copyright (C) 2006 by Robert Schwebel
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_GLIBC) += glibc

#
# Paths and names
#
GLIBC_VERSION	:= $(call remove_quotes,$(PTXCONF_GLIBC_VERSION))
GLIBC		:= glibc-$(GLIBC_VERSION)
GLIBC_SUFFIX	:= tar.bz2
GLIBC_URL	:= $(PTXCONF_SETUP_GNUMIRROR)/glibc/$(GLIBC).$(GLIBC_SUFFIX)
GLIBC_SOURCE	:= $(SRCDIR)/$(GLIBC).$(GLIBC_SUFFIX)
GLIBC_DIR	:= $(BUILDDIR)/$(GLIBC)
GLIBC_BUILDDIR	:= $(BUILDDIR)/$(GLIBC)-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

glibc_get: $(STATEDIR)/glibc.get

$(STATEDIR)/glibc.get: $(glibc_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(GLIBC_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, GLIBC)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

glibc_extract: $(STATEDIR)/glibc.extract

$(STATEDIR)/glibc.extract: $(glibc_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(GLIBC_DIR))
	@$(call clean, $(GLIBC_BUILDDIR))
	@$(call extract, GLIBC)
	@$(call patchin, GLIBC)

ifdef PTXCONF_GLIBC_LINUXTHREADS
	cp -r $(GLIBC_LINUXTHREADS_DIR)/linuxthreads $(GLIBC_DIR)
	cp -r $(GLIBC_LINUXTHREADS_DIR)/linuxthreads_db $(GLIBC_DIR)
endif
ifdef PTXCONF_GLIBC_PORTS
	ln -sf $(GLIBC_PORTS_DIR) $(GLIBC_DIR)/ports
endif
	mkdir -p $(GLIBC_BUILDDIR)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

glibc_prepare: $(STATEDIR)/glibc.prepare

GLIBC_PATH := PATH=$(CROSS_PATH)

GLIBC_ENV := \
	BUILD_CC=$(HOSTCC) \
	libc_cv_forced_unwind=yes \
	libc_cv_c_cleanup=yes

#
# libc_cv_forced_unwind=yes
# libc_cv_c_cleanup=yes
#
# is needed for nptl (mkl)
#

#
# autoconf
#
ifdef PTXCONF_GLIBC_PORTS
GLIBC_ADDONS	+= ports
endif
ifdef PTXCONF_GLIBC_ADDON_NPTL
GLIBC_ADDONS	+= nptl
endif
ifdef PTXCONF_GLIBC_ADDON_LINUXTHREADS
GLIBC_ADDONS	+= linuxthreads
endif

GLIBC_AUTOCONF := \
	--prefix=/usr \
	--build=$(GNU_BUILD) \
	--host=$(PTXCONF_GNU_TARGET) \
	$(call remove_quotes,$(PTXCONF_GLIBC_EXTRA_CONFIG)) \
	--enable-add-ons=$(subst $(space),$(comma),$(GLIBC_ADDONS)) \
	--with-headers=$(SYSROOT)/usr/include \
	--enable-kernel=2.4.3 \
	--without-cvs \
	--disable-sanity-checks \
	--disable-profile \
        --enable-debug \
	--without-gd \
	--with-__thread \
        --enable-shared

ifdef PTXCONF_GLIBC_TLS
GLIBC_AUTOCONF	+= --with-tls
endif

#
# --enable-profile
#
# is broken, see http://gcc.gnu.org/bugzilla/show_bug.cgi?id=28516
#


$(STATEDIR)/glibc.prepare: $(glibc_prepare_deps_default)
	@$(call targetinfo, $@)
	cd $(GLIBC_BUILDDIR) && \
		$(GLIBC_ENV) $(GLIBC_PATH) \
		$(GLIBC_DIR)/configure $(GLIBC_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

glibc_compile: $(STATEDIR)/glibc.compile

$(STATEDIR)/glibc.compile: $(glibc_compile_deps_default)
	@$(call targetinfo, $@)
	cd $(GLIBC_BUILDDIR) && $(GLIBC_PATH) \
		$(MAKE) $(PARALLELMFLAGS) lib
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

glibc_install: $(STATEDIR)/glibc.install

$(STATEDIR)/glibc.install: $(glibc_install_deps_default)
	@$(call targetinfo, $@)
	cd $(GLIBC_BUILDDIR) && \
		$(GLIBC_PATH) $(MAKE) \
		install_root=$(SYSROOT) install-lib-all install-headers
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

glibc_targetinstall: $(STATEDIR)/glibc.targetinstall

$(STATEDIR)/glibc.targetinstall: $(glibc_targetinstall_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc_clean:
	rm -rf $(STATEDIR)/glibc.*
	rm -rf $(GLIBC_DIR)

# vim: syntax=make

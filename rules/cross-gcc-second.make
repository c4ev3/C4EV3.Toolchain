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
CROSS_PACKAGES-$(PTXCONF_CROSS_GCC_SECOND) += cross-gcc-second

#
# Paths and names
#
CROSS_GCC_SECOND_BUILDDIR	= $(CROSS_BUILDDIR)/$(CROSS_GCC_FIRST)-second-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-gcc-second.get: $(STATEDIR)/cross-gcc-first.get
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-gcc-second.extract: $(STATEDIR)/cross-gcc-first.extract
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

CROSS_GCC_SECOND_PATH	:= PATH=$(CROSS_PATH)
CROSS_GCC_SECOND_ENV	:= $(HOSTCC_ENV)

#
# autoconf
#
CROSS_GCC_SECOND_AUTOCONF = \
	$(CROSS_GCC_AUTOCONF_COMMON) \
	--prefix=$(PTXCONF_SYSROOT_CROSS) \
	\
	--enable-languages=$(PTXCONF_CROSS_GCC_LANG) \
	--enable-threads=$(PTXCONF_CROSS_GCC_THREADS) \
	--enable-c99 \
	--enable-long-long \
	--enable-libstdcxx-debug \
	--enable-profile \
	\
	--enable-intermodule \
	\
	$(PTXCONF_CROSS_GCC_EXTRA_CONFIG_SHARED)

$(STATEDIR)/cross-gcc-second.prepare:
	@$(call targetinfo)
	@$(call clean, $(CROSS_GCC_SECOND_BUILDDIR))
	mkdir -p $(CROSS_GCC_SECOND_BUILDDIR)
	cd $(CROSS_GCC_SECOND_BUILDDIR) && \
		$(CROSS_GCC_SECOND_PATH) $(CROSS_GCC_SECOND_ENV) \
		$(CROSS_GCC_FIRST_DIR)/configure $(CROSS_GCC_SECOND_AUTOCONF)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-gcc-second.compile:
	@$(call targetinfo)
	cd $(CROSS_GCC_SECOND_BUILDDIR) && $(CROSS_GCC_SECOND_PATH) \
		$(MAKE) $(PARALLELMFLAGS)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-gcc-second.install:
	@$(call targetinfo)
	cd $(CROSS_GCC_SECOND_BUILDDIR) && \
		$(CROSS_GCC_SECOND_PATH) $(MAKE) install
	@find $(PTXCONF_SYSROOT_CROSS) -name "*.la" | while read la_file; do	\
		rm -v $${la_file};						\
	done
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

cross-gcc-second_clean:
	rm -rf $(STATEDIR)/cross-gcc-second.*
	rm -rf $(CROSS_GCC_SECOND_DIR)
	rm -rf $(CROSS_GCC_SECOND_BUILDDIR)

# vim: syntax=make

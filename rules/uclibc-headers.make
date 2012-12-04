# -*-makefile-*-
# $Id: template 6001 2006-08-12 10:15:00Z mkl $
#
# Copyright (C) 2006-2008 by Marc Kleine-Budde <mkl@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_UCLIBC_HEADERS) += uclibc-headers

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(STATEDIR)/uclibc-headers.get: $(STATEDIR)/uclibc.get
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/uclibc-headers.extract: $(STATEDIR)/uclibc.extract
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

$(UCLIBC_CONFIG):
	@echo
	@echo "**************************************************************************"
	@echo "**** Please generate a uclibc config with 'ptxdist menuconfig uclibc' ****"
	@echo "**************************************************************************"
	@echo
	@echo
	@exit 1

$(STATEDIR)/uclibc-headers.prepare: $(UCLIBC_CONFIG)
	@$(call targetinfo)

	@if [ -f $(UCLIBC_CONFIG) ]; then				\
		echo "Using uclibc config file: $(UCLIBC_CONFIG)";	\
		install -m 644 $(UCLIBC_CONFIG) $(UCLIBC_DIR)/.config; 	\
	else								\
		echo "ERROR: No such uclibc config: $(UCLIBC_CONFIG)";	\
		exit 1;							\
	fi

	cd $(UCLIBC_DIR) && yes "" | \
		$(UCLIBC_PATH) $(UCLIBC_ENV) $(MAKE)  \
		$(UCLIBC_MAKEVARS) oldconfig

	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/uclibc-headers.compile:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/uclibc-headers.install:
	@$(call targetinfo)
	cd $(UCLIBC_DIR) && \
		$(UCLIBC_PATH) $(UCLIBC_ENV) \
		$(MAKE) $(UCLIBC_MAKEVARS) \
		install_headers
	@$(call touch)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

$(STATEDIR)/uclibc-headers.targetinstall:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

uclibc-headers_clean:
	rm -rf $(STATEDIR)/uclibc-headers.*
	rm -rf $(UCLIBC_HEADERS_DIR)

# vim: syntax=make

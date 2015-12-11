# -*-makefile-*-
#
# Copyright (C) 2015 by Michael Olbrich <m.olbrich@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

world/env/impl += \
	pkg_ldflags="$(call ptx/escape,$($(1)_LDFLAGS)) -Wl,--as-needed"

# vim: syntax=make

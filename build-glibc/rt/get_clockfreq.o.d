$(common-objpfx)rt/get_clockfreq.o: get_clockfreq.c \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/wordsize-32/symbol-hacks.h ../include/libc-internal.h \
 ../sysdeps/generic/hp-timing.h

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:

../include/libc-internal.h:

../sysdeps/generic/hp-timing.h:

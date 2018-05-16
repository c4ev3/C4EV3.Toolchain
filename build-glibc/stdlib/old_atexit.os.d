$(common-objpfx)stdlib/old_atexit.os: old_atexit.c \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/wordsize-32/symbol-hacks.h ../include/shlib-compat.h

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:

../include/shlib-compat.h:

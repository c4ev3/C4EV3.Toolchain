$(common-objpfx)misc/umount.o: \
 ../ports/sysdeps/unix/sysv/linux/arm/eabi/umount.c \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/wordsize-32/symbol-hacks.h

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:

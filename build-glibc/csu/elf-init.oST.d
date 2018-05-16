$(common-objpfx)csu/elf-init.oST: elf-init.c \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/wordsize-32/symbol-hacks.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stddef.h

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stddef.h:

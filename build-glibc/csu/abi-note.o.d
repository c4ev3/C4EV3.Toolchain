$(common-objpfx)csu/abi-note.o: abi-note.S \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/wordsize-32/symbol-hacks.h \
 $(common-objpfx)csu/abi-tag.h

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:

$(common-objpfx)csu/abi-tag.h:

	.cpu arm10tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 2
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"pt-initfini.c"
	.text
	.syntax divided
	
#include "defs.h"
	
/*@HEADER_ENDS*/
/*@_init_EPILOG_BEGINS*/
@ 0 "" 2
@ 87 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	.section .init
@ 0 "" 2
	.arm
	.syntax unified
	pop	{r4, pc}
	.syntax divided
	END_INIT
	
/*@_init_EPILOG_ENDS*/
/*@_fini_EPILOG_BEGINS*/
@ 0 "" 2
@ 116 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	.section .fini
@ 0 "" 2
	.arm
	.syntax unified
	pop	{r4, pc}
	.syntax divided
	END_FINI
	
/*@_fini_EPILOG_ENDS*/
/*@TRAILER_BEGINS*/
	.hidden	__pthread_initialize_minimal_internal
	.ident	"GCC: (GCC for c4ev3 2018-05-15) 8.1.0"
	.section	.note.GNU-stack,"",%progbits

/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#define IN_TARGET_CODE 1
#include "bconfig.h"
#define INCLUDE_STRING
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef CHECKING_P
#define CHECKING_P 0
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT
#define USE_ENUM_MODES

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "memmodel.h"
#include "tm_p.h"
#include "hard-reg-set.h"
#include "function.h"
#include "emit-rtl.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "predict.h"
#include "basic-block.h"
#include "bitmap.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx_insn *insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 1083 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !flag_pic",
    __builtin_constant_p 
#line 1083 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !flag_pic)
    ? (int) 
#line 1083 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !flag_pic)
    : -1 },
#line 6306 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "flag_pic",
    __builtin_constant_p 
#line 6306 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(flag_pic)
    ? (int) 
#line 6306 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(flag_pic)
    : -1 },
#line 9080 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)",
    __builtin_constant_p 
#line 9080 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    ? (int) 
#line 9080 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    : -1 },
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 11776 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_CRC32",
    __builtin_constant_p 
#line 11776 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_CRC32)
    ? (int) 
#line 11776 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_CRC32)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (arm_arch_thumb2\n\
   && IN_RANGE (INTVAL (operands[3]), 0, 31)\n\
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3])))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4529 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch_thumb2
   && IN_RANGE (INTVAL (operands[3]), 0, 31)
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3]))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4529 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch_thumb2
   && IN_RANGE (INTVAL (operands[3]), 0, 31)
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3]))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT\n\
   && TARGET_SOFT_FLOAT\n\
   && (!MEM_P (operands[0])\n\
       || register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6965 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6965 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode))))
    : -1 },
#line 6036 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2])",
    __builtin_constant_p 
#line 6036 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2]))
    ? (int) 
#line 6036 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2]))
    : -1 },
#line 1732 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch6 && optimize_size",
    __builtin_constant_p 
#line 1732 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6 && optimize_size)
    ? (int) 
#line 1732 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6 && optimize_size)
    : -1 },
#line 6782 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && reload_completed && IS_VFP_REGNUM (REGNO (operands[0]))",
    __builtin_constant_p 
#line 6782 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed && IS_VFP_REGNUM (REGNO (operands[0])))
    ? (int) 
#line 6782 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed && IS_VFP_REGNUM (REGNO (operands[0])))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 252 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 252 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    : -1 },
#line 309 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))\n\
   && !(TARGET_NEON && CONST_INT_P (operands[1])\n\
        && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL))",
    __builtin_constant_p 
#line 309 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))
   && !(TARGET_NEON && CONST_INT_P (operands[1])
        && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))
    ? (int) 
#line 309 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))
   && !(TARGET_NEON && CONST_INT_P (operands[1])
        && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))
    : -1 },
#line 1508 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed",
    __builtin_constant_p 
#line 1508 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed)
    ? (int) 
#line 1508 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed)
    : -1 },
#line 6722 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 6722 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && flag_unsafe_math_optimizations)
    ? (int) 
#line 6722 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && flag_unsafe_math_optimizations)
    : -1 },
#line 11972 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MRC)",
    __builtin_constant_p 
#line 11972 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRC))
    ? (int) 
#line 11972 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRC))
    : -1 },
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4HFmode)\n\
       || register_operand (operands[1], V4HFmode))",
    __builtin_constant_p 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HFmode)
       || register_operand (operands[1], V4HFmode)))
    ? (int) 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HFmode)
       || register_operand (operands[1], V4HFmode)))
    : -1 },
  { "(TARGET_THUMB2 && !arm_restrict_it) && ( true)",
    __builtin_constant_p (
#line 411 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it) && 
#line 413 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
( true))
    ? (int) (
#line 411 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it) && 
#line 413 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
( true))
    : -1 },
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], CImode)\n\
       || register_operand (operands[1], CImode))",
    __builtin_constant_p 
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    ? (int) 
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HARD_TP)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11375 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HARD_TP))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11375 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HARD_TP))
    : -1 },
#line 1854 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && (!false || flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 1854 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations))
    ? (int) 
#line 1854 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations))
    : -1 },
#line 11402 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 11402 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_GNU2_TLS)
    ? (int) 
#line 11402 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_GNU2_TLS)
    : -1 },
#line 804 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && !arm_restrict_it",
    __builtin_constant_p 
#line 804 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && !arm_restrict_it)
    ? (int) 
#line 804 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && !arm_restrict_it)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && reload_completed)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11798 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11798 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed))
    : -1 },
#line 3350 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !TARGET_IWMMXT",
    __builtin_constant_p 
#line 3350 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT)
    ? (int) 
#line 3350 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT)
    : -1 },
#line 339 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
  { "TARGET_DSP_MULTIPLY",
    __builtin_constant_p 
#line 339 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY)
    ? (int) 
#line 339 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY)
    : -1 },
#line 3081 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM || (TARGET_THUMB2 && CONST_INT_P (operands[2]))",
    __builtin_constant_p 
#line 3081 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM || (TARGET_THUMB2 && CONST_INT_P (operands[2])))
    ? (int) 
#line 3081 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM || (TARGET_THUMB2 && CONST_INT_P (operands[2])))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 263 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 263 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    : -1 },
#line 6130 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_USE_MOVT && GET_CODE (operands[1]) == SYMBOL_REF\n\
   && !flag_pic && !target_word_relocations\n\
   && !arm_tls_referenced_p (operands[1])",
    __builtin_constant_p 
#line 6130 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_USE_MOVT && GET_CODE (operands[1]) == SYMBOL_REF
   && !flag_pic && !target_word_relocations
   && !arm_tls_referenced_p (operands[1]))
    ? (int) 
#line 6130 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_USE_MOVT && GET_CODE (operands[1]) == SYMBOL_REF
   && !flag_pic && !target_word_relocations
   && !arm_tls_referenced_p (operands[1]))
    : -1 },
#line 11894 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_CDP)",
    __builtin_constant_p 
#line 11894 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_CDP))
    ? (int) 
#line 11894 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_CDP))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], 0, false, true)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11708 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11708 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true))))
    : -1 },
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && XVECLEN (operands[0], 0) == 5)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 283 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 283 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5))
    : -1 },
#line 6098 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_THUMB\n\
   && TARGET_HAVE_MOVT\n\
   && arm_disable_literal_pool\n\
   && reload_completed\n\
   && GET_CODE (operands[1]) == SYMBOL_REF",
    __builtin_constant_p 
#line 6098 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_THUMB
   && TARGET_HAVE_MOVT
   && arm_disable_literal_pool
   && reload_completed
   && GET_CODE (operands[1]) == SYMBOL_REF)
    ? (int) 
#line 6098 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_THUMB
   && TARGET_HAVE_MOVT
   && arm_disable_literal_pool
   && reload_completed
   && GET_CODE (operands[1]) == SYMBOL_REF)
    : -1 },
#line 1119 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && IS_CMSE_ENTRY (arm_current_func_type ())",
    __builtin_constant_p 
#line 1119 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && IS_CMSE_ENTRY (arm_current_func_type ()))
    ? (int) 
#line 1119 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && IS_CMSE_ENTRY (arm_current_func_type ()))
    : -1 },
#line 11584 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_EITHER && (arm_arch6 || !optimize_size)",
    __builtin_constant_p 
#line 11584 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_EITHER && (arm_arch6 || !optimize_size))
    ? (int) 
#line 11584 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_EITHER && (arm_arch6 || !optimize_size))
    : -1 },
#line 415 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && !arm_arch6",
    __builtin_constant_p 
#line 415 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch6)
    ? (int) 
#line 415 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch6)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1456 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST)))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1456 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST)))
    : -1 },
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 355 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 355 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 355 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 6658 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON",
    __builtin_constant_p 
#line 6658 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON)
    ? (int) 
#line 6658 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON)
    : -1 },
#line 1647 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 1647 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 1647 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch6)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 408 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 408 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6))
    : -1 },
#line 309 "../../gcc-8.1.0/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 309 "../../gcc-8.1.0/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT)
    ? (int) 
#line 309 "../../gcc-8.1.0/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT)
    : -1 },
#line 1070 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 1070 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 1070 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 11990 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MCRR2)",
    __builtin_constant_p 
#line 11990 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCRR2))
    ? (int) 
#line 11990 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCRR2))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (unaligned_access)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4501 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(unaligned_access))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4501 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(unaligned_access))
    : -1 },
#line 1617 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 1617 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT)
    ? (int) 
#line 1617 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT)
    : -1 },
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && SMAX != SMIN\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)",
    __builtin_constant_p 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMIN
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    ? (int) 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMIN
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 525 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 525 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER))
    : -1 },
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    : -1 },
  { "(TARGET_NEON && flag_unsafe_math_optimizations) && (TARGET_NEON_FP16INST)",
    __builtin_constant_p (
#line 6722 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && flag_unsafe_math_optimizations) && 
#line 124 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    ? (int) (
#line 6722 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && flag_unsafe_math_optimizations) && 
#line 124 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    : -1 },
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 2493 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32\n\
      && INTVAL (operands[1]) > 0 \n\
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8\n\
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)",
    __builtin_constant_p 
#line 2493 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))
    ? (int) 
#line 2493 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))
    : -1 },
#line 144 "../../gcc-8.1.0/gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD",
    __builtin_constant_p 
#line 144 "../../gcc-8.1.0/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD)
    ? (int) 
#line 144 "../../gcc-8.1.0/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD)
    : -1 },
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], OImode)\n\
       || register_operand (operands[1], OImode))",
    __builtin_constant_p 
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    ? (int) 
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    : -1 },
#line 8165 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "use_cmse",
    __builtin_constant_p 
#line 8165 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(use_cmse)
    ? (int) 
#line 8165 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(use_cmse)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], -4, false, true)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11721 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11721 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true))))
    : -1 },
#line 8421 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM  && use_simple_return_p ()",
    __builtin_constant_p 
#line 8421 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM  && use_simple_return_p ())
    ? (int) 
#line 8421 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM  && use_simple_return_p ())
    : -1 },
#line 379 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
  { "TARGET_INT_SIMD",
    __builtin_constant_p 
#line 379 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD)
    ? (int) 
#line 379 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD)
    : -1 },
#line 6285 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 6285 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 6285 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 80 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT\n\
  && !TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 80 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 80 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 744 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && satisfies_constraint_Pe (operands[1])\n\
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1]))",
    __builtin_constant_p 
#line 744 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_Pe (operands[1])
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1])))
    ? (int) 
#line 744 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_Pe (operands[1])
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1])))
    : -1 },
#line 2927 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))\n\
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0]))",
    __builtin_constant_p 
#line 2927 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    ? (int) 
#line 2927 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    : -1 },
#line 9119 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)\n\
  && !(TARGET_THUMB2 && optimize_insn_for_size_p ())",
    __builtin_constant_p 
#line 9119 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)
  && !(TARGET_THUMB2 && optimize_insn_for_size_p ()))
    ? (int) 
#line 9119 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)
  && !(TARGET_THUMB2 && optimize_insn_for_size_p ()))
    : -1 },
#line 6069 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "(TARGET_32BIT || TARGET_HAVE_MOVT)\n\
  && (!(const_ok_for_arm (INTVAL (operands[1]))\n\
        || const_ok_for_arm (~INTVAL (operands[1]))))",
    __builtin_constant_p 
#line 6069 "../../gcc-8.1.0/gcc/config/arm/arm.md"
((TARGET_32BIT || TARGET_HAVE_MOVT)
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1])))))
    ? (int) 
#line 6069 "../../gcc-8.1.0/gcc/config/arm/arm.md"
((TARGET_32BIT || TARGET_HAVE_MOVT)
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1])))))
    : -1 },
#line 3908 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_eliminable_register (operands[1])\n\
   && !(arm_restrict_it && CONST_INT_P (operands[3]))",
    __builtin_constant_p 
#line 3908 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1])
   && !(arm_restrict_it && CONST_INT_P (operands[3])))
    ? (int) 
#line 3908 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1])
   && !(arm_restrict_it && CONST_INT_P (operands[3])))
    : -1 },
#line 816 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 816 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 816 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2\n\
  && (register_operand (operands[0], HImode)\n\
     || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 295 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 295 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode))))
    : -1 },
  { "(TARGET_NEON) && ( reload_completed)",
    __builtin_constant_p (
#line 5466 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON) && 
#line 5468 "../../gcc-8.1.0/gcc/config/arm/neon.md"
( reload_completed))
    ? (int) (
#line 5466 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON) && 
#line 5468 "../../gcc-8.1.0/gcc/config/arm/neon.md"
( reload_completed))
    : -1 },
  { "(TARGET_THUMB1) && ( reload_completed)",
    __builtin_constant_p (
#line 1954 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1) && 
#line 1956 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
( reload_completed))
    ? (int) (
#line 1954 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1) && 
#line 1956 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
( reload_completed))
    : -1 },
#line 8360 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "(TARGET_ARM || (TARGET_THUMB2\n\
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL\n\
                   && !IS_STACKALIGN (arm_current_func_type ())))\n\
     && USE_RETURN_INSN (FALSE)",
    __builtin_constant_p 
#line 8360 "../../gcc-8.1.0/gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && USE_RETURN_INSN (FALSE))
    ? (int) 
#line 8360 "../../gcc-8.1.0/gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && USE_RETURN_INSN (FALSE))
    : -1 },
#line 3135 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON_FP16INST && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 3135 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
    ? (int) 
#line 3135 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
    : -1 },
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 6299 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic",
    __builtin_constant_p 
#line 6299 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic)
    ? (int) 
#line 6299 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic)
    : -1 },
#line 1354 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size",
    __builtin_constant_p 
#line 1354 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size)
    ? (int) 
#line 1354 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 10553 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 10553 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])))
    : -1 },
#line 8233 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !SIBLING_CALL_P (insn)\n\
   && (GET_CODE (operands[1]) == SYMBOL_REF)\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))",
    __builtin_constant_p 
#line 8233 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    ? (int) 
#line 8233 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch5)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11276 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11276 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math\n\
  && !TARGET_VFP_SINGLE)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1729 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1729 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE))
    : -1 },
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_STCL)",
    __builtin_constant_p 
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STCL))
    ? (int) 
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STCL))
    : -1 },
#line 3021 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON_FP16INST\n\
  && !(GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT\n\
  && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 3021 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST
  && !(GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT
  && !flag_unsafe_math_optimizations))
    ? (int) 
#line 3021 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST
  && !(GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT
  && !flag_unsafe_math_optimizations))
    : -1 },
#line 6839 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 6839 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 6839 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 5)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 355 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 355 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5))
    : -1 },
#line 11894 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_CDP2)",
    __builtin_constant_p 
#line 11894 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_CDP2))
    ? (int) 
#line 11894 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_CDP2))
    : -1 },
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode))",
    __builtin_constant_p 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    ? (int) 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    : -1 },
#line 6446 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch4",
    __builtin_constant_p 
#line 6446 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch4)
    ? (int) 
#line 6446 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch4)
    : -1 },
#line 126 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 126 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 126 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
  { "(TARGET_THUMB2 && !arm_restrict_it) && ( reload_completed\n\
    && REGNO (operands [0]) != REGNO (operands[3]))",
    __builtin_constant_p (
#line 636 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it) && 
#line 641 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
( reload_completed
    && REGNO (operands [0]) != REGNO (operands[3])))
    ? (int) (
#line 636 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it) && 
#line 641 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
( reload_completed
    && REGNO (operands [0]) != REGNO (operands[3])))
    : -1 },
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], TImode)\n\
       || register_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    ? (int) 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    : -1 },
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 535 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && TARGET_SOFT_FLOAT",
    __builtin_constant_p 
#line 535 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT)
    ? (int) 
#line 535 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT)
    : -1 },
#line 5660 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch6",
    __builtin_constant_p 
#line 5660 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6)
    ? (int) 
#line 5660 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6)
    : -1 },
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && SMIN != SMAX\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)",
    __builtin_constant_p 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMAX
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    ? (int) 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMAX
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE)",
    __builtin_constant_p (
#line 1957 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && 
#line 52 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    ? (int) (
#line 1957 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && 
#line 52 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    : -1 },
#line 1399 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA",
    __builtin_constant_p 
#line 1399 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA)
    ? (int) 
#line 1399 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA)
    : -1 },
#line 283 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 283 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 283 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)",
    __builtin_constant_p (
#line 439 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 441 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    ? (int) (
#line 439 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 441 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 322 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && INTVAL (operands[5]) == INTVAL (operands[2]) + 4",
    __builtin_constant_p 
#line 322 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && INTVAL (operands[5]) == INTVAL (operands[2]) + 4)
    ? (int) 
#line 322 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && INTVAL (operands[5]) == INTVAL (operands[2]) + 4)
    : -1 },
#line 58 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2DImode != V2SFmode && V2DImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))",
    __builtin_constant_p 
#line 58 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2DImode != V2SFmode && V2DImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    ? (int) 
#line 58 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2DImode != V2SFmode && V2DImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    : -1 },
#line 29 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT\n\
  && !TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 29 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 29 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 470 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && ((!TARGET_NEON && !TARGET_IWMMXT) || reload_completed)",
    __builtin_constant_p 
#line 470 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && ((!TARGET_NEON && !TARGET_IWMMXT) || reload_completed))
    ? (int) 
#line 470 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && ((!TARGET_NEON && !TARGET_IWMMXT) || reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && XVECLEN (operands[0], 0) == 2)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1018 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1018 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM\n\
   && arm_arch4 && !TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6697 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4 && !TARGET_HARD_FLOAT
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6697 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4 && !TARGET_HARD_FLOAT
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
#line 930 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 930 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 930 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 8728 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 8728 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM))
    : -1 },
#line 3002 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed",
    __builtin_constant_p 
#line 3002 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed)
    ? (int) 
#line 3002 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed)
    : -1 },
#line 1660 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && (!false || flag_unsafe_math_optimizations)\n\
   && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1660 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations)
   && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1660 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations)
   && !BYTES_BIG_ENDIAN)
    : -1 },
#line 1818 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (operands[0]) == SYMBOL_REF\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))",
    __builtin_constant_p 
#line 1818 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    ? (int) 
#line 1818 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    : -1 },
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 5879 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed\n\
   && arm_const_double_by_parts (operands[1])",
    __builtin_constant_p 
#line 5879 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && arm_const_double_by_parts (operands[1]))
    ? (int) 
#line 5879 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && arm_const_double_by_parts (operands[1]))
    : -1 },
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 2010 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && arm_disable_literal_pool\n\
  && !(TARGET_HARD_FLOAT && vfp3_const_double_rtx (operands[1]))",
    __builtin_constant_p 
#line 2010 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && arm_disable_literal_pool
  && !(TARGET_HARD_FLOAT && vfp3_const_double_rtx (operands[1])))
    ? (int) 
#line 2010 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && arm_disable_literal_pool
  && !(TARGET_HARD_FLOAT && vfp3_const_double_rtx (operands[1])))
    : -1 },
#line 870 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3])",
    __builtin_constant_p 
#line 870 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3]))
    ? (int) 
#line 870 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3]))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (arm_arch_thumb2)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 2913 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch_thumb2))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 2913 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch_thumb2))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 176 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 176 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
#line 6697 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && arm_arch4 && !TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 6697 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4 && !TARGET_HARD_FLOAT
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 6697 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4 && !TARGET_HARD_FLOAT
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 220 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 220 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_MOVT)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11432 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11432 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT))
    : -1 },
#line 629 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 629 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 629 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 566 "../../gcc-8.1.0/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDACQ",
    __builtin_constant_p 
#line 566 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ)
    ? (int) 
#line 566 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ)
    : -1 },
#line 11708 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], 0, false, true))",
    __builtin_constant_p 
#line 11708 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true)))
    ? (int) 
#line 11708 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], -4, false, false)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11763 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11763 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false))))
    : -1 },
#line 1728 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && arm_arch5 && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 1728 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch5 && !SIBLING_CALL_P (insn))
    ? (int) 
#line 1728 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch5 && !SIBLING_CALL_P (insn))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_INT_SIMD)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 417 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 417 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD))
    : -1 },
#line 1751 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && !arm_arch5 && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 1751 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch5 && !SIBLING_CALL_P (insn))
    ? (int) 
#line 1751 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch5 && !SIBLING_CALL_P (insn))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT\n\
   && TARGET_VFP_FP16INST\n\
   && (s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 368 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_VFP_FP16INST
   && (s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 368 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_VFP_FP16INST
   && (s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    : -1 },
#line 4292 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 || arm_arch_thumb2",
    __builtin_constant_p 
#line 4292 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_THUMB1 || arm_arch_thumb2)
    ? (int) 
#line 4292 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_THUMB1 || arm_arch_thumb2)
    : -1 },
#line 1173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && reload_completed\n\
   && (!CONST_INT_P (operands[2])\n\
       || (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 64))",
    __builtin_constant_p 
#line 1173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed
   && (!CONST_INT_P (operands[2])
       || (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 64)))
    ? (int) 
#line 1173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed
   && (!CONST_INT_P (operands[2])
       || (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 64)))
    : -1 },
#line 3500 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_DOTPROD",
    __builtin_constant_p 
#line 3500 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_DOTPROD)
    ? (int) 
#line 3500 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_DOTPROD)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))\n\
   && !(TARGET_NEON && CONST_INT_P (operands[1])\n\
        && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 309 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))
   && !(TARGET_NEON && CONST_INT_P (operands[1])
        && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 309 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))
   && !(TARGET_NEON && CONST_INT_P (operands[1])
        && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL))))
    : -1 },
#line 427 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && arm_arch6",
    __builtin_constant_p 
#line 427 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch6)
    ? (int) 
#line 427 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch6)
    : -1 },
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], XImode)\n\
       || register_operand (operands[1], XImode))",
    __builtin_constant_p 
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    ? (int) 
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM || (TARGET_THUMB2 && CONST_INT_P (operands[2])))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3081 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM || (TARGET_THUMB2 && CONST_INT_P (operands[2]))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3081 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM || (TARGET_THUMB2 && CONST_INT_P (operands[2]))))
    : -1 },
#line 5849 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && reload_completed\n\
   && (arm_disable_literal_pool\n\
       || (arm_const_double_inline_cost (operands[1])\n\
	   <= arm_max_const_double_inline_cost ()))",
    __builtin_constant_p 
#line 5849 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && (arm_disable_literal_pool
       || (arm_const_double_inline_cost (operands[1])
	   <= arm_max_const_double_inline_cost ())))
    ? (int) 
#line 5849 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && (arm_disable_literal_pool
       || (arm_const_double_inline_cost (operands[1])
	   <= arm_max_const_double_inline_cost ())))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && USE_RETURN_INSN (FALSE))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 8378 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE)))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 8378 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_IDIV)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4557 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_IDIV))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4557 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_IDIV))
    : -1 },
  { "(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && (TARGET_VFP_DOUBLE)",
    __builtin_constant_p (
#line 1399 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 52 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    ? (int) (
#line 1399 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 52 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT\n\
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32\n\
      && INTVAL (operands[1]) > 0 \n\
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8\n\
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 2493 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 2493 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)))
    : -1 },
#line 1102 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && flag_pic",
    __builtin_constant_p 
#line 1102 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && flag_pic)
    ? (int) 
#line 1102 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && flag_pic)
    : -1 },
#line 6724 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && !TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 6724 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_HARD_FLOAT)
    ? (int) 
#line 6724 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_HARD_FLOAT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT))
    : -1 },
#line 6219 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && flag_pic",
    __builtin_constant_p 
#line 6219 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_THUMB1 && flag_pic)
    ? (int) 
#line 6219 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_THUMB1 && flag_pic)
    : -1 },
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))",
    __builtin_constant_p 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    ? (int) 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 525 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 525 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER))
    : -1 },
#line 688 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 688 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 688 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 6203 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && flag_pic",
    __builtin_constant_p 
#line 6203 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && flag_pic)
    ? (int) 
#line 6203 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && flag_pic)
    : -1 },
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))",
    __builtin_constant_p 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    ? (int) 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], 0, false, false)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11750 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11750 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch6 && SMIN != SMIN\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMIN
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMIN
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    : -1 },
#line 11312 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch5e",
    __builtin_constant_p 
#line 11312 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5e)
    ? (int) 
#line 11312 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5e)
    : -1 },
  { "(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT))
    ? (int) (
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT))
    : -1 },
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4HImode)\n\
       || register_operand (operands[1], V4HImode))",
    __builtin_constant_p 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode)))
    ? (int) 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode)))
    : -1 },
  { "(TARGET_32BIT && !TARGET_NEON) && ( (!TARGET_IWMMXT || reload_completed))",
    __builtin_constant_p (
#line 1271 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_NEON) && 
#line 1273 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( (!TARGET_IWMMXT || reload_completed)))
    ? (int) (
#line 1271 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_NEON) && 
#line 1273 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( (!TARGET_IWMMXT || reload_completed)))
    : -1 },
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode))",
    __builtin_constant_p 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    ? (int) 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    : -1 },
  { "(TARGET_THUMB2 && arm_disable_literal_pool\n\
  && !(TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE\n\
       && vfp3_const_double_rtx (operands[1]))) && ( !reload_completed)",
    __builtin_constant_p (
#line 1990 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && arm_disable_literal_pool
  && !(TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
       && vfp3_const_double_rtx (operands[1]))) && 
#line 1994 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
( !reload_completed))
    ? (int) (
#line 1990 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && arm_disable_literal_pool
  && !(TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
       && vfp3_const_double_rtx (operands[1]))) && 
#line 1994 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
( !reload_completed))
    : -1 },
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && SMIN != SMIN\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)",
    __builtin_constant_p 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMIN
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    ? (int) 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMIN
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    : -1 },
#line 11735 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))\n\
     && (operands_ok_ldrd_strd (operands[2], operands[4],\n\
                                  operands[0], INTVAL (operands[1]),\n\
                                  false, false))",
    __builtin_constant_p 
#line 11735 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false)))
    ? (int) 
#line 11735 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false)))
    : -1 },
#line 2274 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && TARGET_FMA",
    __builtin_constant_p 
#line 2274 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FMA)
    ? (int) 
#line 2274 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FMA)
    : -1 },
#line 1328 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size && reload_completed",
    __builtin_constant_p 
#line 1328 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed)
    ? (int) 
#line 1328 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed)
    : -1 },
#line 5218 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT ",
    __builtin_constant_p 
#line 5218 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT )
    ? (int) 
#line 5218 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT )
    : -1 },
#line 11856 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "unaligned_access",
    __builtin_constant_p 
#line 11856 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(unaligned_access)
    ? (int) 
#line 11856 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(unaligned_access)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && !TARGET_HARD_FLOAT\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6884 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_HARD_FLOAT
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6884 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_HARD_FLOAT
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 555 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 555 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    : -1 },
#line 11953 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MCR)",
    __builtin_constant_p 
#line 11953 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCR))
    ? (int) 
#line 11953 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCR))
    : -1 },
  { "(TARGET_32BIT) && ( (CONST_INT_P (operands[1])\n\
       && !const_ok_for_arm (INTVAL (operands[1]))))",
    __builtin_constant_p (
#line 1458 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1469 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( (CONST_INT_P (operands[1])
       && !const_ok_for_arm (INTVAL (operands[1])))))
    ? (int) (
#line 1458 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1469 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( (CONST_INT_P (operands[1])
       && !const_ok_for_arm (INTVAL (operands[1])))))
    : -1 },
#line 703 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && satisfies_constraint_J (operands[1])",
    __builtin_constant_p 
#line 703 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_J (operands[1]))
    ? (int) 
#line 703 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_J (operands[1]))
    : -1 },
#line 585 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && use_cmse",
    __builtin_constant_p 
#line 585 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && use_cmse)
    ? (int) 
#line 585 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && use_cmse)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE\n\
  && !flag_rounding_math)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1126 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
  && !flag_rounding_math))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1126 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
  && !flag_rounding_math))
    : -1 },
#line 112 "../../gcc-8.1.0/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 112 "../../gcc-8.1.0/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 112 "../../gcc-8.1.0/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 11375 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_HARD_TP",
    __builtin_constant_p 
#line 11375 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HARD_TP)
    ? (int) 
#line 11375 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HARD_TP)
    : -1 },
  { "(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1)",
    __builtin_constant_p (
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_THUMB1))
    ? (int) (
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_THUMB1))
    : -1 },
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))",
    __builtin_constant_p 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    ? (int) 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    : -1 },
#line 1254 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && satisfies_constraint_Px (operands[2])",
    __builtin_constant_p 
#line 1254 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && satisfies_constraint_Px (operands[2]))
    ? (int) 
#line 1254 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && satisfies_constraint_Px (operands[2]))
    : -1 },
#line 40 "../../gcc-8.1.0/gcc/config/arm/sync.md"
  { "TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 40 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 40 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && arm_arch4 && !arm_arch6)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5647 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5647 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6))
    : -1 },
#line 2442 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_FP16FML",
    __builtin_constant_p 
#line 2442 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_FP16FML)
    ? (int) 
#line 2442 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_FP16FML)
    : -1 },
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))",
    __builtin_constant_p 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    ? (int) 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    : -1 },
#line 3307 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && TARGET_VFP5",
    __builtin_constant_p 
#line 3307 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_VFP5)
    ? (int) 
#line 3307 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_VFP5)
    : -1 },
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && SMAX != SMAX\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)",
    __builtin_constant_p 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMAX
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    ? (int) 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMAX
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    : -1 },
#line 615 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 615 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 615 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 11387 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_SOFT_TP",
    __builtin_constant_p 
#line 11387 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_SOFT_TP)
    ? (int) 
#line 11387 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_SOFT_TP)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREX)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 481 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 481 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX))
    : -1 },
#line 347 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2",
    __builtin_constant_p 
#line 347 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2)
    ? (int) 
#line 347 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2)
    : -1 },
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    : -1 },
#line 3976 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && TARGET_FP16",
    __builtin_constant_p 
#line 3976 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FP16)
    ? (int) 
#line 3976 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FP16)
    : -1 },
#line 9646 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 9646 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    ? (int) 
#line 9646 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    : -1 },
#line 11508 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_THUMB",
    __builtin_constant_p 
#line 11508 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_THUMB)
    ? (int) 
#line 11508 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_THUMB)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch6 && SMAX != SMIN\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMIN
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMIN
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 126 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 126 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 2)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1070 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1070 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2))
    : -1 },
#line 26 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode))",
    __builtin_constant_p 
#line 26 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    ? (int) 
#line 26 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && XVECLEN (operands[0], 0) == 4)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 688 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 688 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    : -1 },
#line 4387 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON_RDMA",
    __builtin_constant_p 
#line 4387 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_RDMA)
    ? (int) 
#line 4387 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_RDMA)
    : -1 },
#line 898 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && peep2_reg_dead_p (3, operands[2])",
    __builtin_constant_p 
#line 898 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_reg_dead_p (3, operands[2]))
    ? (int) 
#line 898 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_reg_dead_p (3, operands[2]))
    : -1 },
#line 4383 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_arch_thumb2",
    __builtin_constant_p 
#line 4383 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch_thumb2)
    ? (int) 
#line 4383 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch_thumb2)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && reload_completed\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P (operands[2])))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1172 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2]))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1172 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2]))))
    : -1 },
#line 11972 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MRC2)",
    __builtin_constant_p 
#line 11972 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRC2))
    ? (int) 
#line 11972 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRC2))
    : -1 },
#line 8182 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch5 && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 8182 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch5 && !SIBLING_CALL_P (insn))
    ? (int) 
#line 8182 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch5 && !SIBLING_CALL_P (insn))
    : -1 },
#line 1740 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && use_cmse && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 1740 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && use_cmse && !SIBLING_CALL_P (insn))
    ? (int) 
#line 1740 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && use_cmse && !SIBLING_CALL_P (insn))
    : -1 },
#line 551 "../../gcc-8.1.0/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN",
    __builtin_constant_p 
#line 551 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN)
    ? (int) 
#line 551 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN)
    : -1 },
#line 1083 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 1083 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 1083 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3)
    : -1 },
#line 4080 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && !flag_rounding_math",
    __builtin_constant_p 
#line 4080 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !flag_rounding_math)
    ? (int) 
#line 4080 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !flag_rounding_math)
    : -1 },
#line 368 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT\n\
   && TARGET_VFP_FP16INST\n\
   && (s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 368 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_VFP_FP16INST
   && (s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 368 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_VFP_FP16INST
   && (s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 758 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && !arm_restrict_it",
    __builtin_constant_p 
#line 758 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && !arm_restrict_it)
    ? (int) 
#line 758 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && !arm_restrict_it)
    : -1 },
#line 176 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 176 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 176 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_LDC)",
    __builtin_constant_p 
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC))
    ? (int) 
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC))
    : -1 },
#line 8209 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !SIBLING_CALL_P (insn)\n\
   && (GET_CODE (operands[0]) == SYMBOL_REF)\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))",
    __builtin_constant_p 
#line 8209 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    ? (int) 
#line 8209 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    : -1 },
#line 1456 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST)",
    __builtin_constant_p 
#line 1456 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST))
    ? (int) 
#line 1456 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST))
    : -1 },
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 481 "../../gcc-8.1.0/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREX",
    __builtin_constant_p 
#line 481 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX)
    ? (int) 
#line 481 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && optimize_size && reload_completed)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1328 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1328 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed))
    : -1 },
#line 252 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 252 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 252 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 860 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed\n\
   && arm_general_register_operand (operands[0], DFmode)",
    __builtin_constant_p 
#line 860 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed
   && arm_general_register_operand (operands[0], DFmode))
    ? (int) 
#line 860 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed
   && arm_general_register_operand (operands[0], DFmode))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (arm_arch6)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11445 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch6))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11445 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch6))
    : -1 },
#line 8399 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM   && use_simple_return_p ()",
    __builtin_constant_p 
#line 8399 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM   && use_simple_return_p ())
    ? (int) 
#line 8399 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM   && use_simple_return_p ())
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1678 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1678 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT))
    : -1 },
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], EImode)\n\
       || register_operand (operands[1], EImode))",
    __builtin_constant_p 
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], EImode)
       || register_operand (operands[1], EImode)))
    ? (int) 
#line 173 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], EImode)
       || register_operand (operands[1], EImode)))
    : -1 },
#line 9710 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       == CCmode)",
    __builtin_constant_p 
#line 9710 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode))
    ? (int) 
#line 9710 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode))
    : -1 },
#line 1468 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (GET_CODE (operands[4]) == EQ\n\
       || GET_CODE (operands[4]) == NE\n\
       || GET_CODE (operands[4]) == GE\n\
       || GET_CODE (operands[4]) == LT)",
    __builtin_constant_p 
#line 1468 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
    ? (int) 
#line 1468 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
    : -1 },
#line 183 "../../gcc-8.1.0/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 183 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 183 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HARD_FLOAT && TARGET_VFP5 )",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1891 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 ))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1891 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 ))
    : -1 },
#line 5258 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed && !IS_VFP_REGNUM (REGNO (operands[0]))",
    __builtin_constant_p 
#line 5258 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed && !IS_VFP_REGNUM (REGNO (operands[0])))
    ? (int) 
#line 5258 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed && !IS_VFP_REGNUM (REGNO (operands[0])))
    : -1 },
#line 1990 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && arm_disable_literal_pool\n\
  && !(TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE\n\
       && vfp3_const_double_rtx (operands[1]))",
    __builtin_constant_p 
#line 1990 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && arm_disable_literal_pool
  && !(TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
       && vfp3_const_double_rtx (operands[1])))
    ? (int) 
#line 1990 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && arm_disable_literal_pool
  && !(TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
       && vfp3_const_double_rtx (operands[1])))
    : -1 },
#line 661 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 661 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 661 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 750 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 750 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 750 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 11342 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_EITHER",
    __builtin_constant_p 
#line 11342 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_EITHER)
    ? (int) 
#line 11342 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_EITHER)
    : -1 },
#line 183 "../../gcc-8.1.0/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 183 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 183 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && arm_arch6)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1062 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1062 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6))
    : -1 },
  { "(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)",
    __builtin_constant_p (
#line 439 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 441 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    ? (int) (
#line 439 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 441 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (
#line 1891 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && 
#line 52 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (
#line 1891 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && 
#line 52 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && (reload_in_progress || reload_completed))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11099 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed)))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11099 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && !arm_arch6)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5383 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5383 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6))
    : -1 },
#line 2699 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM || arm_arch_thumb2",
    __builtin_constant_p 
#line 2699 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM || arm_arch_thumb2)
    ? (int) 
#line 2699 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM || arm_arch_thumb2)
    : -1 },
#line 8193 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch5 && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 8193 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5 && !SIBLING_CALL_P (insn))
    ? (int) 
#line 8193 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5 && !SIBLING_CALL_P (insn))
    : -1 },
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))",
    __builtin_constant_p 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    ? (int) 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    : -1 },
#line 11296 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch_thumb2",
    __builtin_constant_p 
#line 11296 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2)
    ? (int) 
#line 11296 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2)
    : -1 },
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 323 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
  { "TARGET_DSP_MULTIPLY && arm_arch_thumb2",
    __builtin_constant_p 
#line 323 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY && arm_arch_thumb2)
    ? (int) 
#line 323 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY && arm_arch_thumb2)
    : -1 },
#line 1111 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !IS_CMSE_ENTRY (arm_current_func_type ())",
    __builtin_constant_p 
#line 1111 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !IS_CMSE_ENTRY (arm_current_func_type ()))
    ? (int) 
#line 1111 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !IS_CMSE_ENTRY (arm_current_func_type ()))
    : -1 },
#line 5180 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "(TARGET_EITHER && flag_unsafe_math_optimizations)\n\
   || (TARGET_32BIT && TARGET_FP16_TO_DOUBLE)",
    __builtin_constant_p 
#line 5180 "../../gcc-8.1.0/gcc/config/arm/arm.md"
((TARGET_EITHER && flag_unsafe_math_optimizations)
   || (TARGET_32BIT && TARGET_FP16_TO_DOUBLE))
    ? (int) 
#line 5180 "../../gcc-8.1.0/gcc/config/arm/arm.md"
((TARGET_EITHER && flag_unsafe_math_optimizations)
   || (TARGET_32BIT && TARGET_FP16_TO_DOUBLE))
    : -1 },
#line 11680 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_arch6",
    __builtin_constant_p 
#line 11680 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch6)
    ? (int) 
#line 11680 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch6)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1542 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1542 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2))
    : -1 },
#line 1157 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed\n\
   && GET_CODE(operands[3]) != PLUS\n\
   && GET_CODE(operands[3]) != MINUS",
    __builtin_constant_p 
#line 1157 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS)
    ? (int) 
#line 1157 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS)
    : -1 },
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8QImode)\n\
       || register_operand (operands[1], V8QImode))",
    __builtin_constant_p 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode)))
    ? (int) 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode)))
    : -1 },
#line 8987 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_arch5 && TARGET_32BIT",
    __builtin_constant_p 
#line 8987 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT)
    ? (int) 
#line 8987 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT)
    : -1 },
  { "(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 206 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT))
    ? (int) (
#line 206 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT))
    : -1 },
#line 722 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && TARGET_FMA && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 722 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FMA && flag_unsafe_math_optimizations)
    ? (int) 
#line 722 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FMA && flag_unsafe_math_optimizations)
    : -1 },
#line 1447 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_FP16_TO_DOUBLE",
    __builtin_constant_p 
#line 1447 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_FP16_TO_DOUBLE)
    ? (int) 
#line 1447 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_FP16_TO_DOUBLE)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT )",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5218 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT ))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5218 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT ))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREXBH)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 456 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 456 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH))
    : -1 },
#line 3456 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !const_ok_for_arm (INTVAL (operands[2]))",
    __builtin_constant_p 
#line 3456 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_arm (INTVAL (operands[2])))
    ? (int) 
#line 3456 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_arm (INTVAL (operands[2])))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch6 && SMAX != SMAX\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMAX
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMAX
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    : -1 },
  { "((TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1)) && ( reload_completed)",
    __builtin_constant_p ((
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_THUMB1)) && 
#line 239 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    ? (int) ((
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_THUMB1)) && 
#line 239 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 5304 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "!TARGET_THUMB2 && !arm_arch6",
    __builtin_constant_p 
#line 5304 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(!TARGET_THUMB2 && !arm_arch6)
    ? (int) 
#line 5304 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(!TARGET_THUMB2 && !arm_arch6)
    : -1 },
#line 9580 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 9580 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode))
    ? (int) 
#line 9580 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode))
    : -1 },
#line 831 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "reload_completed && \n\
   (TARGET_NEON && !(IS_VFP_REGNUM (REGNO (operands[0]))))",
    __builtin_constant_p 
#line 831 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(reload_completed && 
   (TARGET_NEON && !(IS_VFP_REGNUM (REGNO (operands[0])))))
    ? (int) 
#line 831 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(reload_completed && 
   (TARGET_NEON && !(IS_VFP_REGNUM (REGNO (operands[0])))))
    : -1 },
#line 3260 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2]))))",
    __builtin_constant_p 
#line 3260 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2])))))
    ? (int) 
#line 3260 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2])))))
    : -1 },
#line 632 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !const_ok_for_op (INTVAL (operands[2]), PLUS)\n\
   && (reload_completed || !arm_eliminable_register (operands[1]))",
    __builtin_constant_p 
#line 632 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_op (INTVAL (operands[2]), PLUS)
   && (reload_completed || !arm_eliminable_register (operands[1])))
    ? (int) 
#line 632 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_op (INTVAL (operands[2]), PLUS)
   && (reload_completed || !arm_eliminable_register (operands[1])))
    : -1 },
#line 126 "../../gcc-8.1.0/gcc/config/arm/sync.md"
  { "ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE",
    __builtin_constant_p 
#line 126 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE)
    ? (int) 
#line 126 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE)
    : -1 },
#line 512 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && reload_completed",
    __builtin_constant_p 
#line 512 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && reload_completed)
    ? (int) 
#line 512 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && reload_completed)
    : -1 },
#line 11099 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && (reload_in_progress || reload_completed)",
    __builtin_constant_p 
#line 11099 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed))
    ? (int) 
#line 11099 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed))
    : -1 },
#line 11750 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], 0, false, false))",
    __builtin_constant_p 
#line 11750 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false)))
    ? (int) 
#line 11750 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch6 && SMIN != SMAX\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMAX
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3983 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMAX
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    : -1 },
#line 12005 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MRRC)",
    __builtin_constant_p 
#line 12005 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRRC))
    ? (int) 
#line 12005 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRRC))
    : -1 },
#line 3863 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_eliminable_register (operands[1]) && !arm_restrict_it",
    __builtin_constant_p 
#line 3863 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && !arm_restrict_it)
    ? (int) 
#line 3863 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && !arm_restrict_it)
    : -1 },
#line 1729 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math\n\
  && !TARGET_VFP_SINGLE",
    __builtin_constant_p 
#line 1729 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE)
    ? (int) 
#line 1729 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE)
    : -1 },
#line 5610 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch4",
    __builtin_constant_p 
#line 5610 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4)
    ? (int) 
#line 5610 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4)
    : -1 },
#line 263 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 263 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    ? (int) 
#line 263 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    : -1 },
  { "((TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)) && ( reload_completed)",
    __builtin_constant_p ((
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 239 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    ? (int) ((
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 239 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 11829 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_SOFT_FLOAT && arm_arch_thumb2",
    __builtin_constant_p 
#line 11829 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_SOFT_FLOAT && arm_arch_thumb2)
    ? (int) 
#line 11829 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_SOFT_FLOAT && arm_arch_thumb2)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 126 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 126 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE))
    : -1 },
#line 2437 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
	|| const_ok_for_arm (~INTVAL (operands[2])))",
    __builtin_constant_p 
#line 2437 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    ? (int) 
#line 2437 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    : -1 },
#line 4564 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON_FP16INST",
    __builtin_constant_p 
#line 4564 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST)
    ? (int) 
#line 4564 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST)
    : -1 },
#line 11668 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_arch6\n\
   && aarch_rev16_shleft_mask_imm_p (operands[3], SImode)\n\
   && aarch_rev16_shright_mask_imm_p (operands[2], SImode)",
    __builtin_constant_p 
#line 11668 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch6
   && aarch_rev16_shleft_mask_imm_p (operands[3], SImode)
   && aarch_rev16_shright_mask_imm_p (operands[2], SImode))
    ? (int) 
#line 11668 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch6
   && aarch_rev16_shleft_mask_imm_p (operands[3], SImode)
   && aarch_rev16_shright_mask_imm_p (operands[2], SImode))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6049 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6049 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    : -1 },
#line 867 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 867 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 867 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 7980 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && TARGET_SOFT_FLOAT",
    __builtin_constant_p 
#line 7980 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT)
    ? (int) 
#line 7980 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT)
    : -1 },
#line 1288 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && reload_completed",
    __builtin_constant_p 
#line 1288 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed)
    ? (int) 
#line 1288 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed)
    : -1 },
#line 1957 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_HARD_FLOAT && TARGET_VFP5 ",
    __builtin_constant_p 
#line 1957 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 )
    ? (int) 
#line 1957 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 )
    : -1 },
#line 555 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 555 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    ? (int) 
#line 555 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    : -1 },
#line 2523 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32\n\
       && INTVAL (operands[2]) > 0 \n\
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8\n\
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)",
    __builtin_constant_p 
#line 2523 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32))
    ? (int) 
#line 2523 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32))
    : -1 },
#line 276 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && !BYTES_BIG_ENDIAN && unaligned_access",
    __builtin_constant_p 
#line 276 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN && unaligned_access)
    ? (int) 
#line 276 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN && unaligned_access)
    : -1 },
#line 1562 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32)\n\
   && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 1562 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32)
   && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 1562 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32)
   && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 456 "../../gcc-8.1.0/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXBH",
    __builtin_constant_p 
#line 456 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH)
    ? (int) 
#line 456 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH)
    : -1 },
#line 1126 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE\n\
  && !flag_rounding_math",
    __builtin_constant_p 
#line 1126 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
  && !flag_rounding_math)
    ? (int) 
#line 1126 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
  && !flag_rounding_math)
    : -1 },
#line 7733 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE",
    __builtin_constant_p 
#line 7733 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
    ? (int) 
#line 7733 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
    : -1 },
#line 2624 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3])",
    __builtin_constant_p 
#line 2624 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3]))
    ? (int) 
#line 2624 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3]))
    : -1 },
#line 8421 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM  && USE_RETURN_INSN (TRUE)",
    __builtin_constant_p 
#line 8421 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM  && USE_RETURN_INSN (TRUE))
    ? (int) 
#line 8421 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM  && USE_RETURN_INSN (TRUE))
    : -1 },
#line 9642 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 9642 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    ? (int) 
#line 9642 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6839 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6839 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    : -1 },
#line 716 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && satisfies_constraint_K (operands[1])\n\
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1]))",
    __builtin_constant_p 
#line 716 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_K (operands[1])
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1])))
    ? (int) 
#line 716 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_K (operands[1])
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1])))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && TARGET_HARD_FLOAT\n\
  && !TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 29 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 29 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
#line 11276 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch5",
    __builtin_constant_p 
#line 11276 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5)
    ? (int) 
#line 11276 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5)
    : -1 },
#line 443 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT\n\
   && TARGET_HARD_FLOAT && TARGET_NEON_FP16\n\
   && !TARGET_VFP_FP16INST\n\
   && (   s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 443 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 443 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 183 "../../gcc-8.1.0/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 183 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 183 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
#line 499 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT\n\
   && TARGET_HARD_FLOAT\n\
   && !TARGET_NEON_FP16\n\
   && !TARGET_VFP_FP16INST\n\
   && (   s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 499 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT
   && !TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 499 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT
   && !TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 1270 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && reload_completed\n\
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 64",
    __builtin_constant_p 
#line 1270 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 64)
    ? (int) 
#line 1270 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 64)
    : -1 },
#line 10690 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && ((UINTVAL (operands[1]))\n\
       == ((UINTVAL (operands[1])) >> 24) << 24)",
    __builtin_constant_p 
#line 10690 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM
   && ((UINTVAL (operands[1]))
       == ((UINTVAL (operands[1])) >> 24) << 24))
    ? (int) 
#line 10690 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM
   && ((UINTVAL (operands[1]))
       == ((UINTVAL (operands[1])) >> 24) << 24))
    : -1 },
#line 1172 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P (operands[2]))",
    __builtin_constant_p 
#line 1172 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2])))
    ? (int) 
#line 1172 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2])))
    : -1 },
#line 680 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 680 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 680 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_LDC2)",
    __builtin_constant_p 
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC2))
    ? (int) 
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC2))
    : -1 },
#line 2957 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && reload_completed\n\
   && operands[0] != operands[1]",
    __builtin_constant_p 
#line 2957 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && operands[0] != operands[1])
    ? (int) 
#line 2957 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && operands[0] != operands[1])
    : -1 },
#line 8360 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "(TARGET_ARM || (TARGET_THUMB2\n\
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL\n\
                   && !IS_STACKALIGN (arm_current_func_type ())))\n\
     && use_simple_return_p ()",
    __builtin_constant_p 
#line 8360 "../../gcc-8.1.0/gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && use_simple_return_p ())
    ? (int) 
#line 8360 "../../gcc-8.1.0/gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && use_simple_return_p ())
    : -1 },
#line 142 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 142 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 142 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5)
    : -1 },
  { "(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)",
    __builtin_constant_p (
#line 439 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 441 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    ? (int) (
#line 439 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 441 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && reload_completed)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1422 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1422 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed))
    : -1 },
#line 894 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 894 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 894 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 7569 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT || TARGET_THUMB1",
    __builtin_constant_p 
#line 7569 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT || TARGET_THUMB1)
    ? (int) 
#line 7569 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT || TARGET_THUMB1)
    : -1 },
#line 5925 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_LDRD\n\
  && reg_overlap_mentioned_p (operands[0], operands[1])\n\
  && reg_overlap_mentioned_p (operands[0], operands[2])",
    __builtin_constant_p 
#line 5925 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD
  && reg_overlap_mentioned_p (operands[0], operands[1])
  && reg_overlap_mentioned_p (operands[0], operands[2]))
    ? (int) 
#line 5925 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD
  && reg_overlap_mentioned_p (operands[0], operands[1])
  && reg_overlap_mentioned_p (operands[0], operands[2]))
    : -1 },
#line 10672 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM",
    __builtin_constant_p 
#line 10672 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM)
    ? (int) 
#line 10672 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 4)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 750 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 750 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4))
    : -1 },
#line 746 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !arm_restrict_it",
    __builtin_constant_p 
#line 746 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it)
    ? (int) 
#line 746 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))\n\
     && (operands_ok_ldrd_strd (operands[2], operands[4],\n\
                                  operands[0], INTVAL (operands[1]),\n\
                                  false, false)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11735 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11735 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2]))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6036 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2])))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6036 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2])))
    : -1 },
#line 1798 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && !arm_arch5",
    __builtin_constant_p 
#line 1798 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch5)
    ? (int) 
#line 1798 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch5)
    : -1 },
#line 1489 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !const_ok_for_arm (INTVAL (operands[1]))\n\
   && const_ok_for_arm (~INTVAL (operands[1]))",
    __builtin_constant_p 
#line 1489 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1])))
    ? (int) 
#line 1489 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1])))
    : -1 },
#line 5018 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && arm_general_register_operand (operands[0], DImode)",
    __builtin_constant_p 
#line 5018 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && arm_general_register_operand (operands[0], DImode))
    ? (int) 
#line 5018 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && arm_general_register_operand (operands[0], DImode))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))\n\
     && (operands_ok_ldrd_strd (operands[0], operands[3],\n\
                                  operands[1], INTVAL (operands[2]),\n\
                                  false, true)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11693 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11693 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true))))
    : -1 },
#line 567 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 567 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 567 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1702 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1702 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREXD)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 505 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 505 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD))
    : -1 },
#line 834 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 834 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 834 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 295 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
  && (register_operand (operands[0], HImode)\n\
     || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 295 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode)))
    ? (int) 
#line 295 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode)))
    : -1 },
#line 1610 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_32BIT",
    __builtin_constant_p 
#line 1610 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_32BIT)
    ? (int) 
#line 1610 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_32BIT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && TARGET_HARD_FLOAT\n\
  && !TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 80 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 80 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
#line 191 "../../gcc-8.1.0/gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD && TARGET_ARM\n\
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))\n\
        ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))\n\
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))\n\
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p 
#line 191 "../../gcc-8.1.0/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
        ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    ? (int) 
#line 191 "../../gcc-8.1.0/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
        ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode))",
    __builtin_constant_p 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    ? (int) 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    : -1 },
#line 5417 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && (!MEM_P (operands[1])) && ! BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 5417 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && ! BYTES_BIG_ENDIAN)
    ? (int) 
#line 5417 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && ! BYTES_BIG_ENDIAN)
    : -1 },
  { "(TARGET_32BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 3517 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3519 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 3517 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3519 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && GET_CODE (operands[2]) != MULT)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 8790 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[2]) != MULT))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 8790 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[2]) != MULT))
    : -1 },
#line 10872 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed",
    __builtin_constant_p 
#line 10872 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed)
    ? (int) 
#line 10872 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed)
    : -1 },
#line 3021 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON_FP16INST\n\
  && !(GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT\n\
  && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 3021 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST
  && !(GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT
  && !flag_unsafe_math_optimizations))
    ? (int) 
#line 3021 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST
  && !(GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT
  && !flag_unsafe_math_optimizations))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch_thumb2)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11284 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11284 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2))
    : -1 },
#line 6884 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !TARGET_HARD_FLOAT\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 6884 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_HARD_FLOAT
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 6884 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_HARD_FLOAT
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 3911 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_eliminable_register (operands[1]) && reload_completed",
    __builtin_constant_p 
#line 3911 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && reload_completed)
    ? (int) 
#line 3911 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && reload_completed)
    : -1 },
#line 8343 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 8343 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 8343 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && SIBLING_CALL_P (insn))
    : -1 },
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_LDCL)",
    __builtin_constant_p 
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDCL))
    ? (int) 
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDCL))
    : -1 },
#line 5822 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !(TARGET_HARD_FLOAT)\n\
   && !TARGET_IWMMXT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 5822 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !(TARGET_HARD_FLOAT)
   && !TARGET_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 5822 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !(TARGET_HARD_FLOAT)
   && !TARGET_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 1547 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (GET_CODE (operands[3]) == EQ\n\
       || GET_CODE (operands[3]) == NE\n\
       || GET_CODE (operands[3]) == GE\n\
       || GET_CODE (operands[3]) == LT)",
    __builtin_constant_p 
#line 1547 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT))
    ? (int) 
#line 1547 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT))
    : -1 },
#line 1188 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "((((REGNO (operands[6]) == REGNO (operands[0]))\n\
         && (REGNO (operands[7]) == REGNO (operands[1])))\n\
      || ((REGNO (operands[7]) == REGNO (operands[0]))\n\
         && (REGNO (operands[6]) == REGNO (operands[1]))))\n\
    && (peep2_regno_dead_p (3, REGNO (operands[0]))\n\
      || (REGNO (operands[0]) == REGNO (operands[4])))\n\
    && (peep2_regno_dead_p (3, REGNO (operands[1]))\n\
      || (REGNO (operands[1]) == REGNO (operands[4]))))",
    __builtin_constant_p 
#line 1188 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(((((REGNO (operands[6]) == REGNO (operands[0]))
         && (REGNO (operands[7]) == REGNO (operands[1])))
      || ((REGNO (operands[7]) == REGNO (operands[0]))
         && (REGNO (operands[6]) == REGNO (operands[1]))))
    && (peep2_regno_dead_p (3, REGNO (operands[0]))
      || (REGNO (operands[0]) == REGNO (operands[4])))
    && (peep2_regno_dead_p (3, REGNO (operands[1]))
      || (REGNO (operands[1]) == REGNO (operands[4])))))
    ? (int) 
#line 1188 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(((((REGNO (operands[6]) == REGNO (operands[0]))
         && (REGNO (operands[7]) == REGNO (operands[1])))
      || ((REGNO (operands[7]) == REGNO (operands[0]))
         && (REGNO (operands[6]) == REGNO (operands[1]))))
    && (peep2_regno_dead_p (3, REGNO (operands[0]))
      || (REGNO (operands[0]) == REGNO (operands[4])))
    && (peep2_regno_dead_p (3, REGNO (operands[1]))
      || (REGNO (operands[1]) == REGNO (operands[4])))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1106 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1106 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math))
    : -1 },
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode))",
    __builtin_constant_p 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    ? (int) 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    : -1 },
#line 3364 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !TARGET_IWMMXT && reload_completed\n\
   && !(IS_VFP_REGNUM (REGNO (operands[0])))",
    __builtin_constant_p 
#line 3364 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT && reload_completed
   && !(IS_VFP_REGNUM (REGNO (operands[0]))))
    ? (int) 
#line 3364 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT && reload_completed
   && !(IS_VFP_REGNUM (REGNO (operands[0]))))
    : -1 },
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2SImode)\n\
       || register_operand (operands[1], V2SImode))",
    __builtin_constant_p 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode)))
    ? (int) 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode)))
    : -1 },
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 551 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 551 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN))
    : -1 },
#line 870 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 870 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 870 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 2590 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32\n\
       && INTVAL (operands[2]) > 0 \n\
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8\n\
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])",
    __builtin_constant_p 
#line 2590 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    ? (int) 
#line 2590 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    : -1 },
#line 505 "../../gcc-8.1.0/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXD",
    __builtin_constant_p 
#line 505 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD)
    ? (int) 
#line 505 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD)
    : -1 },
  { "(TARGET_ARM) && ( reload_completed)",
    __builtin_constant_p (
#line 4912 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 4914 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 4912 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 4914 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_REALLY_IWMMXT)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 899 "../../gcc-8.1.0/gcc/config/arm/iwmmxt2.md"
(TARGET_REALLY_IWMMXT))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 899 "../../gcc-8.1.0/gcc/config/arm/iwmmxt2.md"
(TARGET_REALLY_IWMMXT))
    : -1 },
  { "(TARGET_THUMB1) && ( reload_completed && CONST_INT_P (operands[2])\n\
   && ((operands[1] != stack_pointer_rtx\n\
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))\n\
       || (operands[1] == stack_pointer_rtx\n\
 	   && INTVAL (operands[2]) > 1020)))",
    __builtin_constant_p (
#line 66 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1) && 
#line 87 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
( reload_completed && CONST_INT_P (operands[2])
   && ((operands[1] != stack_pointer_rtx
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))
       || (operands[1] == stack_pointer_rtx
 	   && INTVAL (operands[2]) > 1020))))
    ? (int) (
#line 66 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1) && 
#line 87 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
( reload_completed && CONST_INT_P (operands[2])
   && ((operands[1] != stack_pointer_rtx
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))
       || (operands[1] == stack_pointer_rtx
 	   && INTVAL (operands[2]) > 1020))))
    : -1 },
#line 1746 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math",
    __builtin_constant_p 
#line 1746 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math)
    ? (int) 
#line 1746 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math)
    : -1 },
#line 11763 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], -4, false, false))",
    __builtin_constant_p 
#line 11763 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false)))
    ? (int) 
#line 11763 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false)))
    : -1 },
#line 1018 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 1018 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 1018 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 5443 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (UINTVAL (operands[3])\n\
       == (GET_MODE_MASK (GET_MODE (operands[5]))\n\
           & (GET_MODE_MASK (GET_MODE (operands[5]))\n\
	      << (INTVAL (operands[2])))))",
    __builtin_constant_p 
#line 5443 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (UINTVAL (operands[3])
       == (GET_MODE_MASK (GET_MODE (operands[5]))
           & (GET_MODE_MASK (GET_MODE (operands[5]))
	      << (INTVAL (operands[2]))))))
    ? (int) 
#line 5443 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (UINTVAL (operands[3])
       == (GET_MODE_MASK (GET_MODE (operands[5]))
           & (GET_MODE_MASK (GET_MODE (operands[5]))
	      << (INTVAL (operands[2]))))))
    : -1 },
#line 598 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT &&\n\
   !(const_ok_for_arm (INTVAL (operands[2]))\n\
     || const_ok_for_arm (-INTVAL (operands[2])))\n\
    && const_ok_for_arm (~INTVAL (operands[2]))",
    __builtin_constant_p 
#line 598 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2])))
    ? (int) 
#line 598 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2])))
    : -1 },
#line 1271 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !TARGET_NEON",
    __builtin_constant_p 
#line 1271 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_NEON)
    ? (int) 
#line 1271 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_NEON)
    : -1 },
#line 1062 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && arm_arch6",
    __builtin_constant_p 
#line 1062 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6)
    ? (int) 
#line 1062 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1746 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1746 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math))
    : -1 },
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_STC2)",
    __builtin_constant_p 
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC2))
    ? (int) 
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC2))
    : -1 },
#line 26 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))",
    __builtin_constant_p 
#line 26 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    ? (int) 
#line 26 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    : -1 },
#line 781 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 781 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 781 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 525 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 525 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER))
    : -1 },
  { "(TARGET_THUMB2 && arm_restrict_it) && ( reload_completed)",
    __builtin_constant_p (
#line 784 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it) && 
#line 786 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
( reload_completed))
    ? (int) (
#line 784 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it) && 
#line 786 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
( reload_completed))
    : -1 },
#line 11990 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MCRR)",
    __builtin_constant_p 
#line 11990 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCRR))
    ? (int) 
#line 11990 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCRR))
    : -1 },
  { "(TARGET_THUMB2) && ( reload_completed)",
    __builtin_constant_p (
#line 184 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2) && 
#line 189 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
( reload_completed))
    ? (int) (
#line 184 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2) && 
#line 189 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && ((TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && (TARGET_VFP_DOUBLE))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (
#line 1399 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 52 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (
#line 1399 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 52 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    : -1 },
#line 408 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
  { "TARGET_32BIT && arm_arch6",
    __builtin_constant_p 
#line 408 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6)
    ? (int) 
#line 408 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6)
    : -1 },
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 237 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && (reload_in_progress || reload_completed)",
    __builtin_constant_p 
#line 237 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && (reload_in_progress || reload_completed))
    ? (int) 
#line 237 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && (reload_in_progress || reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && !arm_arch6)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1656 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1656 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6))
    : -1 },
#line 6965 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && TARGET_SOFT_FLOAT\n\
   && (!MEM_P (operands[0])\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 6965 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 6965 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))",
    __builtin_constant_p 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    ? (int) 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && XVECLEN (operands[0], 0) == 3)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1031 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1031 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    : -1 },
#line 5647 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch4 && !arm_arch6",
    __builtin_constant_p 
#line 5647 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6)
    ? (int) 
#line 5647 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6)
    : -1 },
#line 8643 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "(TARGET_32BIT || optimize_size || flag_pic) && !target_pure_code",
    __builtin_constant_p 
#line 8643 "../../gcc-8.1.0/gcc/config/arm/arm.md"
((TARGET_32BIT || optimize_size || flag_pic) && !target_pure_code)
    ? (int) 
#line 8643 "../../gcc-8.1.0/gcc/config/arm/arm.md"
((TARGET_32BIT || optimize_size || flag_pic) && !target_pure_code)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_FP16_TO_DOUBLE)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1447 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_FP16_TO_DOUBLE))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1447 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_FP16_TO_DOUBLE))
    : -1 },
  { "(TARGET_THUMB2 && arm_disable_literal_pool\n\
  && !(TARGET_HARD_FLOAT && vfp3_const_double_rtx (operands[1]))) && ( !reload_completed)",
    __builtin_constant_p (
#line 2010 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && arm_disable_literal_pool
  && !(TARGET_HARD_FLOAT && vfp3_const_double_rtx (operands[1]))) && 
#line 2013 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
( !reload_completed))
    ? (int) (
#line 2010 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && arm_disable_literal_pool
  && !(TARGET_HARD_FLOAT && vfp3_const_double_rtx (operands[1]))) && 
#line 2013 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
( !reload_completed))
    : -1 },
#line 1240 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_reg_dead_p (1, operands[1])\n\
   && satisfies_constraint_Pw (operands[2])",
    __builtin_constant_p 
#line 1240 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_reg_dead_p (1, operands[1])
   && satisfies_constraint_Pw (operands[2]))
    ? (int) 
#line 1240 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_reg_dead_p (1, operands[1])
   && satisfies_constraint_Pw (operands[2]))
    : -1 },
#line 8790 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && GET_CODE (operands[2]) != MULT",
    __builtin_constant_p 
#line 8790 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[2]) != MULT)
    ? (int) 
#line 8790 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[2]) != MULT)
    : -1 },
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 12005 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MRRC2)",
    __builtin_constant_p 
#line 12005 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRRC2))
    ? (int) 
#line 12005 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRRC2))
    : -1 },
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_STC)",
    __builtin_constant_p 
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC))
    ? (int) 
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC))
    : -1 },
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    : -1 },
#line 5895 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_EITHER && reload_completed",
    __builtin_constant_p 
#line 5895 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_EITHER && reload_completed)
    ? (int) 
#line 5895 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_EITHER && reload_completed)
    : -1 },
#line 1916 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1",
    __builtin_constant_p 
#line 1916 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1)
    ? (int) 
#line 1916 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1)
    : -1 },
#line 217 "../../gcc-8.1.0/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 217 "../../gcc-8.1.0/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 217 "../../gcc-8.1.0/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_DSP_MULTIPLY)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 2114 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 2114 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY))
    : -1 },
#line 3834 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && optimize_function_for_size_p (cfun) && !arm_restrict_it",
    __builtin_constant_p 
#line 3834 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && optimize_function_for_size_p (cfun) && !arm_restrict_it)
    ? (int) 
#line 3834 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && optimize_function_for_size_p (cfun) && !arm_restrict_it)
    : -1 },
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode))",
    __builtin_constant_p 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    ? (int) 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    : -1 },
#line 1849 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_VFP_FP16INST",
    __builtin_constant_p 
#line 1849 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_VFP_FP16INST)
    ? (int) 
#line 1849 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_VFP_FP16INST)
    : -1 },
#line 1086 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_VFP_FP16INST && !flag_rounding_math",
    __builtin_constant_p 
#line 1086 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_VFP_FP16INST && !flag_rounding_math)
    ? (int) 
#line 1086 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_VFP_FP16INST && !flag_rounding_math)
    : -1 },
#line 5383 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch6",
    __builtin_constant_p 
#line 5383 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6)
    ? (int) 
#line 5383 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6)
    : -1 },
  { "(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT))
    ? (int) (
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT))
    : -1 },
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2955 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 1854 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && (!true || flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 1854 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations))
    ? (int) 
#line 1854 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations))
    : -1 },
#line 10553 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])",
    __builtin_constant_p 
#line 10553 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))
    ? (int) 
#line 10553 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))
    : -1 },
#line 139 "../../gcc-8.1.0/gcc/config/arm/sync.md"
  { "(TARGET_HAVE_LDREXD || TARGET_HAVE_LPAE || TARGET_HAVE_LDACQEXD)\n\
   && ARM_DOUBLEWORD_ALIGN",
    __builtin_constant_p 
#line 139 "../../gcc-8.1.0/gcc/config/arm/sync.md"
((TARGET_HAVE_LDREXD || TARGET_HAVE_LPAE || TARGET_HAVE_LDACQEXD)
   && ARM_DOUBLEWORD_ALIGN)
    ? (int) 
#line 139 "../../gcc-8.1.0/gcc/config/arm/sync.md"
((TARGET_HAVE_LDREXD || TARGET_HAVE_LPAE || TARGET_HAVE_LDACQEXD)
   && ARM_DOUBLEWORD_ALIGN)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1399 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1399 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA))
    : -1 },
#line 8399 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM   && USE_RETURN_INSN (TRUE)",
    __builtin_constant_p 
#line 8399 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM   && USE_RETURN_INSN (TRUE))
    ? (int) 
#line 8399 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM   && USE_RETURN_INSN (TRUE))
    : -1 },
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 11432 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_HAVE_MOVT",
    __builtin_constant_p 
#line 11432 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT)
    ? (int) 
#line 11432 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT)
    : -1 },
#line 4557 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_IDIV",
    __builtin_constant_p 
#line 4557 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_IDIV)
    ? (int) 
#line 4557 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_IDIV)
    : -1 },
#line 1974 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 1974 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT)
    ? (int) 
#line 1974 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT)
    : -1 },
#line 2225 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && operands[0] != operands[1] && reload_completed",
    __builtin_constant_p 
#line 2225 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && operands[0] != operands[1] && reload_completed)
    ? (int) 
#line 2225 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && operands[0] != operands[1] && reload_completed)
    : -1 },
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_STC2L)",
    __builtin_constant_p 
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC2L))
    ? (int) 
#line 11943 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC2L))
    : -1 },
#line 11693 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))\n\
     && (operands_ok_ldrd_strd (operands[0], operands[3],\n\
                                  operands[1], INTVAL (operands[2]),\n\
                                  false, true))",
    __builtin_constant_p 
#line 11693 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true)))
    ? (int) 
#line 11693 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true)))
    : -1 },
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    : -1 },
#line 1832 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (operands[1]) == SYMBOL_REF\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))",
    __builtin_constant_p 
#line 1832 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    ? (int) 
#line 1832 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    : -1 },
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode))",
    __builtin_constant_p 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    ? (int) 
#line 107 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    : -1 },
  { "((TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)) && ( reload_completed)",
    __builtin_constant_p ((
#line 206 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 208 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    ? (int) ((
#line 206 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 208 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && (reload_in_progress || reload_completed))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 237 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && (reload_in_progress || reload_completed)))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 237 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && (reload_in_progress || reload_completed)))
    : -1 },
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))",
    __builtin_constant_p 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    ? (int) 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    : -1 },
#line 1591 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32)\n\
   && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 1591 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32)
   && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 1591 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32)
   && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 5637 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "!arm_arch6",
    __builtin_constant_p 
#line 5637 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(!arm_arch6)
    ? (int) 
#line 5637 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(!arm_arch6)
    : -1 },
#line 6049 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 6049 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 6049 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 784 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && arm_restrict_it",
    __builtin_constant_p 
#line 784 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it)
    ? (int) 
#line 784 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it)
    : -1 },
#line 652 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON_FP16INST && (!true || flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 652 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST && (!true || flag_unsafe_math_optimizations))
    ? (int) 
#line 652 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST && (!true || flag_unsafe_math_optimizations))
    : -1 },
  { "(TARGET_32BIT && arm_arch_thumb2) && ( reload_completed)",
    __builtin_constant_p (
#line 11296 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2) && 
#line 11298 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 11296 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2) && 
#line 11298 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 3282 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && !const_ok_for_arm (INTVAL (operands[2]))\n\
   && const_ok_for_arm (~INTVAL (operands[2]))",
    __builtin_constant_p 
#line 3282 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2])))
    ? (int) 
#line 3282 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2])))
    : -1 },
#line 4529 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_arch_thumb2\n\
   && IN_RANGE (INTVAL (operands[3]), 0, 31)\n\
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3]))",
    __builtin_constant_p 
#line 4529 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch_thumb2
   && IN_RANGE (INTVAL (operands[3]), 0, 31)
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3])))
    ? (int) 
#line 4529 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_arch_thumb2
   && IN_RANGE (INTVAL (operands[3]), 0, 31)
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3])))
    : -1 },
#line 5427 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && (!MEM_P (operands[1])) && BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 5427 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && BYTES_BIG_ENDIAN)
    ? (int) 
#line 5427 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && BYTES_BIG_ENDIAN)
    : -1 },
#line 1031 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 1031 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 1031 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3)
    : -1 },
  { "(TARGET_ARM) && ( reload_completed\n\
   && REGNO (operands [0]) != REGNO (operands[3]))",
    __builtin_constant_p (
#line 8934 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 8938 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( reload_completed
   && REGNO (operands [0]) != REGNO (operands[3])))
    ? (int) (
#line 8934 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 8938 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( reload_completed
   && REGNO (operands [0]) != REGNO (operands[3])))
    : -1 },
#line 6698 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 6698 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 6698 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && arm_arch6)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5660 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5660 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch3m && !arm_arch6)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1957 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1957 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6))
    : -1 },
#line 1786 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && use_cmse",
    __builtin_constant_p 
#line 1786 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && use_cmse)
    ? (int) 
#line 1786 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && use_cmse)
    : -1 },
#line 759 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 759 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 759 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 565 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (XEXP (operands[4], 0)) == PLUS\n\
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))\n\
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))\n\
   && (peep2_reg_dead_p (3, operands[0])\n\
       || rtx_equal_p (operands[0], operands[3]))\n\
   && (peep2_reg_dead_p (3, operands[2])\n\
       || rtx_equal_p (operands[2], operands[3]))",
    __builtin_constant_p 
#line 565 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (XEXP (operands[4], 0)) == PLUS
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))
   && (peep2_reg_dead_p (3, operands[0])
       || rtx_equal_p (operands[0], operands[3]))
   && (peep2_reg_dead_p (3, operands[2])
       || rtx_equal_p (operands[2], operands[3])))
    ? (int) 
#line 565 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (XEXP (operands[4], 0)) == PLUS
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))
   && (peep2_reg_dead_p (3, operands[0])
       || rtx_equal_p (operands[0], operands[3]))
   && (peep2_reg_dead_p (3, operands[2])
       || rtx_equal_p (operands[2], operands[3])))
    : -1 },
#line 6950 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_EITHER\n\
   && reload_completed\n\
   && CONST_DOUBLE_P (operands[1])",
    __builtin_constant_p 
#line 6950 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_EITHER
   && reload_completed
   && CONST_DOUBLE_P (operands[1]))
    ? (int) 
#line 6950 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_EITHER
   && reload_completed
   && CONST_DOUBLE_P (operands[1]))
    : -1 },
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode))",
    __builtin_constant_p 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    ? (int) 
#line 97 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    : -1 },
#line 688 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && reload_completed && !satisfies_constraint_J (operands[1])",
    __builtin_constant_p 
#line 688 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && reload_completed && !satisfies_constraint_J (operands[1]))
    ? (int) 
#line 688 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && reload_completed && !satisfies_constraint_J (operands[1]))
    : -1 },
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8HFmode)\n\
       || register_operand (operands[1], V8HFmode))",
    __builtin_constant_p 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[1], V8HFmode)))
    ? (int) 
#line 76 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[1], V8HFmode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDACQ)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 566 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 566 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ))
    : -1 },
#line 1106 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math",
    __builtin_constant_p 
#line 1106 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math)
    ? (int) 
#line 1106 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math)
    : -1 },
#line 3634 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && GET_CODE (operands[1]) == GET_CODE (operands[9])\n\
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6])",
    __builtin_constant_p 
#line 3634 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6]))
    ? (int) 
#line 3634 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6]))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && !TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6724 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_HARD_FLOAT))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6724 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_HARD_FLOAT))
    : -1 },
#line 220 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 220 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    ? (int) 
#line 220 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    : -1 },
#line 359 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
  { "TARGET_32BIT && TARGET_DSP_MULTIPLY && arm_arch6",
    __builtin_constant_p 
#line 359 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && TARGET_DSP_MULTIPLY && arm_arch6)
    ? (int) 
#line 359 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && TARGET_DSP_MULTIPLY && arm_arch6)
    : -1 },
#line 1009 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && TARGET_HAVE_CBZ",
    __builtin_constant_p 
#line 1009 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && TARGET_HAVE_CBZ)
    ? (int) 
#line 1009 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && TARGET_HAVE_CBZ)
    : -1 },
#line 181 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
  { "TARGET_32BIT && arm_arch3m",
    __builtin_constant_p 
#line 181 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch3m)
    ? (int) 
#line 181 "../../gcc-8.1.0/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch3m)
    : -1 },
#line 1772 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && arm_arch5",
    __builtin_constant_p 
#line 1772 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch5)
    ? (int) 
#line 1772 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch5)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 591 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 591 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    : -1 },
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || register_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode)))
    ? (int) 
#line 31 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 3)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1083 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1083 "../../gcc-8.1.0/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3))
    : -1 },
  { "(flag_pic) && ( reload_completed)",
    __builtin_constant_p (
#line 6182 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(flag_pic) && 
#line 6184 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 6182 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(flag_pic) && 
#line 6184 "../../gcc-8.1.0/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 1660 "../../gcc-8.1.0/gcc/config/arm/neon.md"
  { "TARGET_NEON && (!true || flag_unsafe_math_optimizations)\n\
   && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1660 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations)
   && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1660 "../../gcc-8.1.0/gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations)
   && !BYTES_BIG_ENDIAN)
    : -1 },
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_LDC2L)",
    __builtin_constant_p 
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC2L))
    ? (int) 
#line 11937 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC2L))
    : -1 },
#line 120 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && UINTVAL (operands[1]) < 1024\n\
   && (UINTVAL (operands[1]) & 3) == 0",
    __builtin_constant_p 
#line 120 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && UINTVAL (operands[1]) < 1024
   && (UINTVAL (operands[1]) & 3) == 0)
    ? (int) 
#line 120 "../../gcc-8.1.0/gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && UINTVAL (operands[1]) < 1024
   && (UINTVAL (operands[1]) & 3) == 0)
    : -1 },
#line 223 "../../gcc-8.1.0/gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD && TARGET_ARM\n\
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))\n\
       ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))\n\
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))\n\
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p 
#line 223 "../../gcc-8.1.0/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
       ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    ? (int) 
#line 223 "../../gcc-8.1.0/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
       ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 8378 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_ARM && USE_RETURN_INSN (FALSE)",
    __builtin_constant_p 
#line 8378 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE))
    ? (int) 
#line 8378 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode)))",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 629 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 629 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    : -1 },
#line 11953 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MCR2)",
    __builtin_constant_p 
#line 11953 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCR2))
    ? (int) 
#line 11953 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCR2))
    : -1 },
#line 1656 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_arch6",
    __builtin_constant_p 
#line 1656 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6)
    ? (int) 
#line 1656 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && reload_completed\n\
   && GET_CODE(operands[3]) != PLUS\n\
   && GET_CODE(operands[3]) != MINUS)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1157 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1157 "../../gcc-8.1.0/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS))
    : -1 },
#line 26 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))",
    __builtin_constant_p 
#line 26 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    ? (int) 
#line 26 "../../gcc-8.1.0/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    : -1 },
#line 735 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 735 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT)
    ? (int) 
#line 735 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT)
    : -1 },
#line 11721 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], -4, false, true))",
    __builtin_constant_p 
#line 11721 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true)))
    ? (int) 
#line 11721 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && arm_arch4)",
    __builtin_constant_p (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5610 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4))
    ? (int) (
#line 11323 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5610 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4))
    : -1 },
#line 7048 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_SOFT_FLOAT\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 7048 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_SOFT_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 7048 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_SOFT_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 9140 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)",
    __builtin_constant_p 
#line 9140 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    ? (int) 
#line 9140 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    : -1 },
#line 591 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 591 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    ? (int) 
#line 591 "../../gcc-8.1.0/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    : -1 },
  { "((TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)) && ( reload_completed)",
    __builtin_constant_p ((
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 239 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    ? (int) ((
#line 237 "../../gcc-8.1.0/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 49 "../../gcc-8.1.0/gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 239 "../../gcc-8.1.0/gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 1957 "../../gcc-8.1.0/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch3m && !arm_arch6",
    __builtin_constant_p 
#line 1957 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6)
    ? (int) 
#line 1957 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6)
    : -1 },
#line 96 "../../gcc-8.1.0/gcc/config/arm/crypto.md"
  { "TARGET_CRYPTO",
    __builtin_constant_p 
#line 96 "../../gcc-8.1.0/gcc/config/arm/crypto.md"
(TARGET_CRYPTO)
    ? (int) 
#line 96 "../../gcc-8.1.0/gcc/config/arm/crypto.md"
(TARGET_CRYPTO)
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}

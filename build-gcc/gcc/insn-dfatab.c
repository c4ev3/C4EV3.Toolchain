/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "options.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-attr.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "emit-rtl.h"

#define operands recog_data.operand

int
internal_dfa_insn_code (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_mul32 cached_mul32 ATTRIBUTE_UNUSED;
  enum attr_mul64 cached_mul64 ATTRIBUTE_UNUSED;
  enum attr_core_cycles cached_core_cycles ATTRIBUTE_UNUSED;
  enum attr_cortex_a7_neon_type cached_cortex_a7_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a8_neon_type cached_cortex_a8_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a9_neon_type cached_cortex_a9_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a15_neon_type cached_cortex_a15_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a17_neon_type cached_cortex_a17_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a53_advsimd_type cached_cortex_a53_advsimd_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a57_neon_type cached_cortex_a57_neon_type ATTRIBUTE_UNUSED;
  enum attr_predicated cached_predicated ATTRIBUTE_UNUSED;
  enum attr_exynos_m1_neon_type cached_exynos_m1_neon_type ATTRIBUTE_UNUSED;
  enum attr_conds cached_conds ATTRIBUTE_UNUSED;
  int cached_shift ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1800:  /* neon_udot_lanev16qi */
    case 1799:  /* neon_sdot_lanev16qi */
    case 1798:  /* neon_udot_lanev8qi */
    case 1797:  /* neon_sdot_lanev8qi */
    case 1796:  /* neon_udotv16qi */
    case 1795:  /* neon_sdotv16qi */
    case 1794:  /* neon_udotv8qi */
    case 1793:  /* neon_sdotv8qi */
      if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))
        {
	  return 242 /* 0xf2 */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4067:  /* *p iwmmxt_textrcv8qi3 */
    case 4066:  /* *p iwmmxt_textrcv4hi3 */
    case 4065:  /* *p iwmmxt_textrcv2si3 */
    case 4064:  /* *p iwmmxt_torvscv8qi3 */
    case 4063:  /* *p iwmmxt_torvscv4hi3 */
    case 4062:  /* *p iwmmxt_torvscv2si3 */
    case 4061:  /* *p iwmmxt_torcv8qi3 */
    case 4060:  /* *p iwmmxt_torcv4hi3 */
    case 4059:  /* *p iwmmxt_torcv2si3 */
    case 4058:  /* *p iwmmxt_tandcv8qi3 */
    case 4057:  /* *p iwmmxt_tandcv4hi3 */
    case 4056:  /* *p iwmmxt_tandcv2si3 */
    case 644:  /* iwmmxt_textrcv8qi3 */
    case 643:  /* iwmmxt_textrcv4hi3 */
    case 642:  /* iwmmxt_textrcv2si3 */
    case 641:  /* iwmmxt_torvscv8qi3 */
    case 640:  /* iwmmxt_torvscv4hi3 */
    case 639:  /* iwmmxt_torvscv2si3 */
    case 638:  /* iwmmxt_torcv8qi3 */
    case 637:  /* iwmmxt_torcv4hi3 */
    case 636:  /* iwmmxt_torcv2si3 */
    case 635:  /* iwmmxt_tandcv8qi3 */
    case 634:  /* iwmmxt_tandcv4hi3 */
    case 633:  /* iwmmxt_tandcv2si3 */
      if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4001:  /* *p iwmmxt_wsadhz */
    case 4000:  /* *p iwmmxt_wsadbz */
    case 3999:  /* *p iwmmxt_wsadh */
    case 3998:  /* *p iwmmxt_wsadb */
    case 578:  /* iwmmxt_wsadhz */
    case 577:  /* iwmmxt_wsadbz */
    case 576:  /* iwmmxt_wsadh */
    case 575:  /* iwmmxt_wsadb */
      if ((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 6;
        }
      else if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 3985:  /* *p iwmmxt_tmiatt */
    case 3984:  /* *p iwmmxt_tmiabt */
    case 3983:  /* *p iwmmxt_tmiatb */
    case 3982:  /* *p iwmmxt_tmiabb */
    case 3981:  /* *p iwmmxt_tmiaph */
    case 3980:  /* *p iwmmxt_tmia */
    case 562:  /* iwmmxt_tmiatt */
    case 561:  /* iwmmxt_tmiabt */
    case 560:  /* iwmmxt_tmiatb */
    case 559:  /* iwmmxt_tmiabb */
    case 558:  /* iwmmxt_tmiaph */
    case 557:  /* iwmmxt_tmia */
      if ((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 7;
        }
      else if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 3977:  /* *p ashldi3_di */
    case 3976:  /* *p ashlv2si3_di */
    case 3975:  /* *p ashlv4hi3_di */
    case 3974:  /* *p lshrdi3_di */
    case 3973:  /* *p lshrv2si3_di */
    case 3972:  /* *p lshrv4hi3_di */
    case 3971:  /* *p ashrdi3_di */
    case 3970:  /* *p ashrv2si3_di */
    case 3969:  /* *p ashrv4hi3_di */
    case 3968:  /* *p rordi3_di */
    case 3967:  /* *p rorv2si3_di */
    case 3966:  /* *p rorv4hi3_di */
    case 3965:  /* *p ashldi3_iwmmxt */
    case 3964:  /* *p ashlv2si3_iwmmxt */
    case 3963:  /* *p ashlv4hi3_iwmmxt */
    case 3962:  /* *p lshrdi3_iwmmxt */
    case 3961:  /* *p lshrv2si3_iwmmxt */
    case 3960:  /* *p lshrv4hi3_iwmmxt */
    case 3959:  /* *p ashrdi3_iwmmxt */
    case 3958:  /* *p ashrv2si3_iwmmxt */
    case 3957:  /* *p ashrv4hi3_iwmmxt */
    case 3956:  /* *p rordi3 */
    case 3955:  /* *p rorv2si3 */
    case 3954:  /* *p rorv4hi3 */
    case 554:  /* ashldi3_di */
    case 553:  /* ashlv2si3_di */
    case 552:  /* ashlv4hi3_di */
    case 551:  /* lshrdi3_di */
    case 550:  /* lshrv2si3_di */
    case 549:  /* lshrv4hi3_di */
    case 548:  /* ashrdi3_di */
    case 547:  /* ashrv2si3_di */
    case 546:  /* ashrv4hi3_di */
    case 545:  /* rordi3_di */
    case 544:  /* rorv2si3_di */
    case 543:  /* rorv4hi3_di */
    case 542:  /* ashldi3_iwmmxt */
    case 541:  /* ashlv2si3_iwmmxt */
    case 540:  /* ashlv4hi3_iwmmxt */
    case 539:  /* lshrdi3_iwmmxt */
    case 538:  /* lshrv2si3_iwmmxt */
    case 537:  /* lshrv4hi3_iwmmxt */
    case 536:  /* ashrdi3_iwmmxt */
    case 535:  /* ashrv2si3_iwmmxt */
    case 534:  /* ashrv4hi3_iwmmxt */
    case 533:  /* rordi3 */
    case 532:  /* rorv2si3 */
    case 531:  /* rorv4hi3 */
      if ((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 2;
        }
      else if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4055:  /* *p iwmmxt_wmerge */
    case 3997:  /* *p iwmmxt_walignr3 */
    case 3996:  /* *p iwmmxt_walignr2 */
    case 3995:  /* *p iwmmxt_walignr1 */
    case 3994:  /* *p iwmmxt_walignr0 */
    case 3993:  /* *p iwmmxt_walignr */
    case 3992:  /* *p iwmmxt_waligni */
    case 3953:  /* *p iwmmxt_wunpckelsw */
    case 3952:  /* *p iwmmxt_wunpckelsh */
    case 3951:  /* *p iwmmxt_wunpckelsb */
    case 3950:  /* *p iwmmxt_wunpckeluw */
    case 3949:  /* *p iwmmxt_wunpckeluh */
    case 3948:  /* *p iwmmxt_wunpckelub */
    case 3947:  /* *p iwmmxt_wunpckehsw */
    case 3946:  /* *p iwmmxt_wunpckehsh */
    case 3945:  /* *p iwmmxt_wunpckehsb */
    case 3944:  /* *p iwmmxt_wunpckehuw */
    case 3943:  /* *p iwmmxt_wunpckehuh */
    case 3942:  /* *p iwmmxt_wunpckehub */
    case 3941:  /* *p iwmmxt_wunpckilw */
    case 3940:  /* *p iwmmxt_wunpckilh */
    case 3939:  /* *p iwmmxt_wunpckilb */
    case 3938:  /* *p iwmmxt_wunpckihw */
    case 3937:  /* *p iwmmxt_wunpckihh */
    case 3936:  /* *p iwmmxt_wunpckihb */
    case 3935:  /* *p iwmmxt_wpackdus */
    case 3934:  /* *p iwmmxt_wpackwus */
    case 3933:  /* *p iwmmxt_wpackhus */
    case 3932:  /* *p iwmmxt_wpackdss */
    case 3931:  /* *p iwmmxt_wpackwss */
    case 3930:  /* *p iwmmxt_wpackhss */
    case 3908:  /* *p iwmmxt_wshufh */
    case 632:  /* iwmmxt_wmerge */
    case 574:  /* iwmmxt_walignr3 */
    case 573:  /* iwmmxt_walignr2 */
    case 572:  /* iwmmxt_walignr1 */
    case 571:  /* iwmmxt_walignr0 */
    case 570:  /* iwmmxt_walignr */
    case 569:  /* iwmmxt_waligni */
    case 530:  /* iwmmxt_wunpckelsw */
    case 529:  /* iwmmxt_wunpckelsh */
    case 528:  /* iwmmxt_wunpckelsb */
    case 527:  /* iwmmxt_wunpckeluw */
    case 526:  /* iwmmxt_wunpckeluh */
    case 525:  /* iwmmxt_wunpckelub */
    case 524:  /* iwmmxt_wunpckehsw */
    case 523:  /* iwmmxt_wunpckehsh */
    case 522:  /* iwmmxt_wunpckehsb */
    case 521:  /* iwmmxt_wunpckehuw */
    case 520:  /* iwmmxt_wunpckehuh */
    case 519:  /* iwmmxt_wunpckehub */
    case 518:  /* iwmmxt_wunpckilw */
    case 517:  /* iwmmxt_wunpckilh */
    case 516:  /* iwmmxt_wunpckilb */
    case 515:  /* iwmmxt_wunpckihw */
    case 514:  /* iwmmxt_wunpckihh */
    case 513:  /* iwmmxt_wunpckihb */
    case 512:  /* iwmmxt_wpackdus */
    case 511:  /* iwmmxt_wpackwus */
    case 510:  /* iwmmxt_wpackhus */
    case 509:  /* iwmmxt_wpackdss */
    case 508:  /* iwmmxt_wpackwss */
    case 507:  /* iwmmxt_wpackhss */
    case 485:  /* iwmmxt_wshufh */
      if ((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 1;
        }
      else if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 3988:  /* *p iwmmxt_tmovmskw */
    case 3987:  /* *p iwmmxt_tmovmskh */
    case 3986:  /* *p iwmmxt_tmovmskb */
    case 3907:  /* *p iwmmxt_textrmw */
    case 3906:  /* *p iwmmxt_textrmsh */
    case 3905:  /* *p iwmmxt_textrmuh */
    case 3904:  /* *p iwmmxt_textrmsb */
    case 3903:  /* *p iwmmxt_textrmub */
    case 565:  /* iwmmxt_tmovmskw */
    case 564:  /* iwmmxt_tmovmskh */
    case 563:  /* iwmmxt_tmovmskb */
    case 484:  /* iwmmxt_textrmw */
    case 483:  /* iwmmxt_textrmsh */
    case 482:  /* iwmmxt_textrmuh */
    case 481:  /* iwmmxt_textrmsb */
    case 480:  /* iwmmxt_textrmub */
      if ((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 4;
        }
      else if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4054:  /* *p iwmmxt_wmiawttn */
    case 4053:  /* *p iwmmxt_wmiawtbn */
    case 4052:  /* *p iwmmxt_wmiawbtn */
    case 4051:  /* *p iwmmxt_wmiawbbn */
    case 4050:  /* *p iwmmxt_wmiawtt */
    case 4049:  /* *p iwmmxt_wmiawtb */
    case 4048:  /* *p iwmmxt_wmiawbt */
    case 4047:  /* *p iwmmxt_wmiawbb */
    case 4046:  /* *p iwmmxt_wmiattn */
    case 4045:  /* *p iwmmxt_wmiatbn */
    case 4044:  /* *p iwmmxt_wmiabtn */
    case 4043:  /* *p iwmmxt_wmiabbn */
    case 4042:  /* *p iwmmxt_wmiatt */
    case 4041:  /* *p iwmmxt_wmiatb */
    case 4040:  /* *p iwmmxt_wmiabt */
    case 4039:  /* *p iwmmxt_wmiabb */
    case 4038:  /* *p iwmmxt_wqmiattn */
    case 4037:  /* *p iwmmxt_wqmiatbn */
    case 4036:  /* *p iwmmxt_wqmiabtn */
    case 4035:  /* *p iwmmxt_wqmiabbn */
    case 4034:  /* *p iwmmxt_wqmiatt */
    case 4033:  /* *p iwmmxt_wqmiatb */
    case 4032:  /* *p iwmmxt_wqmiabt */
    case 4031:  /* *p iwmmxt_wqmiabb */
    case 4028:  /* *p iwmmxt_wqmulwmr */
    case 4026:  /* *p iwmmxt_wqmulwm */
    case 4024:  /* *p iwmmxt_wmulwl */
    case 4023:  /* *p iwmmxt_wmulwumr */
    case 4019:  /* *p iwmmxt_wmulwum */
    case 4018:  /* *p iwmmxt_wmulwsm */
    case 4017:  /* *p iwmmxt_wmaddun */
    case 4016:  /* *p iwmmxt_wmaddsn */
    case 4015:  /* *p iwmmxt_wmaddux */
    case 4014:  /* *p iwmmxt_wmaddsx */
    case 3979:  /* *p iwmmxt_wmaddu */
    case 3978:  /* *p iwmmxt_wmadds */
    case 3891:  /* *p iwmmxt_wmacuz */
    case 3890:  /* *p iwmmxt_wmacu */
    case 3889:  /* *p iwmmxt_wmacsz */
    case 3888:  /* *p iwmmxt_wmacs */
    case 631:  /* iwmmxt_wmiawttn */
    case 630:  /* iwmmxt_wmiawtbn */
    case 629:  /* iwmmxt_wmiawbtn */
    case 628:  /* iwmmxt_wmiawbbn */
    case 627:  /* iwmmxt_wmiawtt */
    case 626:  /* iwmmxt_wmiawtb */
    case 625:  /* iwmmxt_wmiawbt */
    case 624:  /* iwmmxt_wmiawbb */
    case 623:  /* iwmmxt_wmiattn */
    case 622:  /* iwmmxt_wmiatbn */
    case 621:  /* iwmmxt_wmiabtn */
    case 620:  /* iwmmxt_wmiabbn */
    case 619:  /* iwmmxt_wmiatt */
    case 618:  /* iwmmxt_wmiatb */
    case 617:  /* iwmmxt_wmiabt */
    case 616:  /* iwmmxt_wmiabb */
    case 615:  /* iwmmxt_wqmiattn */
    case 614:  /* iwmmxt_wqmiatbn */
    case 613:  /* iwmmxt_wqmiabtn */
    case 612:  /* iwmmxt_wqmiabbn */
    case 611:  /* iwmmxt_wqmiatt */
    case 610:  /* iwmmxt_wqmiatb */
    case 609:  /* iwmmxt_wqmiabt */
    case 608:  /* iwmmxt_wqmiabb */
    case 605:  /* iwmmxt_wqmulwmr */
    case 603:  /* iwmmxt_wqmulwm */
    case 601:  /* iwmmxt_wmulwl */
    case 600:  /* iwmmxt_wmulwumr */
    case 596:  /* iwmmxt_wmulwum */
    case 595:  /* iwmmxt_wmulwsm */
    case 594:  /* iwmmxt_wmaddun */
    case 593:  /* iwmmxt_wmaddsn */
    case 592:  /* iwmmxt_wmaddux */
    case 591:  /* iwmmxt_wmaddsx */
    case 556:  /* iwmmxt_wmaddu */
    case 555:  /* iwmmxt_wmadds */
    case 468:  /* iwmmxt_wmacuz */
    case 467:  /* iwmmxt_wmacu */
    case 466:  /* iwmmxt_wmacsz */
    case 465:  /* iwmmxt_wmacs */
      if ((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 8;
        }
      else if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4027:  /* *p iwmmxt_wqmulmr */
    case 4025:  /* *p iwmmxt_wqmulm */
    case 4022:  /* *p iwmmxt_wmulwsmr */
    case 4021:  /* *p iwmmxt_wmulumr */
    case 4020:  /* *p iwmmxt_wmulsmr */
    case 3887:  /* *p umulv4hi3_highpart */
    case 3886:  /* *p smulv4hi3_highpart */
    case 3885:  /* *p *mulv4hi3_iwmmxt */
    case 604:  /* iwmmxt_wqmulmr */
    case 602:  /* iwmmxt_wqmulm */
    case 599:  /* iwmmxt_wmulwsmr */
    case 598:  /* iwmmxt_wmulumr */
    case 597:  /* iwmmxt_wmulsmr */
    case 464:  /* umulv4hi3_highpart */
    case 463:  /* smulv4hi3_highpart */
    case 462:  /* *mulv4hi3_iwmmxt */
      if ((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 9;
        }
      else if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4030:  /* *p iwmmxt_waddbhusl */
    case 4029:  /* *p iwmmxt_waddbhusm */
    case 4013:  /* *p iwmmxt_avg4r */
    case 4012:  /* *p iwmmxt_avg4 */
    case 4011:  /* *p addcv2si3 */
    case 4010:  /* *p addcv4hi3 */
    case 4009:  /* *p iwmmxt_wsubaddhx */
    case 4008:  /* *p iwmmxt_waddsubhx */
    case 3991:  /* *p iwmmxt_waccw */
    case 3990:  /* *p iwmmxt_wacch */
    case 3989:  /* *p iwmmxt_waccb */
    case 3929:  /* *p *uminv8qi3_iwmmxt */
    case 3928:  /* *p *uminv4hi3_iwmmxt */
    case 3927:  /* *p *uminv2si3_iwmmxt */
    case 3926:  /* *p *sminv8qi3_iwmmxt */
    case 3925:  /* *p *sminv4hi3_iwmmxt */
    case 3924:  /* *p *sminv2si3_iwmmxt */
    case 3923:  /* *p *umaxv8qi3_iwmmxt */
    case 3922:  /* *p *umaxv4hi3_iwmmxt */
    case 3921:  /* *p *umaxv2si3_iwmmxt */
    case 3920:  /* *p *smaxv8qi3_iwmmxt */
    case 3919:  /* *p *smaxv4hi3_iwmmxt */
    case 3918:  /* *p *smaxv2si3_iwmmxt */
    case 3917:  /* *p gtv2si3 */
    case 3916:  /* *p gtv4hi3 */
    case 3915:  /* *p gtv8qi3 */
    case 3914:  /* *p gtuv2si3 */
    case 3913:  /* *p gtuv4hi3 */
    case 3912:  /* *p gtuv8qi3 */
    case 3911:  /* *p eqv2si3 */
    case 3910:  /* *p eqv4hi3 */
    case 3909:  /* *p eqv8qi3 */
    case 3899:  /* *p iwmmxt_uavgv4hi3 */
    case 3898:  /* *p iwmmxt_uavgv8qi3 */
    case 3897:  /* *p iwmmxt_uavgrndv4hi3 */
    case 3896:  /* *p iwmmxt_uavgrndv8qi3 */
    case 3884:  /* *p ussubv2si3 */
    case 3883:  /* *p ussubv4hi3 */
    case 3882:  /* *p ussubv8qi3 */
    case 3881:  /* *p sssubv2si3 */
    case 3880:  /* *p sssubv4hi3 */
    case 3879:  /* *p sssubv8qi3 */
    case 3878:  /* *p *subv8qi3_iwmmxt */
    case 3877:  /* *p *subv4hi3_iwmmxt */
    case 3876:  /* *p *subv2si3_iwmmxt */
    case 3875:  /* *p usaddv2si3 */
    case 3874:  /* *p usaddv4hi3 */
    case 3873:  /* *p usaddv8qi3 */
    case 3872:  /* *p ssaddv2si3 */
    case 3871:  /* *p ssaddv4hi3 */
    case 3870:  /* *p ssaddv8qi3 */
    case 3869:  /* *p *addv8qi3_iwmmxt */
    case 3868:  /* *p *addv4hi3_iwmmxt */
    case 3867:  /* *p *addv2si3_iwmmxt */
    case 607:  /* iwmmxt_waddbhusl */
    case 606:  /* iwmmxt_waddbhusm */
    case 590:  /* iwmmxt_avg4r */
    case 589:  /* iwmmxt_avg4 */
    case 588:  /* addcv2si3 */
    case 587:  /* addcv4hi3 */
    case 586:  /* iwmmxt_wsubaddhx */
    case 585:  /* iwmmxt_waddsubhx */
    case 568:  /* iwmmxt_waccw */
    case 567:  /* iwmmxt_wacch */
    case 566:  /* iwmmxt_waccb */
    case 506:  /* *uminv8qi3_iwmmxt */
    case 505:  /* *uminv4hi3_iwmmxt */
    case 504:  /* *uminv2si3_iwmmxt */
    case 503:  /* *sminv8qi3_iwmmxt */
    case 502:  /* *sminv4hi3_iwmmxt */
    case 501:  /* *sminv2si3_iwmmxt */
    case 500:  /* *umaxv8qi3_iwmmxt */
    case 499:  /* *umaxv4hi3_iwmmxt */
    case 498:  /* *umaxv2si3_iwmmxt */
    case 497:  /* *smaxv8qi3_iwmmxt */
    case 496:  /* *smaxv4hi3_iwmmxt */
    case 495:  /* *smaxv2si3_iwmmxt */
    case 494:  /* gtv2si3 */
    case 493:  /* gtv4hi3 */
    case 492:  /* gtv8qi3 */
    case 491:  /* gtuv2si3 */
    case 490:  /* gtuv4hi3 */
    case 489:  /* gtuv8qi3 */
    case 488:  /* eqv2si3 */
    case 487:  /* eqv4hi3 */
    case 486:  /* eqv8qi3 */
    case 476:  /* iwmmxt_uavgv4hi3 */
    case 475:  /* iwmmxt_uavgv8qi3 */
    case 474:  /* iwmmxt_uavgrndv4hi3 */
    case 473:  /* iwmmxt_uavgrndv8qi3 */
    case 461:  /* ussubv2si3 */
    case 460:  /* ussubv4hi3 */
    case 459:  /* ussubv8qi3 */
    case 458:  /* sssubv2si3 */
    case 457:  /* sssubv4hi3 */
    case 456:  /* sssubv8qi3 */
    case 455:  /* *subv8qi3_iwmmxt */
    case 454:  /* *subv4hi3_iwmmxt */
    case 453:  /* *subv2si3_iwmmxt */
    case 452:  /* usaddv2si3 */
    case 451:  /* usaddv4hi3 */
    case 450:  /* usaddv8qi3 */
    case 449:  /* ssaddv2si3 */
    case 448:  /* ssaddv4hi3 */
    case 447:  /* ssaddv8qi3 */
    case 446:  /* *addv8qi3_iwmmxt */
    case 445:  /* *addv4hi3_iwmmxt */
    case 444:  /* *addv2si3_iwmmxt */
      if ((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 5;
        }
      else if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4007:  /* *p iwmmxt_wabsdiffw */
    case 4006:  /* *p iwmmxt_wabsdiffh */
    case 4005:  /* *p iwmmxt_wabsdiffb */
    case 4004:  /* *p iwmmxt_wabsv8qi3 */
    case 4003:  /* *p iwmmxt_wabsv4hi3 */
    case 4002:  /* *p iwmmxt_wabsv2si3 */
    case 3895:  /* *p iwmmxt_clrv2si */
    case 3894:  /* *p iwmmxt_clrv4hi */
    case 3893:  /* *p iwmmxt_clrv8qi */
    case 3892:  /* *p iwmmxt_clrdi */
    case 3866:  /* *p *xorv8qi3_iwmmxt */
    case 3865:  /* *p *xorv4hi3_iwmmxt */
    case 3864:  /* *p *xorv2si3_iwmmxt */
    case 3863:  /* *p *iorv8qi3_iwmmxt */
    case 3862:  /* *p *iorv4hi3_iwmmxt */
    case 3861:  /* *p *iorv2si3_iwmmxt */
    case 3860:  /* *p *andv8qi3_iwmmxt */
    case 3859:  /* *p *andv4hi3_iwmmxt */
    case 3858:  /* *p *andv2si3_iwmmxt */
    case 3854:  /* *p iwmmxt_nanddi3 */
    case 584:  /* iwmmxt_wabsdiffw */
    case 583:  /* iwmmxt_wabsdiffh */
    case 582:  /* iwmmxt_wabsdiffb */
    case 581:  /* iwmmxt_wabsv8qi3 */
    case 580:  /* iwmmxt_wabsv4hi3 */
    case 579:  /* iwmmxt_wabsv2si3 */
    case 472:  /* iwmmxt_clrv2si */
    case 471:  /* iwmmxt_clrv4hi */
    case 470:  /* iwmmxt_clrv8qi */
    case 469:  /* iwmmxt_clrdi */
    case 443:  /* *xorv8qi3_iwmmxt */
    case 442:  /* *xorv4hi3_iwmmxt */
    case 441:  /* *xorv2si3_iwmmxt */
    case 440:  /* *iorv8qi3_iwmmxt */
    case 439:  /* *iorv4hi3_iwmmxt */
    case 438:  /* *iorv2si3_iwmmxt */
    case 437:  /* *andv8qi3_iwmmxt */
    case 436:  /* *andv4hi3_iwmmxt */
    case 435:  /* *andv2si3_iwmmxt */
    case 428:  /* iwmmxt_nanddi3 */
      if ((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 0;
        }
      else if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 3902:  /* *p iwmmxt_tinsrw */
    case 3901:  /* *p iwmmxt_tinsrh */
    case 3900:  /* *p iwmmxt_tinsrb */
    case 3850:  /* *p tbcstv2si */
    case 3849:  /* *p tbcstv4hi */
    case 3848:  /* *p tbcstv8qi */
    case 479:  /* iwmmxt_tinsrw */
    case 478:  /* iwmmxt_tinsrh */
    case 477:  /* iwmmxt_tinsrb */
    case 424:  /* tbcstv2si */
    case 423:  /* tbcstv4hi */
    case 422:  /* tbcstv8qi */
      if ((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 3;
        }
      else if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case 4189:  /* *p arm_store_release_exclusivesi */
    case 4188:  /* *p arm_store_release_exclusivehi */
    case 4187:  /* *p arm_store_release_exclusiveqi */
    case 4186:  /* *p arm_store_release_exclusivedi */
    case 4185:  /* *p arm_store_exclusivedi */
    case 4184:  /* *p arm_store_exclusivesi */
    case 4183:  /* *p arm_store_exclusivehi */
    case 4182:  /* *p arm_store_exclusiveqi */
    case 4181:  /* *p arm_load_acquire_exclusivedi */
    case 4180:  /* *p arm_load_exclusivedi */
    case 4179:  /* *p arm_load_acquire_exclusivesi */
    case 4178:  /* *p arm_load_exclusivesi */
    case 4177:  /* *p arm_load_acquire_exclusivehi */
    case 4176:  /* *p arm_load_acquire_exclusiveqi */
    case 4175:  /* *p arm_load_exclusivehi */
    case 4174:  /* *p arm_load_exclusiveqi */
    case 4173:  /* *p arm_atomic_loaddi2_ldrd */
    case 4172:  /* *p atomic_storesi */
    case 4171:  /* *p atomic_storehi */
    case 4170:  /* *p atomic_storeqi */
    case 4169:  /* *p atomic_loadsi */
    case 4168:  /* *p atomic_loadhi */
    case 4167:  /* *p atomic_loadqi */
    case 3847:  /* *p *load_multiple */
    case 2701:  /* arm_store_release_exclusivesi */
    case 2700:  /* arm_store_release_exclusivehi */
    case 2699:  /* arm_store_release_exclusiveqi */
    case 2698:  /* arm_store_release_exclusivedi */
    case 2697:  /* arm_store_exclusivedi */
    case 2696:  /* arm_store_exclusivesi */
    case 2695:  /* arm_store_exclusivehi */
    case 2694:  /* arm_store_exclusiveqi */
    case 2693:  /* arm_load_acquire_exclusivedi */
    case 2692:  /* arm_load_exclusivedi */
    case 2691:  /* arm_load_acquire_exclusivesi */
    case 2690:  /* arm_load_exclusivesi */
    case 2689:  /* arm_load_acquire_exclusivehi */
    case 2688:  /* arm_load_acquire_exclusiveqi */
    case 2687:  /* arm_load_exclusivehi */
    case 2686:  /* arm_load_exclusiveqi */
    case 2685:  /* atomic_nand_fetchdi */
    case 2684:  /* atomic_nand_fetchsi */
    case 2683:  /* atomic_nand_fetchhi */
    case 2682:  /* atomic_nand_fetchqi */
    case 2681:  /* atomic_and_fetchdi */
    case 2680:  /* atomic_xor_fetchdi */
    case 2679:  /* atomic_or_fetchdi */
    case 2678:  /* atomic_sub_fetchdi */
    case 2677:  /* atomic_add_fetchdi */
    case 2676:  /* atomic_and_fetchsi */
    case 2675:  /* atomic_xor_fetchsi */
    case 2674:  /* atomic_or_fetchsi */
    case 2673:  /* atomic_sub_fetchsi */
    case 2672:  /* atomic_add_fetchsi */
    case 2671:  /* atomic_and_fetchhi */
    case 2670:  /* atomic_xor_fetchhi */
    case 2669:  /* atomic_or_fetchhi */
    case 2668:  /* atomic_sub_fetchhi */
    case 2667:  /* atomic_add_fetchhi */
    case 2666:  /* atomic_and_fetchqi */
    case 2665:  /* atomic_xor_fetchqi */
    case 2664:  /* atomic_or_fetchqi */
    case 2663:  /* atomic_sub_fetchqi */
    case 2662:  /* atomic_add_fetchqi */
    case 2661:  /* atomic_fetch_nanddi */
    case 2660:  /* atomic_fetch_nandsi */
    case 2659:  /* atomic_fetch_nandhi */
    case 2658:  /* atomic_fetch_nandqi */
    case 2657:  /* atomic_fetch_anddi */
    case 2656:  /* atomic_fetch_xordi */
    case 2655:  /* atomic_fetch_ordi */
    case 2654:  /* atomic_fetch_subdi */
    case 2653:  /* atomic_fetch_adddi */
    case 2652:  /* atomic_fetch_andsi */
    case 2651:  /* atomic_fetch_xorsi */
    case 2650:  /* atomic_fetch_orsi */
    case 2649:  /* atomic_fetch_subsi */
    case 2648:  /* atomic_fetch_addsi */
    case 2647:  /* atomic_fetch_andhi */
    case 2646:  /* atomic_fetch_xorhi */
    case 2645:  /* atomic_fetch_orhi */
    case 2644:  /* atomic_fetch_subhi */
    case 2643:  /* atomic_fetch_addhi */
    case 2642:  /* atomic_fetch_andqi */
    case 2641:  /* atomic_fetch_xorqi */
    case 2640:  /* atomic_fetch_orqi */
    case 2639:  /* atomic_fetch_subqi */
    case 2638:  /* atomic_fetch_addqi */
    case 2637:  /* atomic_nanddi */
    case 2636:  /* atomic_nandsi */
    case 2635:  /* atomic_nandhi */
    case 2634:  /* atomic_nandqi */
    case 2633:  /* atomic_anddi */
    case 2632:  /* atomic_xordi */
    case 2631:  /* atomic_ordi */
    case 2630:  /* atomic_subdi */
    case 2629:  /* atomic_adddi */
    case 2628:  /* atomic_andsi */
    case 2627:  /* atomic_xorsi */
    case 2626:  /* atomic_orsi */
    case 2625:  /* atomic_subsi */
    case 2624:  /* atomic_addsi */
    case 2623:  /* atomic_andhi */
    case 2622:  /* atomic_xorhi */
    case 2621:  /* atomic_orhi */
    case 2620:  /* atomic_subhi */
    case 2619:  /* atomic_addhi */
    case 2618:  /* atomic_andqi */
    case 2617:  /* atomic_xorqi */
    case 2616:  /* atomic_orqi */
    case 2615:  /* atomic_subqi */
    case 2614:  /* atomic_addqi */
    case 2613:  /* atomic_exchangedi */
    case 2612:  /* atomic_exchangesi */
    case 2611:  /* atomic_exchangehi */
    case 2610:  /* atomic_exchangeqi */
    case 2609:  /* atomic_compare_and_swapt1di_1 */
    case 2608:  /* atomic_compare_and_swapt1si_1 */
    case 2607:  /* atomic_compare_and_swap32di_1 */
    case 2606:  /* atomic_compare_and_swap32si_1 */
    case 2605:  /* atomic_compare_and_swapt1hi_1 */
    case 2604:  /* atomic_compare_and_swapt1qi_1 */
    case 2603:  /* atomic_compare_and_swap32hi_1 */
    case 2602:  /* atomic_compare_and_swap32qi_1 */
    case 2601:  /* arm_atomic_loaddi2_ldrd */
    case 2600:  /* atomic_storesi */
    case 2599:  /* atomic_storehi */
    case 2598:  /* atomic_storeqi */
    case 2597:  /* atomic_loadsi */
    case 2596:  /* atomic_loadhi */
    case 2595:  /* atomic_loadqi */
    case 2594:  /* *memory_barrier */
    case 911:  /* thumb2_eh_return */
    case 850:  /* *cstoresi_ne0_thumb1_insn */
    case 804:  /* no_literal_pool_sf_immediate */
    case 803:  /* no_literal_pool_df_immediate */
    case 740:  /* *cmpdf_trap_split_vfp */
    case 739:  /* *cmpdf_split_vfp */
    case 738:  /* *cmpsf_trap_split_vfp */
    case 737:  /* *cmpsf_split_vfp */
    case 421:  /* mrrc2 */
    case 420:  /* mrrc */
    case 419:  /* mcrr2 */
    case 418:  /* mcrr */
    case 417:  /* mrc2 */
    case 416:  /* mrc */
    case 415:  /* mcr2 */
    case 414:  /* mcr */
    case 413:  /* *stc */
    case 412:  /* *stc */
    case 411:  /* *stc */
    case 410:  /* *stc */
    case 409:  /* *ldc */
    case 408:  /* *ldc */
    case 407:  /* *ldc */
    case 406:  /* *ldc */
    case 405:  /* cdp2 */
    case 404:  /* cdp */
    case 403:  /* *load_multiple */
    case 324:  /* arm_eh_return */
    case 321:  /* ctzsi2 */
    case 238:  /* trap */
      if ((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 26 /* 0x1a */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      extract_constrain_insn_cached (insn);
      if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c1 (insn) == WMMXT_ALU_C1_YES))
        {
	  return 0;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_pack (insn) == WMMXT_PACK_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_shift (insn) == WMMXT_SHIFT_YES))
        {
	  return 2;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c1 (insn) == WMMXT_TRANSFER_C1_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c2 (insn) == WMMXT_TRANSFER_C2_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c2 (insn) == WMMXT_ALU_C2_YES))
        {
	  return 5;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c3 (insn) == WMMXT_ALU_C3_YES))
        {
	  return 6;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c3 (insn) == WMMXT_TRANSFER_C3_YES))
        {
	  return 7;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c1 (insn) == WMMXT_MULT_C1_YES))
        {
	  return 8;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c2 (insn) == WMMXT_MULT_C2_YES))
        {
	  return 9;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WSTR))
        {
	  return 10 /* 0xa */;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WLDR))
        {
	  return 11 /* 0xb */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 12 /* 0xc */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 13 /* 0xd */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 14 /* 0xe */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 15 /* 0xf */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 16 /* 0x10 */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 17 /* 0x11 */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 315 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 18 /* 0x12 */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 19 /* 0x13 */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)) && ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2))))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)) && (! ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2)))))))
        {
	  return 21 /* 0x15 */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (! (((
#line 274 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16) || (cached_type == TYPE_STORE_4)))
        {
	  return 22 /* 0x16 */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_NO)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 23 /* 0x17 */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM110)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1100)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1110))))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 24 /* 0x18 */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 274 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (! ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM110)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1100)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1110)))))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 25 /* 0x19 */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_MULTI) && (! (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16) || (cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8) || (cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16))) && (! (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))))
        {
	  return 26 /* 0x1a */;
        }
      else if (((! (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_SINGLE))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 40 /* 0x28 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 41 /* 0x29 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 45 /* 0x2d */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 46 /* 0x2e */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 47 /* 0x2f */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 48 /* 0x30 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 49 /* 0x31 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 50 /* 0x32 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 51 /* 0x33 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 52 /* 0x34 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 53 /* 0x35 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 54 /* 0x36 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 55 /* 0x37 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 56 /* 0x38 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 57 /* 0x39 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 58 /* 0x3a */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 59 /* 0x3b */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 60 /* 0x3c */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 61 /* 0x3d */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 62 /* 0x3e */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 63 /* 0x3f */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FADDS)))
        {
	  return 64 /* 0x40 */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_F_CVTF2I)))
        {
	  return 65 /* 0x41 */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 66 /* 0x42 */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 67 /* 0x43 */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 69 /* 0x45 */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 70 /* 0x46 */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 71 /* 0x47 */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 72 /* 0x48 */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 73 /* 0x49 */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 74 /* 0x4a */;
        }
      else if (((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 75 /* 0x4b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 79 /* 0x4f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 82 /* 0x52 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 87 /* 0x57 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 88 /* 0x58 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 92 /* 0x5c */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 93 /* 0x5d */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 94 /* 0x5e */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 95 /* 0x5f */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 96 /* 0x60 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 97 /* 0x61 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))
        {
	  return 98 /* 0x62 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLALS)))
        {
	  return 99 /* 0x63 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUADX) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLADX) || (cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX) || (cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX)))
        {
	  return 100 /* 0x64 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 101 /* 0x65 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 102 /* 0x66 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 103 /* 0x67 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 104 /* 0x68 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_4))
        {
	  return 105 /* 0x69 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE))
        {
	  return 106 /* 0x6a */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 107 /* 0x6b */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 108 /* 0x6c */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 109 /* 0x6d */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 110 /* 0x6e */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 111 /* 0x6f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 112 /* 0x70 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 113 /* 0x71 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 114 /* 0x72 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX)))
        {
	  return 115 /* 0x73 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 116 /* 0x74 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 117 /* 0x75 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 118 /* 0x76 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 119 /* 0x77 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 120 /* 0x78 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 124 /* 0x7c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 125 /* 0x7d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 126 /* 0x7e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 127 /* 0x7f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY)))
        {
	  return 128 /* 0x80 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 129 /* 0x81 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 130 /* 0x82 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 132 /* 0x84 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 134 /* 0x86 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 135 /* 0x87 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 136 /* 0x88 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 137 /* 0x89 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 138 /* 0x8a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 139 /* 0x8b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 140 /* 0x8c */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 141 /* 0x8d */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 142 /* 0x8e */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 143 /* 0x8f */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 144 /* 0x90 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 145 /* 0x91 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))
        {
	  return 146 /* 0x92 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 147 /* 0x93 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 148 /* 0x94 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 149 /* 0x95 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 150 /* 0x96 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 151 /* 0x97 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 152 /* 0x98 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 153 /* 0x99 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))
        {
	  return 155 /* 0x9b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 156 /* 0x9c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 157 /* 0x9d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 158 /* 0x9e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 159 /* 0x9f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 161 /* 0xa1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 162 /* 0xa2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 163 /* 0xa3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 164 /* 0xa4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 168 /* 0xa8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 169 /* 0xa9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 170 /* 0xaa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 171 /* 0xab */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 172 /* 0xac */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 173 /* 0xad */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 175 /* 0xaf */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 176 /* 0xb0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 177 /* 0xb1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 178 /* 0xb2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 179 /* 0xb3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 180 /* 0xb4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 181 /* 0xb5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 182 /* 0xb6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 183 /* 0xb7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 186 /* 0xba */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 187 /* 0xbb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 188 /* 0xbc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 189 /* 0xbd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 190 /* 0xbe */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 193 /* 0xc1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 194 /* 0xc2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 195 /* 0xc3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 196 /* 0xc4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 197 /* 0xc5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 198 /* 0xc6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 199 /* 0xc7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 200 /* 0xc8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 201 /* 0xc9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 202 /* 0xca */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 203 /* 0xcb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 204 /* 0xcc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 205 /* 0xcd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 206 /* 0xce */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 207 /* 0xcf */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 208 /* 0xd0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 209 /* 0xd1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 210 /* 0xd2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ADR) || (cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_EXTEND)) || (((cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG)) && (! (get_attr_length (insn) == 8)))))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG)))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 215 /* 0xd7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 217 /* 0xd9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 218 /* 0xda */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 220 /* 0xdc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 221 /* 0xdd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 222 /* 0xde */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 223 /* 0xdf */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 224 /* 0xe0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 225 /* 0xe1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 226 /* 0xe2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MUL))
        {
	  return 227 /* 0xe3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 228 /* 0xe4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MLA))
        {
	  return 229 /* 0xe5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 230 /* 0xe6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMACD))
        {
	  return 231 /* 0xe7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFMAD))
        {
	  return 232 /* 0xe8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 233 /* 0xe9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 234 /* 0xea */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 235 /* 0xeb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 236 /* 0xec */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 237 /* 0xed */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 238 /* 0xee */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 239 /* 0xef */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 240 /* 0xf0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 241 /* 0xf1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (get_attr_is_neon_type (insn) == IS_NEON_TYPE_YES) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_OTHER))
        {
	  return 242 /* 0xf2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 243 /* 0xf3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND)))
        {
	  return 244 /* 0xf4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 245 /* 0xf5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS)))
        {
	  return 246 /* 0xf6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMMUL)))
        {
	  return 247 /* 0xf7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMMLA) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))
        {
	  return 248 /* 0xf8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMAAL) || (cached_type == TYPE_SMLALXY)))
        {
	  return 249 /* 0xf9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD)))
        {
	  return 250 /* 0xfa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 251 /* 0xfb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 252 /* 0xfc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 253 /* 0xfd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 254 /* 0xfe */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 255 /* 0xff */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 256 /* 0x100 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 257 /* 0x101 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 258 /* 0x102 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 259 /* 0x103 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 260 /* 0x104 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 261 /* 0x105 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 262 /* 0x106 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 263 /* 0x107 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 264 /* 0x108 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 265 /* 0x109 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 266 /* 0x10a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRC))
        {
	  return 267 /* 0x10b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRRC))
        {
	  return 268 /* 0x10c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_1))
        {
	  return 269 /* 0x10d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_2))
        {
	  return 270 /* 0x10e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_3))
        {
	  return 271 /* 0x10f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_4))
        {
	  return 272 /* 0x110 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_5))
        {
	  return 273 /* 0x111 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 274 /* 0x112 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VMOV))
        {
	  return 275 /* 0x113 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA))
        {
	  return 276 /* 0x114 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 277 /* 0x115 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 278 /* 0x116 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 279 /* 0x117 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 280 /* 0x118 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 281 /* 0x119 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 282 /* 0x11a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 283 /* 0x11b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 284 /* 0x11c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 285 /* 0x11d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 286 /* 0x11e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 287 /* 0x11f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 288 /* 0x120 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 289 /* 0x121 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 290 /* 0x122 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 291 /* 0x123 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 292 /* 0x124 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 293 /* 0x125 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 294 /* 0x126 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 295 /* 0x127 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 296 /* 0x128 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 297 /* 0x129 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 298 /* 0x12a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 299 /* 0x12b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 300 /* 0x12c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 301 /* 0x12d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 302 /* 0x12e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 303 /* 0x12f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_S_Q)))
        {
	  return 304 /* 0x130 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 305 /* 0x131 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 306 /* 0x132 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 307 /* 0x133 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_LDR))
        {
	  return 308 /* 0x134 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_STR))
        {
	  return 309 /* 0x135 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 310 /* 0x136 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 311 /* 0x137 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 312 /* 0x138 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 313 /* 0x139 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 314 /* 0x13a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 315 /* 0x13b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 316 /* 0x13c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 317 /* 0x13d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 318 /* 0x13e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 319 /* 0x13f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 320 /* 0x140 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 321 /* 0x141 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR))
        {
	  return 322 /* 0x142 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 323 /* 0x143 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 324 /* 0x144 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 325 /* 0x145 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 326 /* 0x146 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 327 /* 0x147 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8) || (cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 328 /* 0x148 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 329 /* 0x149 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMULXY))
        {
	  return 330 /* 0x14a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLAXY))
        {
	  return 331 /* 0x14b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 332 /* 0x14c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 333 /* 0x14d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))
        {
	  return 334 /* 0x14e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 335 /* 0x14f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 336 /* 0x150 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))
        {
	  return 337 /* 0x151 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 338 /* 0x152 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 339 /* 0x153 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 340 /* 0x154 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 341 /* 0x155 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 342 /* 0x156 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 343 /* 0x157 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 344 /* 0x158 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 345 /* 0x159 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRC))
        {
	  return 346 /* 0x15a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRRC))
        {
	  return 347 /* 0x15b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_1))
        {
	  return 348 /* 0x15c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_2))
        {
	  return 349 /* 0x15d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_3))
        {
	  return 350 /* 0x15e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_4))
        {
	  return 351 /* 0x15f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_5))
        {
	  return 352 /* 0x160 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 353 /* 0x161 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VMOV))
        {
	  return 354 /* 0x162 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA))
        {
	  return 355 /* 0x163 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 356 /* 0x164 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 357 /* 0x165 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 358 /* 0x166 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 359 /* 0x167 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 360 /* 0x168 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 361 /* 0x169 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 362 /* 0x16a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 363 /* 0x16b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 364 /* 0x16c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 365 /* 0x16d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 366 /* 0x16e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 367 /* 0x16f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 368 /* 0x170 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 369 /* 0x171 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 370 /* 0x172 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 371 /* 0x173 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 372 /* 0x174 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 373 /* 0x175 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 374 /* 0x176 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 375 /* 0x177 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 376 /* 0x178 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 377 /* 0x179 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 378 /* 0x17a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 379 /* 0x17b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 380 /* 0x17c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 381 /* 0x17d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 382 /* 0x17e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 383 /* 0x17f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 384 /* 0x180 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 385 /* 0x181 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 386 /* 0x182 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_LDR))
        {
	  return 387 /* 0x183 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_STR))
        {
	  return 388 /* 0x184 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 389 /* 0x185 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 390 /* 0x186 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 391 /* 0x187 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 392 /* 0x188 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 393 /* 0x189 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 394 /* 0x18a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 395 /* 0x18b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 396 /* 0x18c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 397 /* 0x18d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 398 /* 0x18e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 399 /* 0x18f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 400 /* 0x190 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 401 /* 0x191 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR))
        {
	  return 402 /* 0x192 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 403 /* 0x193 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 404 /* 0x194 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 405 /* 0x195 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 406 /* 0x196 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 407 /* 0x197 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))
        {
	  return 408 /* 0x198 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 409 /* 0x199 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 410 /* 0x19a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 411 /* 0x19b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 412 /* 0x19c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 413 /* 0x19d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 414 /* 0x19e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 415 /* 0x19f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 416 /* 0x1a0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD))
        {
	  return 417 /* 0x1a1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD_Q))
        {
	  return 418 /* 0x1a2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 419 /* 0x1a3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 420 /* 0x1a4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 421 /* 0x1a5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 422 /* 0x1a6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 423 /* 0x1a7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 424 /* 0x1a8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA))
        {
	  return 425 /* 0x1a9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA_Q))
        {
	  return 426 /* 0x1aa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 427 /* 0x1ab */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 428 /* 0x1ac */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 429 /* 0x1ad */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 430 /* 0x1ae */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 431 /* 0x1af */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 432 /* 0x1b0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 433 /* 0x1b1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 434 /* 0x1b2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 435 /* 0x1b3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 436 /* 0x1b4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 437 /* 0x1b5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 438 /* 0x1b6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 439 /* 0x1b7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 440 /* 0x1b8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL))
        {
	  return 441 /* 0x1b9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 442 /* 0x1ba */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA))
        {
	  return 443 /* 0x1bb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 444 /* 0x1bc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 445 /* 0x1bd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 446 /* 0x1be */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS))
        {
	  return 447 /* 0x1bf */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 448 /* 0x1c0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP))
        {
	  return 449 /* 0x1c1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 450 /* 0x1c2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 451 /* 0x1c3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 452 /* 0x1c4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TO_GP))
        {
	  return 453 /* 0x1c5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_A))
        {
	  return 454 /* 0x1c6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_B))
        {
	  return 455 /* 0x1c7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_C))
        {
	  return 456 /* 0x1c8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_D))
        {
	  return 457 /* 0x1c9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_E))
        {
	  return 458 /* 0x1ca */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_F))
        {
	  return 459 /* 0x1cb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_A))
        {
	  return 460 /* 0x1cc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_B))
        {
	  return 461 /* 0x1cd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_C))
        {
	  return 462 /* 0x1ce */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_D))
        {
	  return 463 /* 0x1cf */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_E))
        {
	  return 464 /* 0x1d0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_F))
        {
	  return 465 /* 0x1d1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_G))
        {
	  return 466 /* 0x1d2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_H))
        {
	  return 467 /* 0x1d3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 468 /* 0x1d4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 469 /* 0x1d5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 470 /* 0x1d6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 471 /* 0x1d7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 472 /* 0x1d8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 473 /* 0x1d9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 474 /* 0x1da */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 475 /* 0x1db */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 476 /* 0x1dc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 477 /* 0x1dd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 478 /* 0x1de */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 479 /* 0x1df */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 480 /* 0x1e0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 481 /* 0x1e1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 482 /* 0x1e2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 483 /* 0x1e3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 484 /* 0x1e4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 485 /* 0x1e5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 486 /* 0x1e6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_REV) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 487 /* 0x1e7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 488 /* 0x1e8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MULS) || (cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 489 /* 0x1e9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMMLA)))
        {
	  return 490 /* 0x1ea */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAD) || (cached_type == TYPE_SMLADX) || (cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUADX) || (cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX)))
        {
	  return 491 /* 0x1eb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAL) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMAAL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))
        {
	  return 492 /* 0x1ec */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLSLD)))
        {
	  return 493 /* 0x1ed */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMULLS)))
        {
	  return 494 /* 0x1ee */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 495 /* 0x1ef */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 496 /* 0x1f0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 497 /* 0x1f1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 498 /* 0x1f2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 499 /* 0x1f3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 500 /* 0x1f4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 501 /* 0x1f5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 502 /* 0x1f6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 503 /* 0x1f7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 504 /* 0x1f8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD))
        {
	  return 505 /* 0x1f9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD_Q))
        {
	  return 506 /* 0x1fa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 507 /* 0x1fb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 508 /* 0x1fc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 509 /* 0x1fd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 510 /* 0x1fe */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 511 /* 0x1ff */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 512 /* 0x200 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA))
        {
	  return 513 /* 0x201 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA_Q))
        {
	  return 514 /* 0x202 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 515 /* 0x203 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 516 /* 0x204 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 517 /* 0x205 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 518 /* 0x206 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 519 /* 0x207 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 520 /* 0x208 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 521 /* 0x209 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 522 /* 0x20a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 523 /* 0x20b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 524 /* 0x20c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 525 /* 0x20d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 526 /* 0x20e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 527 /* 0x20f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 528 /* 0x210 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL))
        {
	  return 529 /* 0x211 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 530 /* 0x212 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA))
        {
	  return 531 /* 0x213 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 532 /* 0x214 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 533 /* 0x215 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 534 /* 0x216 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS))
        {
	  return 535 /* 0x217 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 536 /* 0x218 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP))
        {
	  return 537 /* 0x219 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 538 /* 0x21a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 539 /* 0x21b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 540 /* 0x21c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TO_GP))
        {
	  return 541 /* 0x21d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 542 /* 0x21e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 543 /* 0x21f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_A))
        {
	  return 544 /* 0x220 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_B))
        {
	  return 545 /* 0x221 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_C))
        {
	  return 546 /* 0x222 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_D))
        {
	  return 547 /* 0x223 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_E))
        {
	  return 548 /* 0x224 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_F))
        {
	  return 549 /* 0x225 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_G))
        {
	  return 550 /* 0x226 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_H))
        {
	  return 551 /* 0x227 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 552 /* 0x228 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_A))
        {
	  return 553 /* 0x229 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_B))
        {
	  return 554 /* 0x22a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 555 /* 0x22b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 556 /* 0x22c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 557 /* 0x22d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 558 /* 0x22e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 559 /* 0x22f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 560 /* 0x230 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 561 /* 0x231 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 562 /* 0x232 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 563 /* 0x233 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 564 /* 0x234 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 565 /* 0x235 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 566 /* 0x236 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 567 /* 0x237 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 568 /* 0x238 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ADR) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MOV_SHIFT)))
        {
	  return 569 /* 0x239 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG)))
        {
	  return 570 /* 0x23a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 571 /* 0x23b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 572 /* 0x23c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 573 /* 0x23d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_ROTATE_IMM))
        {
	  return 574 /* 0x23e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 575 /* 0x23f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 576 /* 0x240 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_ACQ)))
        {
	  return 577 /* 0x241 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_REL)))
        {
	  return 578 /* 0x242 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 579 /* 0x243 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 580 /* 0x244 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 581 /* 0x245 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 582 /* 0x246 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 583 /* 0x247 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCSEL) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD) || (cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 584 /* 0x248 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 585 /* 0x249 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 586 /* 0x24a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FFMAD)))
        {
	  return 587 /* 0x24b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 588 /* 0x24c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 589 /* 0x24d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F) || (cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q)))
        {
	  return 590 /* 0x24e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I) || (cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 591 /* 0x24f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 592 /* 0x250 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_64)))
        {
	  return 593 /* 0x251 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_LOTS)))
        {
	  return 594 /* 0x252 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_64)))
        {
	  return 595 /* 0x253 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_LOTS)))
        {
	  return 596 /* 0x254 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU))
        {
	  return 597 /* 0x255 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU_Q))
        {
	  return 598 /* 0x256 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL))
        {
	  return 599 /* 0x257 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL_Q))
        {
	  return 600 /* 0x258 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S)))
        {
	  return 601 /* 0x259 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D)))
        {
	  return 602 /* 0x25a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S_Q))
        {
	  return 603 /* 0x25b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D_Q))
        {
	  return 604 /* 0x25c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE))
        {
	  return 605 /* 0x25d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESMC))
        {
	  return 606 /* 0x25e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_FAST))
        {
	  return 607 /* 0x25f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA256_FAST))
        {
	  return 608 /* 0x260 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 609 /* 0x261 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 610 /* 0x262 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 611 /* 0x263 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_BFM) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 612 /* 0x264 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 613 /* 0x265 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 614 /* 0x266 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 615 /* 0x267 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 616 /* 0x268 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 617 /* 0x269 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 618 /* 0x26a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 619 /* 0x26b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 620 /* 0x26c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 621 /* 0x26d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD))
        {
	  return 622 /* 0x26e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD_Q))
        {
	  return 623 /* 0x26f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 624 /* 0x270 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 625 /* 0x271 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 626 /* 0x272 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 627 /* 0x273 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 628 /* 0x274 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 629 /* 0x275 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA))
        {
	  return 630 /* 0x276 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA_Q))
        {
	  return 631 /* 0x277 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 632 /* 0x278 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 633 /* 0x279 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 634 /* 0x27a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 635 /* 0x27b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 636 /* 0x27c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 637 /* 0x27d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 638 /* 0x27e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 639 /* 0x27f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 640 /* 0x280 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 641 /* 0x281 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 642 /* 0x282 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_REDUCTIONS_Q))
        {
	  return 643 /* 0x283 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 644 /* 0x284 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 645 /* 0x285 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 646 /* 0x286 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL))
        {
	  return 647 /* 0x287 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 648 /* 0x288 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA))
        {
	  return 649 /* 0x289 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 650 /* 0x28a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 651 /* 0x28b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 652 /* 0x28c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS))
        {
	  return 653 /* 0x28d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS_Q))
        {
	  return 654 /* 0x28e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS))
        {
	  return 655 /* 0x28f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 656 /* 0x290 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP))
        {
	  return 657 /* 0x291 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 658 /* 0x292 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 659 /* 0x293 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 660 /* 0x294 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TO_GP))
        {
	  return 661 /* 0x295 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_A))
        {
	  return 662 /* 0x296 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_B))
        {
	  return 663 /* 0x297 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_C))
        {
	  return 664 /* 0x298 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_D))
        {
	  return 665 /* 0x299 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_E))
        {
	  return 666 /* 0x29a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_F))
        {
	  return 667 /* 0x29b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_A))
        {
	  return 668 /* 0x29c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_B))
        {
	  return 669 /* 0x29d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_COMPLEX))
        {
	  return 670 /* 0x29e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 671 /* 0x29f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 672 /* 0x2a0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 673 /* 0x2a1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 674 /* 0x2a2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 675 /* 0x2a3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 676 /* 0x2a4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 677 /* 0x2a5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 678 /* 0x2a6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_SQRT_S)))
        {
	  return 679 /* 0x2a7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_SQRT_D)))
        {
	  return 680 /* 0x2a8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 681 /* 0x2a9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 682 /* 0x2aa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 683 /* 0x2ab */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 684 /* 0x2ac */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 685 /* 0x2ad */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))
        {
	  return 686 /* 0x2ae */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG)))
        {
	  return 687 /* 0x2af */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 688 /* 0x2b0 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 689 /* 0x2b1 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMMUL)))
        {
	  return 690 /* 0x2b2 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD)))
        {
	  return 691 /* 0x2b3 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 692 /* 0x2b4 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))
        {
	  return 693 /* 0x2b5 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 694 /* 0x2b6 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMAAL)))
        {
	  return 695 /* 0x2b7 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 696 /* 0x2b8 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 697 /* 0x2b9 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 698 /* 0x2ba */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 699 /* 0x2bb */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 700 /* 0x2bc */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 701 /* 0x2bd */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 702 /* 0x2be */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 703 /* 0x2bf */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 704 /* 0x2c0 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCMPS)))
        {
	  return 705 /* 0x2c1 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FMULS)))
        {
	  return 706 /* 0x2c2 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 707 /* 0x2c3 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 708 /* 0x2c4 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 709 /* 0x2c5 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 710 /* 0x2c6 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 711 /* 0x2c7 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 712 /* 0x2c8 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 713 /* 0x2c9 */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FMULD)))
        {
	  return 714 /* 0x2ca */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 715 /* 0x2cb */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTD)))
        {
	  return 716 /* 0x2cc */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 717 /* 0x2cd */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 718 /* 0x2ce */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) || (cached_type == TYPE_F_STORED)))
        {
	  return 719 /* 0x2cf */;
        }
      else if ((((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 720 /* 0x2d0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 721 /* 0x2d1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM)))
        {
	  return 722 /* 0x2d2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY)))
        {
	  return 723 /* 0x2d3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MULS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULL)))
        {
	  return 724 /* 0x2d4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 725 /* 0x2d5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_EXTEND))
        {
	  return 726 /* 0x2d6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_MLAS)))
        {
	  return 727 /* 0x2d7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 728 /* 0x2d8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 729 /* 0x2d9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 730 /* 0x2da */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 731 /* 0x2db */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 732 /* 0x2dc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 733 /* 0x2dd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 734 /* 0x2de */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_F_FLAG)))
        {
	  return 735 /* 0x2df */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 736 /* 0x2e0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 737 /* 0x2e1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 738 /* 0x2e2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 739 /* 0x2e3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 740 /* 0x2e4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 741 /* 0x2e5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 742 /* 0x2e6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 743 /* 0x2e7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 744 /* 0x2e8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCRR) || (cached_type == TYPE_F_MRRC)))
        {
	  return 745 /* 0x2e9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)) || ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 746 /* 0x2ea */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 747 /* 0x2eb */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4)) && (
#line 60 "../../gcc-8.1.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn))))
        {
	  return 748 /* 0x2ec */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4)) && (! (
#line 60 "../../gcc-8.1.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn)))))
        {
	  return 749 /* 0x2ed */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 750 /* 0x2ee */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 751 /* 0x2ef */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 752 /* 0x2f0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 753 /* 0x2f1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 754 /* 0x2f2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 755 /* 0x2f3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 756 /* 0x2f4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 757 /* 0x2f5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 758 /* 0x2f6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 759 /* 0x2f7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS)))
        {
	  return 760 /* 0x2f8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 761 /* 0x2f9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 762 /* 0x2fa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 763 /* 0x2fb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 764 /* 0x2fc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 765 /* 0x2fd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 766 /* 0x2fe */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 767 /* 0x2ff */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 768 /* 0x300 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 769 /* 0x301 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 770 /* 0x302 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 771 /* 0x303 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 772 /* 0x304 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 773 /* 0x305 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 774 /* 0x306 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 775 /* 0x307 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 776 /* 0x308 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 777 /* 0x309 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 778 /* 0x30a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 779 /* 0x30b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 780 /* 0x30c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))
        {
	  return 781 /* 0x30d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 782 /* 0x30e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 783 /* 0x30f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 784 /* 0x310 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 785 /* 0x311 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 786 /* 0x312 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_SIMPLE))
        {
	  return 787 /* 0x313 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 788 /* 0x314 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 789 /* 0x315 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_MULTIPLY) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_MLA) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SAT_MLA_LONG)))
        {
	  return 790 /* 0x316 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 791 /* 0x317 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_BASIC) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_BASIC)))
        {
	  return 792 /* 0x318 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_COMPLEX)))
        {
	  return 793 /* 0x319 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_UNARY))
        {
	  return 794 /* 0x31a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ADD))
        {
	  return 795 /* 0x31b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ABD))
        {
	  return 796 /* 0x31c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_COMPARE))
        {
	  return 797 /* 0x31d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_MINMAX))
        {
	  return 798 /* 0x31e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_ADD))
        {
	  return 799 /* 0x31f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ROUND))
        {
	  return 800 /* 0x320 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_CVT))
        {
	  return 801 /* 0x321 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MUL))
        {
	  return 802 /* 0x322 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MLA))
        {
	  return 803 /* 0x323 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATE))
        {
	  return 804 /* 0x324 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATEX))
        {
	  return 805 /* 0x325 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_STEP))
        {
	  return 806 /* 0x326 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS))
        {
	  return 807 /* 0x327 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 808 /* 0x328 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITINS))
        {
	  return 809 /* 0x329 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TBL))
        {
	  return 810 /* 0x32a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FROM_GP))
        {
	  return 811 /* 0x32b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TO_GP))
        {
	  return 812 /* 0x32c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD) || (cached_type == TYPE_NEON_LDP)))
        {
	  return 813 /* 0x32d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LDP_Q))
        {
	  return 814 /* 0x32e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_1) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ALL)))
        {
	  return 815 /* 0x32f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_2))
        {
	  return 816 /* 0x330 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_3))
        {
	  return 817 /* 0x331 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_4))
        {
	  return 818 /* 0x332 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ONE))
        {
	  return 819 /* 0x333 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_2))
        {
	  return 820 /* 0x334 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ONE))
        {
	  return 821 /* 0x335 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ALL))
        {
	  return 822 /* 0x336 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_3))
        {
	  return 823 /* 0x337 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ONE))
        {
	  return 824 /* 0x338 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ALL))
        {
	  return 825 /* 0x339 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_4))
        {
	  return 826 /* 0x33a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ONE))
        {
	  return 827 /* 0x33b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ALL))
        {
	  return 828 /* 0x33c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED) || (cached_type == TYPE_NEON_STP)))
        {
	  return 829 /* 0x33d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_STP_Q))
        {
	  return 830 /* 0x33e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_1))
        {
	  return 831 /* 0x33f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_2))
        {
	  return 832 /* 0x340 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_3))
        {
	  return 833 /* 0x341 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_4))
        {
	  return 834 /* 0x342 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_ONE))
        {
	  return 835 /* 0x343 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE2_2) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE2_ONE)))
        {
	  return 836 /* 0x344 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE3_3) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE3_ONE)))
        {
	  return 837 /* 0x345 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE4_4) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE4_ONE)))
        {
	  return 838 /* 0x346 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 839 /* 0x347 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 840 /* 0x348 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 841 /* 0x349 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 842 /* 0x34a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 843 /* 0x34b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I))
        {
	  return 844 /* 0x34c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F))
        {
	  return 845 /* 0x34d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 846 /* 0x34e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 847 /* 0x34f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCSEL))
        {
	  return 848 /* 0x350 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 849 /* 0x351 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 850 /* 0x352 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q)))
        {
	  return 851 /* 0x353 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 852 /* 0x354 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 853 /* 0x355 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_XOR) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 854 /* 0x356 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 855 /* 0x357 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_B_LONG) || (cached_type == TYPE_NEON_MUL_H_LONG) || (cached_type == TYPE_NEON_MUL_S_LONG)))
        {
	  return 856 /* 0x358 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_D_LONG))
        {
	  return 857 /* 0x359 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRC))
        {
	  return 858 /* 0x35a */;
        }
      else if ((((((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 859 /* 0x35b */;
        }
      else if ((((((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 860 /* 0x35c */;
        }
      else if ((((((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULD) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 861 /* 0x35d */;
        }
      else if ((((((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 862 /* 0x35e */;
        }
      else if ((((((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 863 /* 0x35f */;
        }
      else if ((((((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 864 /* 0x360 */;
        }
      else if ((((((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 865 /* 0x361 */;
        }
      else if ((((((
#line 110 "../../gcc-8.1.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 866 /* 0x362 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 867 /* 0x363 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET))
        {
	  return 868 /* 0x364 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 869 /* 0x365 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET))
        {
	  return 870 /* 0x366 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && ((cached_shift = get_attr_shift (insn)) == 1))
        {
	  return 871 /* 0x367 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET) && ((cached_shift = get_attr_shift (insn)) == 1))
        {
	  return 872 /* 0x368 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 873 /* 0x369 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 874 /* 0x36a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 875 /* 0x36b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 876 /* 0x36c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 877 /* 0x36d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 878 /* 0x36e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 879 /* 0x36f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 880 /* 0x370 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 881 /* 0x371 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 882 /* 0x372 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 883 /* 0x373 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 884 /* 0x374 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 885 /* 0x375 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 886 /* 0x376 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 887 /* 0x377 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 888 /* 0x378 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 889 /* 0x379 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 890 /* 0x37a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 891 /* 0x37b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 892 /* 0x37c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))
        {
	  return 893 /* 0x37d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 894 /* 0x37e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 895 /* 0x37f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NO_INSN))
        {
	  return 896 /* 0x380 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 897 /* 0x381 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) || (cached_type == TYPE_F_LOADS)))
        {
	  return 898 /* 0x382 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORED) || (cached_type == TYPE_F_STORES)))
        {
	  return 899 /* 0x383 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 900 /* 0x384 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MCR))
        {
	  return 901 /* 0x385 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MRC))
        {
	  return 902 /* 0x386 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 903 /* 0x387 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 904 /* 0x388 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)) && (get_attr_fp (insn) == FP_YES))
        {
	  return 905 /* 0x389 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 906 /* 0x38a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 907 /* 0x38b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MRS)))
        {
	  return 908 /* 0x38c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CSEL))
        {
	  return 909 /* 0x38d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 910 /* 0x38e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_SHIFT_REG))
        {
	  return 911 /* 0x38f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_REV))
        {
	  return 912 /* 0x390 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALUS_IMM) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 913 /* 0x391 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 914 /* 0x392 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))
        {
	  return 915 /* 0x393 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 916 /* 0x394 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCCMPS)))
        {
	  return 917 /* 0x395 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCSEL))
        {
	  return 918 /* 0x396 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BFX))
        {
	  return 919 /* 0x397 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BFM))
        {
	  return 920 /* 0x398 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_RINTD) || (cached_type == TYPE_F_RINTS)))
        {
	  return 921 /* 0x399 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 922 /* 0x39a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I))
        {
	  return 923 /* 0x39b */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F))
        {
	  return 924 /* 0x39c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMULS)))
        {
	  return 925 /* 0x39d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 926 /* 0x39e */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 927 /* 0x39f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FSQRTD))
        {
	  return 928 /* 0x3a0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHD) || (cached_type == TYPE_FFARITHS)))
        {
	  return 929 /* 0x3a1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MINMAXD) || (cached_type == TYPE_F_MINMAXS)))
        {
	  return 930 /* 0x3a2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_DUP_Q)))
        {
	  return 931 /* 0x3a3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q)))
        {
	  return 932 /* 0x3a4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q)))
        {
	  return 933 /* 0x3a5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_LOGIC_Q) || (cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q)))
        {
	  return 934 /* 0x3a6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 935 /* 0x3a7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q) || (cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q)))
        {
	  return 936 /* 0x3a8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_IMM) || (cached_type == TYPE_NEON_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SHIFT_REG) || (cached_type == TYPE_NEON_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_LONG) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG) || (cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q)))
        {
	  return 937 /* 0x3a9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ADD) || (cached_type == TYPE_NEON_ADD_Q) || (cached_type == TYPE_NEON_SUB) || (cached_type == TYPE_NEON_SUB_Q) || (cached_type == TYPE_NEON_NEG) || (cached_type == TYPE_NEON_NEG_Q) || (cached_type == TYPE_NEON_ABS) || (cached_type == TYPE_NEON_ABS_Q) || (cached_type == TYPE_NEON_ABD_Q) || (cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q) || (cached_type == TYPE_NEON_REDUC_ADD) || (cached_type == TYPE_NEON_REDUC_ADD_Q) || (cached_type == TYPE_NEON_ADD_HALVE) || (cached_type == TYPE_NEON_ADD_HALVE_Q) || (cached_type == TYPE_NEON_SUB_HALVE) || (cached_type == TYPE_NEON_SUB_HALVE_Q) || (cached_type == TYPE_NEON_QADD) || (cached_type == TYPE_NEON_QADD_Q) || (cached_type == TYPE_NEON_COMPARE) || (cached_type == TYPE_NEON_COMPARE_Q) || (cached_type == TYPE_NEON_COMPARE_ZERO) || (cached_type == TYPE_NEON_COMPARE_ZERO_Q) || (cached_type == TYPE_NEON_TST) || (cached_type == TYPE_NEON_TST_Q) || (cached_type == TYPE_NEON_MINMAX) || (cached_type == TYPE_NEON_MINMAX_Q)))
        {
	  return 938 /* 0x3aa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q)))
        {
	  return 939 /* 0x3ab */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_B) || (cached_type == TYPE_NEON_MUL_B_Q) || (cached_type == TYPE_NEON_MUL_H) || (cached_type == TYPE_NEON_MUL_H_Q) || (cached_type == TYPE_NEON_MUL_S) || (cached_type == TYPE_NEON_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B) || (cached_type == TYPE_NEON_MLA_B_Q) || (cached_type == TYPE_NEON_MLA_H) || (cached_type == TYPE_NEON_MLA_H_Q) || (cached_type == TYPE_NEON_MLA_S) || (cached_type == TYPE_NEON_MLA_S_Q) || (cached_type == TYPE_NEON_MLA_H_SCALAR) || (cached_type == TYPE_NEON_MLA_H_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_S_SCALAR) || (cached_type == TYPE_NEON_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B_LONG) || (cached_type == TYPE_NEON_MLA_H_LONG) || (cached_type == TYPE_NEON_MLA_S_LONG) || (cached_type == TYPE_NEON_FP_MUL_S) || (cached_type == TYPE_NEON_FP_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_D) || (cached_type == TYPE_NEON_FP_MUL_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S) || (cached_type == TYPE_NEON_FP_MLA_S_Q) || (cached_type == TYPE_NEON_FP_MLA_D) || (cached_type == TYPE_NEON_FP_MLA_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MLA_D_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_B) || (cached_type == TYPE_NEON_SAT_MUL_B_Q) || (cached_type == TYPE_NEON_SAT_MUL_H) || (cached_type == TYPE_NEON_SAT_MUL_H_Q) || (cached_type == TYPE_NEON_SAT_MUL_S) || (cached_type == TYPE_NEON_SAT_MUL_S_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_B_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_SCALAR_LONG)))
        {
	  return 940 /* 0x3ac */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ABD_D_Q)))
        {
	  return 941 /* 0x3ad */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q)))
        {
	  return 942 /* 0x3ae */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q)))
        {
	  return 943 /* 0x3af */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_NEG_S) || (cached_type == TYPE_NEON_FP_NEG_S_Q) || (cached_type == TYPE_NEON_FP_NEG_D) || (cached_type == TYPE_NEON_FP_NEG_D_Q) || (cached_type == TYPE_NEON_FP_ABS_S) || (cached_type == TYPE_NEON_FP_ABS_S_Q) || (cached_type == TYPE_NEON_FP_ABS_D) || (cached_type == TYPE_NEON_FP_ABS_D_Q)))
        {
	  return 944 /* 0x3b0 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ROUND_S) || (cached_type == TYPE_NEON_FP_ROUND_S_Q) || (cached_type == TYPE_NEON_FP_ROUND_D) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))
        {
	  return 945 /* 0x3b1 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_INT_TO_FP_S) || (cached_type == TYPE_NEON_INT_TO_FP_S_Q) || (cached_type == TYPE_NEON_INT_TO_FP_D) || (cached_type == TYPE_NEON_INT_TO_FP_D_Q) || (cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || (cached_type == TYPE_NEON_FP_CVT_NARROW_S_Q) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q)))
        {
	  return 946 /* 0x3b2 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))
        {
	  return 947 /* 0x3b3 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CLS_Q)))
        {
	  return 948 /* 0x3b4 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q) || (cached_type == TYPE_NEON_STP) || (cached_type == TYPE_NEON_STP_Q)))
        {
	  return 949 /* 0x3b5 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SUB_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q)))
        {
	  return 950 /* 0x3b6 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_SHIFT_ACC_Q)))
        {
	  return 951 /* 0x3b7 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_COMPARE_S) || (cached_type == TYPE_NEON_FP_COMPARE_S_Q) || (cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q)))
        {
	  return 952 /* 0x3b8 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 953 /* 0x3b9 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_TBL1_Q)))
        {
	  return 954 /* 0x3ba */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL2) || (cached_type == TYPE_NEON_TBL2_Q)))
        {
	  return 955 /* 0x3bb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_PERMUTE_Q)))
        {
	  return 956 /* 0x3bc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_ALL_LANES))
        {
	  return 957 /* 0x3bd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPE_S) || (cached_type == TYPE_NEON_FP_RECPE_S_Q) || (cached_type == TYPE_NEON_FP_RECPE_D) || (cached_type == TYPE_NEON_FP_RECPE_D_Q) || (cached_type == TYPE_NEON_FP_RECPX_S) || (cached_type == TYPE_NEON_FP_RECPX_S_Q) || (cached_type == TYPE_NEON_FP_RECPX_D) || (cached_type == TYPE_NEON_FP_RECPX_D_Q)))
        {
	  return 958 /* 0x3be */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S) || (cached_type == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RECPS_D_Q)))
        {
	  return 959 /* 0x3bf */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_D_LONG) || (cached_type == TYPE_CRYPTO_PMULL)))
        {
	  return 960 /* 0x3c0 */;
        }
      else
        {
	  return 962 /* 0x3c2 */;
        }

    }
}


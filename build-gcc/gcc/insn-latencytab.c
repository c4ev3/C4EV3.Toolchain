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
insn_default_latency (rtx_insn *insn ATTRIBUTE_UNUSED)
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
	  return 32 /* 0x20 */;
        }
      else if (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))
        {
	  return 4;
        }
      else
        {
	  return 0;
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
	  return 1;
        }
      else
        {
	  return 0;
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
	  return 1;
        }
      else
        {
	  return 0;
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
    case 3985:  /* *p iwmmxt_tmiatt */
    case 3984:  /* *p iwmmxt_tmiabt */
    case 3983:  /* *p iwmmxt_tmiatb */
    case 3982:  /* *p iwmmxt_tmiabb */
    case 3981:  /* *p iwmmxt_tmiaph */
    case 3980:  /* *p iwmmxt_tmia */
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
    case 562:  /* iwmmxt_tmiatt */
    case 561:  /* iwmmxt_tmiabt */
    case 560:  /* iwmmxt_tmiatb */
    case 559:  /* iwmmxt_tmiabb */
    case 558:  /* iwmmxt_tmiaph */
    case 557:  /* iwmmxt_tmia */
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
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 4027:  /* *p iwmmxt_wqmulmr */
    case 4025:  /* *p iwmmxt_wqmulm */
    case 4022:  /* *p iwmmxt_wmulwsmr */
    case 4021:  /* *p iwmmxt_wmulumr */
    case 4020:  /* *p iwmmxt_wmulsmr */
    case 4001:  /* *p iwmmxt_wsadhz */
    case 4000:  /* *p iwmmxt_wsadbz */
    case 3999:  /* *p iwmmxt_wsadh */
    case 3998:  /* *p iwmmxt_wsadb */
    case 3887:  /* *p umulv4hi3_highpart */
    case 3886:  /* *p smulv4hi3_highpart */
    case 3885:  /* *p *mulv4hi3_iwmmxt */
    case 604:  /* iwmmxt_wqmulmr */
    case 602:  /* iwmmxt_wqmulm */
    case 599:  /* iwmmxt_wmulwsmr */
    case 598:  /* iwmmxt_wmulumr */
    case 597:  /* iwmmxt_wmulsmr */
    case 578:  /* iwmmxt_wsadhz */
    case 577:  /* iwmmxt_wsadbz */
    case 576:  /* iwmmxt_wsadh */
    case 575:  /* iwmmxt_wsadb */
    case 464:  /* umulv4hi3_highpart */
    case 463:  /* smulv4hi3_highpart */
    case 462:  /* *mulv4hi3_iwmmxt */
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
	  return 1;
        }
      else
        {
	  return 0;
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
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 4055:  /* *p iwmmxt_wmerge */
    case 4007:  /* *p iwmmxt_wabsdiffw */
    case 4006:  /* *p iwmmxt_wabsdiffh */
    case 4005:  /* *p iwmmxt_wabsdiffb */
    case 4004:  /* *p iwmmxt_wabsv8qi3 */
    case 4003:  /* *p iwmmxt_wabsv4hi3 */
    case 4002:  /* *p iwmmxt_wabsv2si3 */
    case 3997:  /* *p iwmmxt_walignr3 */
    case 3996:  /* *p iwmmxt_walignr2 */
    case 3995:  /* *p iwmmxt_walignr1 */
    case 3994:  /* *p iwmmxt_walignr0 */
    case 3993:  /* *p iwmmxt_walignr */
    case 3992:  /* *p iwmmxt_waligni */
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
    case 3902:  /* *p iwmmxt_tinsrw */
    case 3901:  /* *p iwmmxt_tinsrh */
    case 3900:  /* *p iwmmxt_tinsrb */
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
    case 3850:  /* *p tbcstv2si */
    case 3849:  /* *p tbcstv4hi */
    case 3848:  /* *p tbcstv8qi */
    case 632:  /* iwmmxt_wmerge */
    case 584:  /* iwmmxt_wabsdiffw */
    case 583:  /* iwmmxt_wabsdiffh */
    case 582:  /* iwmmxt_wabsdiffb */
    case 581:  /* iwmmxt_wabsv8qi3 */
    case 580:  /* iwmmxt_wabsv4hi3 */
    case 579:  /* iwmmxt_wabsv2si3 */
    case 574:  /* iwmmxt_walignr3 */
    case 573:  /* iwmmxt_walignr2 */
    case 572:  /* iwmmxt_walignr1 */
    case 571:  /* iwmmxt_walignr0 */
    case 570:  /* iwmmxt_walignr */
    case 569:  /* iwmmxt_waligni */
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
    case 479:  /* iwmmxt_tinsrw */
    case 478:  /* iwmmxt_tinsrh */
    case 477:  /* iwmmxt_tinsrb */
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
    case 424:  /* tbcstv2si */
    case 423:  /* tbcstv4hi */
    case 422:  /* tbcstv8qi */
      if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) || ((! (((((
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
(TUNE_CORTEXR5))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
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
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 0;
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
	  return 1;
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
	  return 1;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c1 (insn) == WMMXT_TRANSFER_C1_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c2 (insn) == WMMXT_TRANSFER_C2_YES))
        {
	  return 5;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c2 (insn) == WMMXT_ALU_C2_YES))
        {
	  return 2;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c3 (insn) == WMMXT_ALU_C3_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c3 (insn) == WMMXT_TRANSFER_C3_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c1 (insn) == WMMXT_MULT_C1_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c2 (insn) == WMMXT_MULT_C2_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WSTR))
        {
	  return 0;
        }
      else if (((
#line 56 "../../gcc-8.1.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WLDR))
        {
	  return 5;
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
	  return 5;
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
	  return 7;
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
	  return 9;
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
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 3;
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
	  return 4;
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
	  return 5;
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
	  return 1;
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
	  return 3;
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
	  return 2;
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
	  return 2;
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
	  return 3;
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
	  return 4;
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
	  return 32 /* 0x20 */;
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
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 1;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 3;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 3;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 4;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 4;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 3;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
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
	  return 5;
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
	  return 5;
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
	  return 5;
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
	  return 6;
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
	  return 18 /* 0x12 */;
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
	  return 32 /* 0x20 */;
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
	  return 4;
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
	  return 5;
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
	  return 4;
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
	  return 1;
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
	  return 1;
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
	  return 1;
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
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 4;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))
        {
	  return 5;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLALS)))
        {
	  return 5;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUADX) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLADX) || (cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX) || (cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX)))
        {
	  return 3;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 4;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 4;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_4))
        {
	  return 3;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE))
        {
	  return 4;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 4;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 3;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))
        {
	  return 4;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 4;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 1;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ADR) || (cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_EXTEND)) || (((cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG)) && (! (get_attr_length (insn) == 8)))))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MUL))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MLA))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMACD))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFMAD))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (get_attr_is_neon_type (insn) == IS_NEON_TYPE_YES) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_OTHER))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMMUL)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMMLA) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMAAL) || (cached_type == TYPE_SMLALXY)))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRC))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRRC))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_1))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_2))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_3))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_4))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_5))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VMOV))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_S_Q)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_STR))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8) || (cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMULXY))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLAXY))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRC))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRRC))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_1))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_2))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_3))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_4))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_5))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VMOV))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_STR))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TO_GP))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_C))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_F))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_C))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_D))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_E))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_F))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_G))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_H))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_REV) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MULS) || (cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMMLA)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAD) || (cached_type == TYPE_SMLADX) || (cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUADX) || (cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAL) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMAAL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLSLD)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMULLS)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TO_GP))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_C))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_D))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_F))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_G))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_H))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ADR) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MOV_SHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_ROTATE_IMM))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_ACQ)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_REL)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCSEL) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD) || (cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FFMAD)))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F) || (cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I) || (cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_64)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_LOTS)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_64)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_LOTS)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU_Q))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL_Q))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S_Q))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D_Q))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESMC))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_FAST))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA256_FAST))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_BFM) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_REDUCTIONS_Q))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS_Q))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TO_GP))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_C))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_F))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_COMPLEX))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_SQRT_S)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_SQRT_D)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
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
	  return 2;
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
	  return 2;
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
	  return 2;
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
	  return 2;
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
	  return 4;
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
	  return 3;
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
	  return 4;
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
	  return 3;
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
	  return 3;
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
	  return 4;
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
	  return 9;
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
	  return 10 /* 0xa */;
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
	  return 0;
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
	  return 32 /* 0x20 */;
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
	  return 3;
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
	  return 4;
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
	  return 0;
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
	  return 0;
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
	  return 2;
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
	  return 2;
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
	  return 3;
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
	  return 6;
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
	  return 17 /* 0x11 */;
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
	  return 2;
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
	  return 1;
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
	  return 2;
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
	  return 3;
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
	  return 20 /* 0x14 */;
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
	  return 10 /* 0xa */;
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
	  return 97 /* 0x61 */;
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
	  return 2;
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
	  return 2;
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
	  return 8;
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
	  return 8;
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
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MULS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULL)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_EXTEND))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_MLAS)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_F_FLAG)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCRR) || (cached_type == TYPE_F_MRRC)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)) || ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4)) && (
#line 60 "../../gcc-8.1.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn))))
        {
	  return 1;
        }
      else if (((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4)) && (! (
#line 60 "../../gcc-8.1.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn)))))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_12))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_SIMPLE))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_MULTIPLY) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_MLA) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SAT_MLA_LONG)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_BASIC) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_BASIC)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_COMPLEX)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_UNARY))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ADD))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ABD))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_COMPARE))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_MINMAX))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_ADD))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ROUND))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_CVT))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MLA))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATE))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATEX))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_STEP))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITINS))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TBL))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FROM_GP))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TO_GP))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD) || (cached_type == TYPE_NEON_LDP)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LDP_Q))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_1) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ALL)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_2))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_3))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_4))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ONE))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_2))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ONE))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ALL))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_3))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ONE))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ALL))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_4))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ONE))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ALL))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED) || (cached_type == TYPE_NEON_STP)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_STP_Q))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_1))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_2))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_3))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_4))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_ONE))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE2_2) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE2_ONE)))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE3_3) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE3_ONE)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE4_4) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE4_ONE)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCSEL))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_XOR) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_B_LONG) || (cached_type == TYPE_NEON_MUL_H_LONG) || (cached_type == TYPE_NEON_MUL_S_LONG)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_D_LONG))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRC))
        {
	  return 2;
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
	  return 4;
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
	  return 8;
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
	  return 9;
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
	  return 19 /* 0x13 */;
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
	  return 33 /* 0x21 */;
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
	  return 4;
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
	  return 4;
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
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && ((cached_shift = get_attr_shift (insn)) == 1))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET) && ((cached_shift = get_attr_shift (insn)) == 1))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_4))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_8))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 9;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NO_INSN))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) || (cached_type == TYPE_F_LOADS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORED) || (cached_type == TYPE_F_STORES)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MCR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MRC))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_16))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE_16))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)) && (get_attr_fp (insn) == FP_YES))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MRS)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CSEL))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_SHIFT_REG))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_REV))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALUS_IMM) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCCMPS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCSEL))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BFX))
        {
	  return 1;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BFM))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_RINTD) || (cached_type == TYPE_F_RINTS)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMULS)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FSQRTD))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHD) || (cached_type == TYPE_FFARITHS)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MINMAXD) || (cached_type == TYPE_F_MINMAXS)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_DUP_Q)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_LOGIC_Q) || (cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 7;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q) || (cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_IMM) || (cached_type == TYPE_NEON_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SHIFT_REG) || (cached_type == TYPE_NEON_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_LONG) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG) || (cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ADD) || (cached_type == TYPE_NEON_ADD_Q) || (cached_type == TYPE_NEON_SUB) || (cached_type == TYPE_NEON_SUB_Q) || (cached_type == TYPE_NEON_NEG) || (cached_type == TYPE_NEON_NEG_Q) || (cached_type == TYPE_NEON_ABS) || (cached_type == TYPE_NEON_ABS_Q) || (cached_type == TYPE_NEON_ABD_Q) || (cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q) || (cached_type == TYPE_NEON_REDUC_ADD) || (cached_type == TYPE_NEON_REDUC_ADD_Q) || (cached_type == TYPE_NEON_ADD_HALVE) || (cached_type == TYPE_NEON_ADD_HALVE_Q) || (cached_type == TYPE_NEON_SUB_HALVE) || (cached_type == TYPE_NEON_SUB_HALVE_Q) || (cached_type == TYPE_NEON_QADD) || (cached_type == TYPE_NEON_QADD_Q) || (cached_type == TYPE_NEON_COMPARE) || (cached_type == TYPE_NEON_COMPARE_Q) || (cached_type == TYPE_NEON_COMPARE_ZERO) || (cached_type == TYPE_NEON_COMPARE_ZERO_Q) || (cached_type == TYPE_NEON_TST) || (cached_type == TYPE_NEON_TST_Q) || (cached_type == TYPE_NEON_MINMAX) || (cached_type == TYPE_NEON_MINMAX_Q)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_B) || (cached_type == TYPE_NEON_MUL_B_Q) || (cached_type == TYPE_NEON_MUL_H) || (cached_type == TYPE_NEON_MUL_H_Q) || (cached_type == TYPE_NEON_MUL_S) || (cached_type == TYPE_NEON_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B) || (cached_type == TYPE_NEON_MLA_B_Q) || (cached_type == TYPE_NEON_MLA_H) || (cached_type == TYPE_NEON_MLA_H_Q) || (cached_type == TYPE_NEON_MLA_S) || (cached_type == TYPE_NEON_MLA_S_Q) || (cached_type == TYPE_NEON_MLA_H_SCALAR) || (cached_type == TYPE_NEON_MLA_H_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_S_SCALAR) || (cached_type == TYPE_NEON_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B_LONG) || (cached_type == TYPE_NEON_MLA_H_LONG) || (cached_type == TYPE_NEON_MLA_S_LONG) || (cached_type == TYPE_NEON_FP_MUL_S) || (cached_type == TYPE_NEON_FP_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_D) || (cached_type == TYPE_NEON_FP_MUL_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S) || (cached_type == TYPE_NEON_FP_MLA_S_Q) || (cached_type == TYPE_NEON_FP_MLA_D) || (cached_type == TYPE_NEON_FP_MLA_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MLA_D_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_B) || (cached_type == TYPE_NEON_SAT_MUL_B_Q) || (cached_type == TYPE_NEON_SAT_MUL_H) || (cached_type == TYPE_NEON_SAT_MUL_H_Q) || (cached_type == TYPE_NEON_SAT_MUL_S) || (cached_type == TYPE_NEON_SAT_MUL_S_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_B_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_SCALAR_LONG)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ABD_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_NEG_S) || (cached_type == TYPE_NEON_FP_NEG_S_Q) || (cached_type == TYPE_NEON_FP_NEG_D) || (cached_type == TYPE_NEON_FP_NEG_D_Q) || (cached_type == TYPE_NEON_FP_ABS_S) || (cached_type == TYPE_NEON_FP_ABS_S_Q) || (cached_type == TYPE_NEON_FP_ABS_D) || (cached_type == TYPE_NEON_FP_ABS_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ROUND_S) || (cached_type == TYPE_NEON_FP_ROUND_S_Q) || (cached_type == TYPE_NEON_FP_ROUND_D) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_INT_TO_FP_S) || (cached_type == TYPE_NEON_INT_TO_FP_S_Q) || (cached_type == TYPE_NEON_INT_TO_FP_D) || (cached_type == TYPE_NEON_INT_TO_FP_D_Q) || (cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || (cached_type == TYPE_NEON_FP_CVT_NARROW_S_Q) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CLS_Q)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q) || (cached_type == TYPE_NEON_STP) || (cached_type == TYPE_NEON_STP_Q)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SUB_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_SHIFT_ACC_Q)))
        {
	  return 6;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_COMPARE_S) || (cached_type == TYPE_NEON_FP_COMPARE_S_Q) || (cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_TBL1_Q)))
        {
	  return 4;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL2) || (cached_type == TYPE_NEON_TBL2_Q)))
        {
	  return 8;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_PERMUTE_Q)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_ALL_LANES))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPE_S) || (cached_type == TYPE_NEON_FP_RECPE_S_Q) || (cached_type == TYPE_NEON_FP_RECPE_D) || (cached_type == TYPE_NEON_FP_RECPE_D_Q) || (cached_type == TYPE_NEON_FP_RECPX_S) || (cached_type == TYPE_NEON_FP_RECPX_S_Q) || (cached_type == TYPE_NEON_FP_RECPX_D) || (cached_type == TYPE_NEON_FP_RECPX_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S) || (cached_type == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RECPS_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 62 "../../gcc-8.1.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_D_LONG) || (cached_type == TYPE_CRYPTO_PMULL)))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    }
}


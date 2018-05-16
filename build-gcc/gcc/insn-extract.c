/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 4244:  /* *p arm_ssatsihi_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4189:  /* *p arm_store_release_exclusivesi */
    case 4188:  /* *p arm_store_release_exclusivehi */
    case 4187:  /* *p arm_store_release_exclusiveqi */
    case 4186:  /* *p arm_store_release_exclusivedi */
    case 4185:  /* *p arm_store_exclusivedi */
    case 4184:  /* *p arm_store_exclusivesi */
    case 4183:  /* *p arm_store_exclusivehi */
    case 4182:  /* *p arm_store_exclusiveqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4158:  /* *p *thumb2_mulsi_short */
    case 4157:  /* *p *thumb2_subsi_short */
    case 4156:  /* *p *thumb2_addsi_short */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4155:  /* *p *thumb2_movsi_shortim */
    case 4154:  /* *p *thumb2_movhi_shortim */
    case 4153:  /* *p *thumb2_movqi_shortim */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4152:  /* *p *thumb2_shiftsi3_short */
    case 4151:  /* *p *thumb2_alusi3_short */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4135:  /* *p *combine_vcvtf2i */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4110:  /* *p *fnmadddf4 */
    case 4109:  /* *p *fnmaddsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4108:  /* *p *fnmsubdf4 */
    case 4107:  /* *p *fnmsubsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4106:  /* *p *fmsubdf4 */
    case 4105:  /* *p *fmsubsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4102:  /* *p *muldf3negdfsubdf_vfp */
    case 4101:  /* *p *mulsf3negsfsubsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4100:  /* *p *fmuldf3negdfadddf_vfp */
    case 4099:  /* *p *mulsf3negsfaddsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4067:  /* *p iwmmxt_textrcv8qi3 */
    case 4066:  /* *p iwmmxt_textrcv4hi3 */
    case 4065:  /* *p iwmmxt_textrcv2si3 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0, 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4055:  /* *p iwmmxt_wmerge */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 4046:  /* *p iwmmxt_wmiattn */
    case 4045:  /* *p iwmmxt_wmiatbn */
    case 4044:  /* *p iwmmxt_wmiabtn */
    case 4043:  /* *p iwmmxt_wmiabbn */
    case 4042:  /* *p iwmmxt_wmiatt */
    case 4041:  /* *p iwmmxt_wmiatb */
    case 4040:  /* *p iwmmxt_wmiabt */
    case 4039:  /* *p iwmmxt_wmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 4038:  /* *p iwmmxt_wqmiattn */
    case 4037:  /* *p iwmmxt_wqmiatbn */
    case 4036:  /* *p iwmmxt_wqmiabtn */
    case 4035:  /* *p iwmmxt_wqmiabbn */
    case 4034:  /* *p iwmmxt_wqmiatt */
    case 4033:  /* *p iwmmxt_wqmiatb */
    case 4032:  /* *p iwmmxt_wqmiabt */
    case 4031:  /* *p iwmmxt_wqmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4030:  /* *p iwmmxt_waddbhusl */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4029:  /* *p iwmmxt_waddbhusm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4013:  /* *p iwmmxt_avg4r */
    case 4012:  /* *p iwmmxt_avg4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4011:  /* *p addcv2si3 */
    case 4010:  /* *p addcv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4009:  /* *p iwmmxt_wsubaddhx */
    case 4008:  /* *p iwmmxt_waddsubhx */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3997:  /* *p iwmmxt_walignr3 */
    case 3996:  /* *p iwmmxt_walignr2 */
    case 3995:  /* *p iwmmxt_walignr1 */
    case 3994:  /* *p iwmmxt_walignr0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3993:  /* *p iwmmxt_walignr */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3992:  /* *p iwmmxt_waligni */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3985:  /* *p iwmmxt_tmiatt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3984:  /* *p iwmmxt_tmiabt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3983:  /* *p iwmmxt_tmiatb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4054:  /* *p iwmmxt_wmiawttn */
    case 4053:  /* *p iwmmxt_wmiawtbn */
    case 4052:  /* *p iwmmxt_wmiawbtn */
    case 4051:  /* *p iwmmxt_wmiawbbn */
    case 4050:  /* *p iwmmxt_wmiawtt */
    case 4049:  /* *p iwmmxt_wmiawtb */
    case 4048:  /* *p iwmmxt_wmiawbt */
    case 4047:  /* *p iwmmxt_wmiawbb */
    case 3982:  /* *p iwmmxt_tmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3981:  /* *p iwmmxt_tmiaph */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 3980:  /* *p iwmmxt_tmia */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4017:  /* *p iwmmxt_wmaddun */
    case 4016:  /* *p iwmmxt_wmaddsn */
    case 4015:  /* *p iwmmxt_wmaddux */
    case 4014:  /* *p iwmmxt_wmaddsx */
    case 3979:  /* *p iwmmxt_wmaddu */
    case 3978:  /* *p iwmmxt_wmadds */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4120:  /* *p fixuns_truncdfsi2 */
    case 4119:  /* *p fixuns_truncsfsi2 */
    case 4118:  /* *p *truncsidf2_vfp */
    case 4117:  /* *p *truncsisf2_vfp */
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
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3907:  /* *p iwmmxt_textrmw */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3906:  /* *p iwmmxt_textrmsh */
    case 3905:  /* *p iwmmxt_textrmuh */
    case 3904:  /* *p iwmmxt_textrmsb */
    case 3903:  /* *p iwmmxt_textrmub */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3902:  /* *p iwmmxt_tinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3901:  /* *p iwmmxt_tinsrh */
    case 3900:  /* *p iwmmxt_tinsrb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4023:  /* *p iwmmxt_wmulwumr */
    case 4022:  /* *p iwmmxt_wmulwsmr */
    case 4021:  /* *p iwmmxt_wmulumr */
    case 4020:  /* *p iwmmxt_wmulsmr */
    case 3897:  /* *p iwmmxt_uavgrndv4hi3 */
    case 3896:  /* *p iwmmxt_uavgrndv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4172:  /* *p atomic_storesi */
    case 4171:  /* *p atomic_storehi */
    case 4170:  /* *p atomic_storeqi */
    case 4169:  /* *p atomic_loadsi */
    case 4168:  /* *p atomic_loadhi */
    case 4167:  /* *p atomic_loadqi */
    case 4028:  /* *p iwmmxt_wqmulwmr */
    case 4027:  /* *p iwmmxt_wqmulmr */
    case 4026:  /* *p iwmmxt_wqmulwm */
    case 4025:  /* *p iwmmxt_wqmulm */
    case 4001:  /* *p iwmmxt_wsadhz */
    case 4000:  /* *p iwmmxt_wsadbz */
    case 3917:  /* *p gtv2si3 */
    case 3916:  /* *p gtv4hi3 */
    case 3915:  /* *p gtv8qi3 */
    case 3914:  /* *p gtuv2si3 */
    case 3913:  /* *p gtuv4hi3 */
    case 3912:  /* *p gtuv8qi3 */
    case 3911:  /* *p eqv2si3 */
    case 3910:  /* *p eqv4hi3 */
    case 3909:  /* *p eqv8qi3 */
    case 3908:  /* *p iwmmxt_wshufh */
    case 3891:  /* *p iwmmxt_wmacuz */
    case 3889:  /* *p iwmmxt_wmacsz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3999:  /* *p iwmmxt_wsadh */
    case 3998:  /* *p iwmmxt_wsadb */
    case 3890:  /* *p iwmmxt_wmacu */
    case 3888:  /* *p iwmmxt_wmacs */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4019:  /* *p iwmmxt_wmulwum */
    case 4018:  /* *p iwmmxt_wmulwsm */
    case 4007:  /* *p iwmmxt_wabsdiffw */
    case 4006:  /* *p iwmmxt_wabsdiffh */
    case 4005:  /* *p iwmmxt_wabsdiffb */
    case 3899:  /* *p iwmmxt_uavgv4hi3 */
    case 3898:  /* *p iwmmxt_uavgv8qi3 */
    case 3887:  /* *p umulv4hi3_highpart */
    case 3886:  /* *p smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3854:  /* *p iwmmxt_nanddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3847:  /* *p *load_multiple */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3842:  /* *p *stm2_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3841:  /* *p *stm2_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3840:  /* *p *ldm2_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3839:  /* *p *ldm2_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3846:  /* *p *stm2_db_update */
    case 3838:  /* *p *stm2_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3845:  /* *p *stm2_db */
    case 3837:  /* *p *stm2_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3844:  /* *p *ldm2_db_update */
    case 3836:  /* *p *ldm2_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3843:  /* *p *ldm2_db */
    case 3835:  /* *p *ldm2_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3834:  /* *p *stm2_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3833:  /* *p *stm2_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3832:  /* *p *ldm2_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3831:  /* *p *ldm2_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3826:  /* *p *stm3_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3825:  /* *p *stm3_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3824:  /* *p *ldm3_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3823:  /* *p *ldm3_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3830:  /* *p *stm3_db_update */
    case 3822:  /* *p *stm3_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3829:  /* *p *stm3_db */
    case 3821:  /* *p *stm3_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3828:  /* *p *ldm3_db_update */
    case 3820:  /* *p *ldm3_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3827:  /* *p *ldm3_db */
    case 3819:  /* *p *ldm3_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3818:  /* *p *stm3_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3817:  /* *p *stm3_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3816:  /* *p *ldm3_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3815:  /* *p *ldm3_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3810:  /* *p *stm4_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3809:  /* *p *stm4_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3808:  /* *p *ldm4_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3807:  /* *p *ldm4_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3814:  /* *p *stm4_db_update */
    case 3806:  /* *p *stm4_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3813:  /* *p *stm4_db */
    case 3805:  /* *p *stm4_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3812:  /* *p *ldm4_db_update */
    case 3804:  /* *p *ldm4_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3811:  /* *p *ldm4_db */
    case 3803:  /* *p *ldm4_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3802:  /* *p *stm4_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3801:  /* *p *stm4_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3800:  /* *p *ldm4_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3799:  /* *p *ldm4_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3798:  /* *p *thumb2_strd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3797:  /* *p *thumb2_strd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3796:  /* *p *thumb2_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3795:  /* *p *thumb2_ldrd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3794:  /* *p *thumb2_ldrd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3793:  /* *p *thumb2_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3791:  /* *p *arm_movtas_ze */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3787:  /* *p *ldr_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3786:  /* *p *pop_multiple_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3785:  /* *p *pop_multiple_with_writeback_and_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 3784:  /* *p *load_multiple_with_writeback */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 3783:  /* *p *arith_adjacentmem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3782:  /* *p *sub_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3781:  /* *p *and_shiftsi */
    case 3780:  /* *p *eor_shiftsi */
    case 3779:  /* *p *orr_shiftsi */
    case 3778:  /* *p *rsb_shiftsi */
    case 3777:  /* *p *add_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4098:  /* *p *muldf3subdf_vfp */
    case 4097:  /* *p *mulsf3subsf_vfp */
    case 4096:  /* *p *muldf3adddf_vfp */
    case 4095:  /* *p *mulsf3addsf_vfp */
    case 3776:  /* *p *and_multsi */
    case 3775:  /* *p *eor_multsi */
    case 3774:  /* *p *orr_multsi */
    case 3773:  /* *p *rsb_multsi */
    case 3772:  /* *p *add_multsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3771:  /* *p *load_indirect_jump */
    case 3770:  /* *p *arm_indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4145:  /* *p *thumb2_pop_single */
    case 3895:  /* *p iwmmxt_clrv2si */
    case 3894:  /* *p iwmmxt_clrv4hi */
    case 3893:  /* *p iwmmxt_clrv8qi */
    case 3892:  /* *p iwmmxt_clrdi */
    case 3790:  /* *p load_tp_hard */
    case 3769:  /* *p probe_stack */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4064:  /* *p iwmmxt_torvscv8qi3 */
    case 4063:  /* *p iwmmxt_torvscv4hi3 */
    case 4062:  /* *p iwmmxt_torvscv2si3 */
    case 4061:  /* *p iwmmxt_torcv8qi3 */
    case 4060:  /* *p iwmmxt_torcv4hi3 */
    case 4059:  /* *p iwmmxt_torcv2si3 */
    case 4058:  /* *p iwmmxt_tandcv8qi3 */
    case 4057:  /* *p iwmmxt_tandcv4hi3 */
    case 4056:  /* *p iwmmxt_tandcv2si3 */
    case 3768:  /* *p *arm_simple_return */
    case 3767:  /* *p *arm_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3765:  /* *p *arm_cmpsi_negshiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4130:  /* *p *cmpdf_trap_vfp */
    case 4129:  /* *p *cmpdf_vfp */
    case 4128:  /* *p *cmpsf_trap_vfp */
    case 4127:  /* *p *cmpsf_vfp */
    case 3764:  /* *p *arm_cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3758:  /* *p tls_load_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3757:  /* *p pic_add_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3766:  /* *p *arm_jump */
    case 3748:  /* *p *compareqi_eq0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4144:  /* *p *thumb2_neg_abssi2 */
    case 3733:  /* *p *arm_neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4160:  /* *p *thumb2_negsi2_short */
    case 4159:  /* *p *thumb2_one_cmplsi2_short */
    case 4143:  /* *p *thumb2_abssi2 */
    case 3732:  /* *p *arm_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4104:  /* *p fmadf4 */
    case 4103:  /* *p fmasf4 */
    case 3728:  /* *p extzv_t2 */
    case 3727:  /* *p *extv_reg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4177:  /* *p arm_load_acquire_exclusivehi */
    case 4176:  /* *p arm_load_acquire_exclusiveqi */
    case 4175:  /* *p arm_load_exclusivehi */
    case 4174:  /* *p arm_load_exclusiveqi */
    case 3724:  /* *p unaligned_loadhiu */
    case 3723:  /* *p unaligned_loadhis */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4181:  /* *p arm_load_acquire_exclusivedi */
    case 4180:  /* *p arm_load_exclusivedi */
    case 4179:  /* *p arm_load_acquire_exclusivesi */
    case 4178:  /* *p arm_load_exclusivesi */
    case 4173:  /* *p arm_atomic_loaddi2_ldrd */
    case 4141:  /* *p rintdf2 */
    case 4140:  /* *p nearbyintdf2 */
    case 4139:  /* *p btruncdf2 */
    case 4138:  /* *p rintsf2 */
    case 4137:  /* *p nearbyintsf2 */
    case 4136:  /* *p btruncsf2 */
    case 4004:  /* *p iwmmxt_wabsv8qi3 */
    case 4003:  /* *p iwmmxt_wabsv4hi3 */
    case 4002:  /* *p iwmmxt_wabsv2si3 */
    case 3991:  /* *p iwmmxt_waccw */
    case 3990:  /* *p iwmmxt_wacch */
    case 3989:  /* *p iwmmxt_waccb */
    case 3988:  /* *p iwmmxt_tmovmskw */
    case 3987:  /* *p iwmmxt_tmovmskh */
    case 3986:  /* *p iwmmxt_tmovmskb */
    case 3789:  /* *p rbitsi2 */
    case 3726:  /* *p unaligned_storehi */
    case 3725:  /* *p unaligned_storesi */
    case 3722:  /* *p unaligned_loadsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3721:  /* *p *not_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3720:  /* *p *arm_shiftsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3719:  /* *p *satsi_smax_shift */
    case 3718:  /* *p *satsi_smin_shift */
    case 3717:  /* *p *satsi_smax_shift */
    case 3716:  /* *p *satsi_smin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3715:  /* *p *satsi_smax */
    case 3714:  /* *p *satsi_smin */
    case 3713:  /* *p *satsi_smax */
    case 3712:  /* *p *satsi_smin */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4245:  /* *p arm_usatsihi */
    case 4150:  /* *p thumb2_zero_extendqisi2_v6 */
    case 4149:  /* *p *thumb2_zero_extendhisi2_v6 */
    case 4148:  /* *p *thumb2_extendqisi_v6 */
    case 4126:  /* *p *sqrtdf2_vfp */
    case 4125:  /* *p *sqrtsf2_vfp */
    case 4124:  /* *p floatunssidf2 */
    case 4123:  /* *p floatunssisf2 */
    case 4122:  /* *p *floatsidf2_vfp */
    case 4121:  /* *p *floatsisf2_vfp */
    case 4116:  /* *p truncsfhf2 */
    case 4115:  /* *p *extendhfdf2 */
    case 4114:  /* *p *truncdfhf2 */
    case 4113:  /* *p extendhfsf2 */
    case 4112:  /* *p *truncdfsf2_vfp */
    case 4111:  /* *p *extendsfdf2_vfp */
    case 4082:  /* *p *negdf2_vfp */
    case 4081:  /* *p *negsf2_vfp */
    case 4080:  /* *p *absdf2_vfp */
    case 4079:  /* *p *abssf2_vfp */
    case 3850:  /* *p tbcstv2si */
    case 3849:  /* *p tbcstv4hi */
    case 3848:  /* *p tbcstv8qi */
    case 3792:  /* *p *arm_rev */
    case 3788:  /* *p clzsi2 */
    case 3753:  /* *p *arm_extendqisi_v6 */
    case 3752:  /* *p *arm_extendqisi */
    case 3751:  /* *p *arm_extendqihi_insn */
    case 3750:  /* *p *arm_extendhisi2_v6 */
    case 3749:  /* *p *arm_extendhisi2 */
    case 3746:  /* *p *arm_zero_extendqisi2_v6 */
    case 3745:  /* *p *arm_zero_extendqisi2 */
    case 3743:  /* *p *arm_zero_extendhisi2_v6 */
    case 3742:  /* *p *arm_zero_extendhisi2 */
    case 3741:  /* *p extendsidi2 */
    case 3740:  /* *p extendhidi2 */
    case 3739:  /* *p extendqidi2 */
    case 3738:  /* *p zero_extendsidi2 */
    case 3737:  /* *p zero_extendhidi2 */
    case 3736:  /* *p zero_extendqidi2 */
    case 3735:  /* *p *arm_one_cmplsi2 */
    case 3734:  /* *p *one_cmpldi2_insn */
    case 3731:  /* *p *arm_negsi2 */
    case 3711:  /* *p *smin_0 */
    case 3710:  /* *p *smax_m1 */
    case 3709:  /* *p *smax_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3708:  /* *p *andsi_iorsi3_notsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3701:  /* *p andsi_not_shiftsi_si_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1);
      recog_data.dup_num[3] = 3;
      break;

    case 3700:  /* *p andsi_not_shiftsi_si_scc_no_reuse */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4166:  /* *p *orsi_not_shiftsi_si */
    case 4142:  /* *p *thumb_andsi_not_shiftsi_si */
    case 3699:  /* *p andsi_not_shiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4165:  /* *p *orsi_notsi_si */
    case 3706:  /* *p *xordi_sesidi_di */
    case 3705:  /* *p *xordi_zesidi_di */
    case 3703:  /* *p *iordi_sesidi_di */
    case 3702:  /* *p *iordi_zesidi_di */
    case 3698:  /* *p andsi_notsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4163:  /* *p *iordi_notdi_zesidi */
    case 3696:  /* *p *anddi_notdi_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4164:  /* *p *iordi_notsesidi_di */
    case 4162:  /* *p *iordi_notzesidi_di */
    case 3697:  /* *p *anddi_notsesidi_di */
    case 3695:  /* *p *anddi_notzesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4161:  /* *p *iordi_notdi_di */
    case 4134:  /* *p *combine_vcvt_f64_s32 */
    case 4133:  /* *p *combine_vcvt_f64_u32 */
    case 4132:  /* *p *combine_vcvt_f32_s32 */
    case 4131:  /* *p *combine_vcvt_f32_u32 */
    case 4093:  /* *p *muldf3negdf_vfp */
    case 4091:  /* *p *mulsf3negsf_vfp */
    case 3754:  /* *p *arm_extendqisi2addsi */
    case 3747:  /* *p *arm_zero_extendqisi2addsi */
    case 3744:  /* *p *arm_zero_extendhisi2addsi */
    case 3694:  /* *p *anddi_notdi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3693:  /* *p insv_t2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3692:  /* *p insv_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3691:  /* *p *zeroextractsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3689:  /* *p *maddhidi4tt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3688:  /* *p *maddhidi4tb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3687:  /* *p maddhidi4 */
    case 3686:  /* *p *maddhisi4tt */
    case 3685:  /* *p *maddhisi4tb */
    case 3684:  /* *p maddhisi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3679:  /* *p *umulsi3_highpart_v6 */
    case 3678:  /* *p *umulsi3_highpart_nov6 */
    case 3677:  /* *p *smulsi3_highpart_v6 */
    case 3676:  /* *p *smulsi3_highpart_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

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
    case 3683:  /* *p *mulhisi3tt */
    case 3682:  /* *p *mulhisi3bt */
    case 3681:  /* *p *mulhisi3tb */
    case 3680:  /* *p mulhisi3 */
    case 3673:  /* *p *umulsidi3_v6 */
    case 3672:  /* *p *umulsidi3_nov6 */
    case 3671:  /* *p *mulsidi3_v6 */
    case 3670:  /* *p *mulsidi3_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3675:  /* *p *umulsidi3adddi_v6 */
    case 3674:  /* *p *umulsidi3adddi */
    case 3669:  /* *p *mulsidi3adddi_v6 */
    case 3668:  /* *p *mulsidi3adddi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3667:  /* *p *mulsi3subsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3666:  /* *p *mulsi3addsi_v6 */
    case 3665:  /* *p *mulsi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3663:  /* *p *arm_mulsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3660:  /* *p *subsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3661:  /* *p *rsbsi3_carryin_shift */
    case 3658:  /* *p *addsi3_carryin_shift_geu */
    case 3657:  /* *p *addsi3_carryin_shift_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3656:  /* *p *addsi3_carryin_alt2_geu */
    case 3655:  /* *p *addsi3_carryin_alt2_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4094:  /* *p *negmuldf3_vfp */
    case 4092:  /* *p *negmulsf3_vfp */
    case 3659:  /* *p *subsi3_carryin */
    case 3654:  /* *p *addsi3_carryin_geu */
    case 3653:  /* *p *addsi3_carryin_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3652:  /* *p *compare_addsi2_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3651:  /* *p *compare_addsi2_op0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 3650:  /* *p *compare_negsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3649:  /* *p *addsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4243:  /* *p sssubsa3 */
    case 4242:  /* *p sssubsq3 */
    case 4241:  /* *p sssubha3 */
    case 4240:  /* *p sssubv2ha3 */
    case 4239:  /* *p sssubhq3 */
    case 4238:  /* *p sssubqq3 */
    case 4237:  /* *p sssubv2hq3 */
    case 4236:  /* *p sssubv4qq3 */
    case 4235:  /* *p ussubuha3 */
    case 4234:  /* *p ussubv2uha3 */
    case 4233:  /* *p ussubuhq3 */
    case 4232:  /* *p ussubuqq3 */
    case 4231:  /* *p ussubv2uhq3 */
    case 4230:  /* *p ussubv4uqq3 */
    case 4229:  /* *p subv2ha3 */
    case 4228:  /* *p subv2hq3 */
    case 4227:  /* *p subv4qq3 */
    case 4226:  /* *p subusa3 */
    case 4225:  /* *p subuha3 */
    case 4224:  /* *p subsa3 */
    case 4223:  /* *p subha3 */
    case 4222:  /* *p subusq3 */
    case 4221:  /* *p subuhq3 */
    case 4220:  /* *p subuqq3 */
    case 4219:  /* *p subsq3 */
    case 4218:  /* *p subhq3 */
    case 4217:  /* *p subqq3 */
    case 4216:  /* *p ssaddsa3 */
    case 4215:  /* *p ssaddsq3 */
    case 4214:  /* *p ssaddha3 */
    case 4213:  /* *p ssaddv2ha3 */
    case 4212:  /* *p ssaddhq3 */
    case 4211:  /* *p ssaddqq3 */
    case 4210:  /* *p ssaddv2hq3 */
    case 4209:  /* *p ssaddv4qq3 */
    case 4208:  /* *p usadduha3 */
    case 4207:  /* *p usaddv2uha3 */
    case 4206:  /* *p usadduhq3 */
    case 4205:  /* *p usadduqq3 */
    case 4204:  /* *p usaddv2uhq3 */
    case 4203:  /* *p usaddv4uqq3 */
    case 4202:  /* *p addv2ha3 */
    case 4201:  /* *p addv2hq3 */
    case 4200:  /* *p addv4qq3 */
    case 4199:  /* *p addusa3 */
    case 4198:  /* *p adduha3 */
    case 4197:  /* *p addsa3 */
    case 4196:  /* *p addha3 */
    case 4195:  /* *p addusq3 */
    case 4194:  /* *p adduhq3 */
    case 4193:  /* *p adduqq3 */
    case 4192:  /* *p addsq3 */
    case 4191:  /* *p addhq3 */
    case 4190:  /* *p addqq3 */
    case 4090:  /* *p *muldf3_vfp */
    case 4089:  /* *p *mulsf3_vfp */
    case 4088:  /* *p *divdf3_vfp */
    case 4087:  /* *p *divsf3_vfp */
    case 4086:  /* *p *subdf3_vfp */
    case 4085:  /* *p *subsf3_vfp */
    case 4084:  /* *p *adddf3_vfp */
    case 4083:  /* *p *addsf3_vfp */
    case 4024:  /* *p iwmmxt_wmulwl */
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
    case 3885:  /* *p *mulv4hi3_iwmmxt */
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
    case 3866:  /* *p *xorv8qi3_iwmmxt */
    case 3865:  /* *p *xorv4hi3_iwmmxt */
    case 3864:  /* *p *xorv2si3_iwmmxt */
    case 3863:  /* *p *iorv8qi3_iwmmxt */
    case 3862:  /* *p *iorv4hi3_iwmmxt */
    case 3861:  /* *p *iorv2si3_iwmmxt */
    case 3860:  /* *p *andv8qi3_iwmmxt */
    case 3859:  /* *p *andv4hi3_iwmmxt */
    case 3858:  /* *p *andv2si3_iwmmxt */
    case 3853:  /* *p iwmmxt_anddi3 */
    case 3852:  /* *p iwmmxt_xordi3 */
    case 3851:  /* *p iwmmxt_iordi3 */
    case 3755:  /* *p *arm_movt */
    case 3730:  /* *p udivsi3 */
    case 3729:  /* *p divsi3 */
    case 3707:  /* *p *arm_xorsi3 */
    case 3704:  /* *p *iorsi3_insn */
    case 3690:  /* *p *arm_andsi3_insn */
    case 3664:  /* *p *arm_mulsi3_v6 */
    case 3662:  /* *p *arm_subsi3_insn */
    case 3648:  /* *p *arm_addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2758:  /* arm_ssatsihi_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 2757:  /* usmulusa3 */
    case 2756:  /* ssmulsa3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 2701:  /* arm_store_release_exclusivesi */
    case 2700:  /* arm_store_release_exclusivehi */
    case 2699:  /* arm_store_release_exclusiveqi */
    case 2698:  /* arm_store_release_exclusivedi */
    case 2697:  /* arm_store_exclusivedi */
    case 2696:  /* arm_store_exclusivesi */
    case 2695:  /* arm_store_exclusivehi */
    case 2694:  /* arm_store_exclusiveqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      break;

    case 2685:  /* atomic_nand_fetchdi */
    case 2684:  /* atomic_nand_fetchsi */
    case 2683:  /* atomic_nand_fetchhi */
    case 2682:  /* atomic_nand_fetchqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 2661:  /* atomic_fetch_nanddi */
    case 2660:  /* atomic_fetch_nandsi */
    case 2659:  /* atomic_fetch_nandhi */
    case 2658:  /* atomic_fetch_nandqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2637:  /* atomic_nanddi */
    case 2636:  /* atomic_nandsi */
    case 2635:  /* atomic_nandhi */
    case 2634:  /* atomic_nandqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2613:  /* atomic_exchangedi */
    case 2612:  /* atomic_exchangesi */
    case 2611:  /* atomic_exchangehi */
    case 2610:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2609:  /* atomic_compare_and_swapt1di_1 */
    case 2608:  /* atomic_compare_and_swapt1si_1 */
    case 2607:  /* atomic_compare_and_swap32di_1 */
    case 2606:  /* atomic_compare_and_swap32si_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 2605:  /* atomic_compare_and_swapt1hi_1 */
    case 2604:  /* atomic_compare_and_swapt1qi_1 */
    case 2603:  /* atomic_compare_and_swap32hi_1 */
    case 2602:  /* atomic_compare_and_swap32qi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 2594:  /* *memory_barrier */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2593:  /* crypto_sha1p */
    case 2592:  /* crypto_sha1m */
    case 2591:  /* crypto_sha1c */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      break;

    case 2589:  /* crypto_sha1h */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1), 0, 0));
      break;

    case 2578:  /* neon_vabdv4sf_3 */
    case 2577:  /* neon_vabdv2sf_3 */
    case 2576:  /* neon_vabdv8hf_3 */
    case 2575:  /* neon_vabdv4hf_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 2546:  /* neon_vec_umult_hi_v4si */
    case 2545:  /* neon_vec_smult_hi_v4si */
    case 2544:  /* neon_vec_umult_hi_v8hi */
    case 2543:  /* neon_vec_smult_hi_v8hi */
    case 2542:  /* neon_vec_umult_hi_v16qi */
    case 2541:  /* neon_vec_smult_hi_v16qi */
    case 2540:  /* neon_vec_umult_lo_v4si */
    case 2539:  /* neon_vec_smult_lo_v4si */
    case 2538:  /* neon_vec_umult_lo_v8hi */
    case 2537:  /* neon_vec_smult_lo_v8hi */
    case 2536:  /* neon_vec_umult_lo_v16qi */
    case 2535:  /* neon_vec_smult_lo_v16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 2305:  /* *neon_vuzpv4hf_insn */
    case 2304:  /* *neon_vuzpv8hf_insn */
    case 2303:  /* *neon_vuzpv4sf_insn */
    case 2302:  /* *neon_vuzpv2sf_insn */
    case 2301:  /* *neon_vuzpv4si_insn */
    case 2300:  /* *neon_vuzpv2si_insn */
    case 2299:  /* *neon_vuzpv8hi_insn */
    case 2298:  /* *neon_vuzpv4hi_insn */
    case 2297:  /* *neon_vuzpv16qi_insn */
    case 2296:  /* *neon_vuzpv8qi_insn */
    case 2295:  /* *neon_vzipv4hf_insn */
    case 2294:  /* *neon_vzipv8hf_insn */
    case 2293:  /* *neon_vzipv4sf_insn */
    case 2292:  /* *neon_vzipv2sf_insn */
    case 2291:  /* *neon_vzipv4si_insn */
    case 2290:  /* *neon_vzipv2si_insn */
    case 2289:  /* *neon_vzipv8hi_insn */
    case 2288:  /* *neon_vzipv4hi_insn */
    case 2287:  /* *neon_vzipv16qi_insn */
    case 2286:  /* *neon_vzipv8qi_insn */
    case 2285:  /* *neon_vtrnv4hf_insn */
    case 2284:  /* *neon_vtrnv8hf_insn */
    case 2283:  /* *neon_vtrnv4sf_insn */
    case 2282:  /* *neon_vtrnv2sf_insn */
    case 2281:  /* *neon_vtrnv4si_insn */
    case 2280:  /* *neon_vtrnv2si_insn */
    case 2279:  /* *neon_vtrnv8hi_insn */
    case 2278:  /* *neon_vtrnv4hi_insn */
    case 2277:  /* *neon_vtrnv16qi_insn */
    case 2276:  /* *neon_vtrnv8qi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2017:  /* neon_vqdmlsl_lanev2si */
    case 2016:  /* neon_vqdmlsl_lanev4hi */
    case 2015:  /* neon_vmlslu_lanev2si */
    case 2014:  /* neon_vmlsls_lanev2si */
    case 2013:  /* neon_vmlslu_lanev4hi */
    case 2012:  /* neon_vmlsls_lanev4hi */
    case 2011:  /* neon_vmls_lanev4sf */
    case 2010:  /* neon_vmls_lanev4si */
    case 2009:  /* neon_vmls_lanev8hi */
    case 2008:  /* neon_vmls_lanev2sf */
    case 2007:  /* neon_vmls_lanev2si */
    case 2006:  /* neon_vmls_lanev4hi */
    case 2005:  /* neon_vqdmlal_lanev2si */
    case 2004:  /* neon_vqdmlal_lanev4hi */
    case 2003:  /* neon_vmlalu_lanev2si */
    case 2002:  /* neon_vmlals_lanev2si */
    case 2001:  /* neon_vmlalu_lanev4hi */
    case 2000:  /* neon_vmlals_lanev4hi */
    case 1999:  /* neon_vmla_lanev4sf */
    case 1998:  /* neon_vmla_lanev4si */
    case 1997:  /* neon_vmla_lanev8hi */
    case 1996:  /* neon_vmla_lanev2sf */
    case 1995:  /* neon_vmla_lanev2si */
    case 1994:  /* neon_vmla_lanev4hi */
    case 1993:  /* neon_vqrdmlsh_lanev2si */
    case 1992:  /* neon_vqrdmlah_lanev2si */
    case 1991:  /* neon_vqrdmlsh_lanev4hi */
    case 1990:  /* neon_vqrdmlah_lanev4hi */
    case 1989:  /* neon_vqrdmlsh_lanev4si */
    case 1988:  /* neon_vqrdmlah_lanev4si */
    case 1987:  /* neon_vqrdmlsh_lanev8hi */
    case 1986:  /* neon_vqrdmlah_lanev8hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 1881:  /* *neon_vswpv2di */
    case 1880:  /* *neon_vswpdi */
    case 1879:  /* *neon_vswpv4sf */
    case 1878:  /* *neon_vswpv2sf */
    case 1877:  /* *neon_vswpv8hf */
    case 1876:  /* *neon_vswpv4hf */
    case 1875:  /* *neon_vswpv4si */
    case 1874:  /* *neon_vswpv2si */
    case 1873:  /* *neon_vswpv8hi */
    case 1872:  /* *neon_vswpv4hi */
    case 1871:  /* *neon_vswpv16qi */
    case 1870:  /* *neon_vswpv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 1800:  /* neon_udot_lanev16qi */
    case 1799:  /* neon_sdot_lanev16qi */
    case 1798:  /* neon_udot_lanev8qi */
    case 1797:  /* neon_sdot_lanev8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      break;

    case 1796:  /* neon_udotv16qi */
    case 1795:  /* neon_sdotv16qi */
    case 1794:  /* neon_udotv8qi */
    case 1793:  /* neon_sdotv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1687:  /* neon_vabaluv2si */
    case 1686:  /* neon_vabalsv2si */
    case 1685:  /* neon_vabaluv4hi */
    case 1684:  /* neon_vabalsv4hi */
    case 1683:  /* neon_vabaluv8qi */
    case 1682:  /* neon_vabalsv8qi */
    case 1681:  /* neon_vabauv4si */
    case 1680:  /* neon_vabasv4si */
    case 1679:  /* neon_vabauv2si */
    case 1678:  /* neon_vabasv2si */
    case 1677:  /* neon_vabauv8hi */
    case 1676:  /* neon_vabasv8hi */
    case 1675:  /* neon_vabauv4hi */
    case 1674:  /* neon_vabasv4hi */
    case 1673:  /* neon_vabauv16qi */
    case 1672:  /* neon_vabasv16qi */
    case 1671:  /* neon_vabauv8qi */
    case 1670:  /* neon_vabasv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1633:  /* neon_vcalev4hf_fp16insn */
    case 1632:  /* neon_vcaltv4hf_fp16insn */
    case 1631:  /* neon_vcagev4hf_fp16insn */
    case 1630:  /* neon_vcagtv4hf_fp16insn */
    case 1629:  /* neon_vcalev8hf_fp16insn */
    case 1628:  /* neon_vcaltv8hf_fp16insn */
    case 1627:  /* neon_vcagev8hf_fp16insn */
    case 1626:  /* neon_vcagtv8hf_fp16insn */
    case 1621:  /* neon_vcagev4sf_insn */
    case 1620:  /* neon_vcagtv4sf_insn */
    case 1619:  /* neon_vcagev2sf_insn */
    case 1618:  /* neon_vcagtv2sf_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 1428:  /* vfmsl_lane_highv4sf_intrinsic */
    case 1427:  /* vfmsl_lane_highv2sf_intrinsic */
    case 1426:  /* vfmsl_lane_highv4hfv4sf_intrinsic */
    case 1425:  /* vfmsl_lane_highv8hfv2sf_intrinsic */
    case 1424:  /* vfmsl_lane_lowv4hfv4sf_intrinsic */
    case 1423:  /* vfmsl_lane_lowv8hfv2sf_intrinsic */
    case 1422:  /* vfmsl_lane_lowv4sf_intrinsic */
    case 1421:  /* vfmsl_lane_lowv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      break;

    case 1420:  /* vfmal_lane_highv4sf_intrinsic */
    case 1419:  /* vfmal_lane_highv2sf_intrinsic */
    case 1418:  /* vfmal_lane_highv4hfv4sf_intrinsic */
    case 1417:  /* vfmal_lane_highv8hfv2sf_intrinsic */
    case 1416:  /* vfmal_lane_lowv4hfv4sf_intrinsic */
    case 1415:  /* vfmal_lane_lowv8hfv2sf_intrinsic */
    case 1414:  /* vfmal_lane_lowv4sf_intrinsic */
    case 1413:  /* vfmal_lane_lowv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      break;

    case 1412:  /* vfmsl_lowv4sf_intrinsic */
    case 1411:  /* vfmsl_lowv2sf_intrinsic */
    case 1408:  /* vfmsl_highv4sf_intrinsic */
    case 1407:  /* vfmsl_highv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 1410:  /* vfmal_highv4sf_intrinsic */
    case 1409:  /* vfmal_highv2sf_intrinsic */
    case 1406:  /* vfmal_lowv4sf_intrinsic */
    case 1405:  /* vfmal_lowv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 1300:  /* quad_halves_umaxv16qi */
    case 1299:  /* quad_halves_uminv16qi */
    case 1298:  /* quad_halves_smaxv16qi */
    case 1297:  /* quad_halves_sminv16qi */
    case 1296:  /* quad_halves_plusv16qi */
    case 1295:  /* quad_halves_umaxv8hi */
    case 1294:  /* quad_halves_uminv8hi */
    case 1293:  /* quad_halves_smaxv8hi */
    case 1292:  /* quad_halves_sminv8hi */
    case 1291:  /* quad_halves_plusv8hi */
    case 1290:  /* quad_halves_smaxv4sf */
    case 1289:  /* quad_halves_sminv4sf */
    case 1288:  /* quad_halves_plusv4sf */
    case 1287:  /* quad_halves_umaxv4si */
    case 1286:  /* quad_halves_uminv4si */
    case 1285:  /* quad_halves_smaxv4si */
    case 1284:  /* quad_halves_sminv4si */
    case 1283:  /* quad_halves_plusv4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1279:  /* vec_sel_widen_usum_hiv4siv2si3 */
    case 1278:  /* vec_sel_widen_usum_hiv8hiv4hi3 */
    case 1277:  /* vec_sel_widen_usum_hiv16qiv8qi3 */
    case 1276:  /* vec_sel_widen_usum_lov4siv2si3 */
    case 1275:  /* vec_sel_widen_usum_lov8hiv4hi3 */
    case 1274:  /* vec_sel_widen_usum_lov16qiv8qi3 */
    case 1270:  /* vec_sel_widen_ssum_hiv4siv2si3 */
    case 1269:  /* vec_sel_widen_ssum_hiv8hiv4hi3 */
    case 1268:  /* vec_sel_widen_ssum_hiv16qiv8qi3 */
    case 1267:  /* vec_sel_widen_ssum_lov4siv2si3 */
    case 1266:  /* vec_sel_widen_ssum_lov8hiv4hi3 */
    case 1265:  /* vec_sel_widen_ssum_lov16qiv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1264:  /* lshrdi3_neon */
    case 1263:  /* ashrdi3_neon */
    case 1258:  /* ashldi3_neon */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 985:  /* vec_setv2di_internal */
    case 984:  /* vec_setv4sf_internal */
    case 983:  /* vec_setv4si_internal */
    case 982:  /* vec_setv8hf_internal */
    case 981:  /* vec_setv8hi_internal */
    case 980:  /* vec_setv16qi_internal */
    case 979:  /* vec_setv2sf_internal */
    case 978:  /* vec_setv2si_internal */
    case 977:  /* vec_setv4hf_internal */
    case 976:  /* vec_setv4hi_internal */
    case 975:  /* vec_setv8qi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 925:  /* *thumb2_cbnz */
    case 924:  /* *thumb2_cbz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 916:  /* *thumb2_movsi_shortim */
    case 915:  /* *thumb2_movhi_shortim */
    case 914:  /* *thumb2_movqi_shortim */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 908:  /* thumb2_casesi_internal_pic */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 907:  /* thumb2_casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 897:  /* *thumb2_ior_scc_strict_it */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 882:  /* *thumb2_cmpsi_neg_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 881:  /* *thumb2_storewb_pairsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 879:  /* tls_load_dot_plus_four */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      break;

    case 868:  /* *thumb1_tablejump */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 863:  /* thumb1_casesi_dispatch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      break;

    case 893:  /* *nonsecure_call_value_reg_thumb2 */
    case 859:  /* *nonsecure_call_value_reg_thumb1_v5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 891:  /* *nonsecure_call_reg_thumb2 */
    case 856:  /* *nonsecure_call_reg_thumb1_v5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 853:  /* thumb1_addsi3_addgeu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 847:  /* *addsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 846:  /* *addsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 845:  /* *cbranchne_decr1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 844:  /* *tstsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 843:  /* *tlobits_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 842:  /* *tbit_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 841:  /* *negated_cbranchsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 840:  /* cbranchsi4_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 839:  /* cbranchsi4_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 838:  /* thumb1_cbz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 837:  /* movmem8b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 5), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 836:  /* movmem12b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 7), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 822:  /* *thumb1_neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1177:  /* negdi2_neon */
    case 850:  /* *cstoresi_ne0_thumb1_insn */
    case 849:  /* *cstoresi_eq0_thumb1_insn */
    case 827:  /* thumb1_extendhisi2 */
    case 821:  /* *thumb1_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 757:  /* neon_vcvthu_nsi_unspec */
    case 756:  /* neon_vcvths_nsi_unspec */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 755:  /* neon_vcvthu_nhf_unspec */
    case 754:  /* neon_vcvths_nhf_unspec */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 749:  /* *combine_vcvtf2i */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 717:  /* *fnmadddf4 */
    case 716:  /* *fnmaddsf4 */
    case 715:  /* *fnmaddhf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 714:  /* *fnmsubdf4 */
    case 713:  /* *fnmsubsf4 */
    case 712:  /* *fnmsubhf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1068:  /* fmsubv4hf4_intrinsic */
    case 1067:  /* fmsubv8hf4_intrinsic */
    case 1066:  /* fmsubv4sf4_intrinsic */
    case 1065:  /* fmsubv2sf4_intrinsic */
    case 1064:  /* *fmsubv4sf4 */
    case 1063:  /* *fmsubv2sf4 */
    case 711:  /* *fmsubdf4 */
    case 710:  /* *fmsubsf4 */
    case 709:  /* fmsubhf4_fp16 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 705:  /* *muldf3negdfsubdf_vfp */
    case 704:  /* *mulsf3negsfsubsf_vfp */
    case 703:  /* *mulhf3neghfsubhf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1054:  /* mulv4sf3negv4sfaddv4sf_neon */
    case 1053:  /* mulv2sf3negv2sfaddv2sf_neon */
    case 1052:  /* mulv4si3negv4siaddv4si_neon */
    case 1051:  /* mulv2si3negv2siaddv2si_neon */
    case 1050:  /* mulv8hi3negv8hiaddv8hi_neon */
    case 1049:  /* mulv4hi3negv4hiaddv4hi_neon */
    case 1048:  /* mulv16qi3negv16qiaddv16qi_neon */
    case 1047:  /* mulv8qi3negv8qiaddv8qi_neon */
    case 702:  /* *fmuldf3negdfadddf_vfp */
    case 701:  /* *mulsf3negsfaddsf_vfp */
    case 700:  /* *mulhf3neghfaddhf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 644:  /* iwmmxt_textrcv8qi3 */
    case 643:  /* iwmmxt_textrcv4hi3 */
    case 642:  /* iwmmxt_textrcv2si3 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 632:  /* iwmmxt_wmerge */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 623:  /* iwmmxt_wmiattn */
    case 622:  /* iwmmxt_wmiatbn */
    case 621:  /* iwmmxt_wmiabtn */
    case 620:  /* iwmmxt_wmiabbn */
    case 619:  /* iwmmxt_wmiatt */
    case 618:  /* iwmmxt_wmiatb */
    case 617:  /* iwmmxt_wmiabt */
    case 616:  /* iwmmxt_wmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 615:  /* iwmmxt_wqmiattn */
    case 614:  /* iwmmxt_wqmiatbn */
    case 613:  /* iwmmxt_wqmiabtn */
    case 612:  /* iwmmxt_wqmiabbn */
    case 611:  /* iwmmxt_wqmiatt */
    case 610:  /* iwmmxt_wqmiatb */
    case 609:  /* iwmmxt_wqmiabt */
    case 608:  /* iwmmxt_wqmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 607:  /* iwmmxt_waddbhusl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      break;

    case 606:  /* iwmmxt_waddbhusm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      break;

    case 590:  /* iwmmxt_avg4r */
    case 589:  /* iwmmxt_avg4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 588:  /* addcv2si3 */
    case 587:  /* addcv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 586:  /* iwmmxt_wsubaddhx */
    case 585:  /* iwmmxt_waddsubhx */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 574:  /* iwmmxt_walignr3 */
    case 573:  /* iwmmxt_walignr2 */
    case 572:  /* iwmmxt_walignr1 */
    case 571:  /* iwmmxt_walignr0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 570:  /* iwmmxt_walignr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 569:  /* iwmmxt_waligni */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1), 0));
      break;

    case 562:  /* iwmmxt_tmiatt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 561:  /* iwmmxt_tmiabt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 560:  /* iwmmxt_tmiatb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 631:  /* iwmmxt_wmiawttn */
    case 630:  /* iwmmxt_wmiawtbn */
    case 629:  /* iwmmxt_wmiawbtn */
    case 628:  /* iwmmxt_wmiawbbn */
    case 627:  /* iwmmxt_wmiawtt */
    case 626:  /* iwmmxt_wmiawtb */
    case 625:  /* iwmmxt_wmiawbt */
    case 624:  /* iwmmxt_wmiawbb */
    case 559:  /* iwmmxt_tmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 558:  /* iwmmxt_tmiaph */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 557:  /* iwmmxt_tmia */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      break;

    case 594:  /* iwmmxt_wmaddun */
    case 593:  /* iwmmxt_wmaddsn */
    case 592:  /* iwmmxt_wmaddux */
    case 591:  /* iwmmxt_wmaddsx */
    case 556:  /* iwmmxt_wmaddu */
    case 555:  /* iwmmxt_wmadds */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 996:  /* vec_extractv2didi */
    case 995:  /* vec_extractv4sfsf */
    case 994:  /* vec_extractv4sisi */
    case 993:  /* vec_extractv8hfhf */
    case 992:  /* vec_extractv8hihi */
    case 991:  /* vec_extractv16qiqi */
    case 990:  /* vec_extractv2sfsf */
    case 989:  /* vec_extractv2sisi */
    case 988:  /* vec_extractv4hfhf */
    case 987:  /* vec_extractv4hihi */
    case 986:  /* vec_extractv8qiqi */
    case 484:  /* iwmmxt_textrmw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1869:  /* neon_vdup_lanev4hf_internal */
    case 1868:  /* neon_vdup_lanev8hf_internal */
    case 1867:  /* neon_vdup_lanev4sf_internal */
    case 1866:  /* neon_vdup_lanev2sf_internal */
    case 1865:  /* neon_vdup_lanev4si_internal */
    case 1864:  /* neon_vdup_lanev2si_internal */
    case 1863:  /* neon_vdup_lanev8hi_internal */
    case 1862:  /* neon_vdup_lanev4hi_internal */
    case 1861:  /* neon_vdup_lanev16qi_internal */
    case 1860:  /* neon_vdup_lanev8qi_internal */
    case 1848:  /* neon_vget_lanev4sf_zext_internal */
    case 1847:  /* neon_vget_lanev4si_zext_internal */
    case 1846:  /* neon_vget_lanev8hf_zext_internal */
    case 1845:  /* neon_vget_lanev8hi_zext_internal */
    case 1844:  /* neon_vget_lanev16qi_zext_internal */
    case 1843:  /* neon_vget_lanev4sf_sext_internal */
    case 1842:  /* neon_vget_lanev4si_sext_internal */
    case 1841:  /* neon_vget_lanev8hf_sext_internal */
    case 1840:  /* neon_vget_lanev8hi_sext_internal */
    case 1839:  /* neon_vget_lanev16qi_sext_internal */
    case 1838:  /* neon_vget_lanev2sf_zext_internal */
    case 1837:  /* neon_vget_lanev2si_zext_internal */
    case 1836:  /* neon_vget_lanev4hi_zext_internal */
    case 1835:  /* neon_vget_lanev8qi_zext_internal */
    case 1834:  /* neon_vget_lanev2sf_sext_internal */
    case 1833:  /* neon_vget_lanev2si_sext_internal */
    case 1832:  /* neon_vget_lanev4hi_sext_internal */
    case 1831:  /* neon_vget_lanev8qi_sext_internal */
    case 483:  /* iwmmxt_textrmsh */
    case 482:  /* iwmmxt_textrmuh */
    case 481:  /* iwmmxt_textrmsb */
    case 480:  /* iwmmxt_textrmub */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 479:  /* iwmmxt_tinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 478:  /* iwmmxt_tinsrh */
    case 477:  /* iwmmxt_tinsrb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 600:  /* iwmmxt_wmulwumr */
    case 599:  /* iwmmxt_wmulwsmr */
    case 598:  /* iwmmxt_wmulumr */
    case 597:  /* iwmmxt_wmulsmr */
    case 474:  /* iwmmxt_uavgrndv4hi3 */
    case 473:  /* iwmmxt_uavgrndv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 596:  /* iwmmxt_wmulwum */
    case 595:  /* iwmmxt_wmulwsm */
    case 584:  /* iwmmxt_wabsdiffw */
    case 583:  /* iwmmxt_wabsdiffh */
    case 582:  /* iwmmxt_wabsdiffb */
    case 476:  /* iwmmxt_uavgv4hi3 */
    case 475:  /* iwmmxt_uavgv8qi3 */
    case 464:  /* umulv4hi3_highpart */
    case 463:  /* smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 4147:  /* *p *thumb2_movhi_insn */
    case 4146:  /* *p *thumb2_movsi_insn */
    case 4078:  /* *p *movdf_vfp */
    case 4077:  /* *p *thumb2_movsf_vfp */
    case 4076:  /* *p *movsf_vfp */
    case 4075:  /* *p *movhf_vfp_fp16 */
    case 4074:  /* *p *movdi_vfp */
    case 4073:  /* *p *thumb2_movsi_vfp */
    case 4072:  /* *p *arm_movsi_vfp */
    case 4071:  /* *p *thumb2_movhi_fp16 */
    case 4070:  /* *p *arm_movhi_fp16 */
    case 4069:  /* *p *thumb2_movhi_vfp */
    case 4068:  /* *p *arm_movhi_vfp */
    case 3857:  /* *p movv8qi_internal */
    case 3856:  /* *p movv4hi_internal */
    case 3855:  /* *p movv2si_internal */
    case 3763:  /* *p *arm_movsf_soft_insn */
    case 3762:  /* *p *arm32_movhf */
    case 3761:  /* *p *arm_movqi_insn */
    case 3760:  /* *p *movhi_bytes */
    case 3759:  /* *p *movhi_insn_arch4 */
    case 3756:  /* *p *arm_movsi_insn */
    case 431:  /* *cond_iwmmxt_movsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 428:  /* iwmmxt_nanddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 2588:  /* crypto_sha256su1 */
    case 2587:  /* crypto_sha256h2 */
    case 2586:  /* crypto_sha256h */
    case 2585:  /* crypto_sha1su0 */
    case 2491:  /* neon_vld4_lanev4sf */
    case 2490:  /* neon_vld4_lanev4si */
    case 2489:  /* neon_vld4_lanev8hf */
    case 2488:  /* neon_vld4_lanev8hi */
    case 2487:  /* neon_vld4_lanev2sf */
    case 2486:  /* neon_vld4_lanev2si */
    case 2485:  /* neon_vld4_lanev4hf */
    case 2484:  /* neon_vld4_lanev4hi */
    case 2483:  /* neon_vld4_lanev8qi */
    case 2435:  /* neon_vld3_lanev4sf */
    case 2434:  /* neon_vld3_lanev4si */
    case 2433:  /* neon_vld3_lanev8hf */
    case 2432:  /* neon_vld3_lanev8hi */
    case 2431:  /* neon_vld3_lanev2sf */
    case 2430:  /* neon_vld3_lanev2si */
    case 2429:  /* neon_vld3_lanev4hf */
    case 2428:  /* neon_vld3_lanev4hi */
    case 2427:  /* neon_vld3_lanev8qi */
    case 2384:  /* neon_vld2_lanev4sf */
    case 2383:  /* neon_vld2_lanev4si */
    case 2382:  /* neon_vld2_lanev8hf */
    case 2381:  /* neon_vld2_lanev8hi */
    case 2380:  /* neon_vld2_lanev2sf */
    case 2379:  /* neon_vld2_lanev2si */
    case 2378:  /* neon_vld2_lanev4hf */
    case 2377:  /* neon_vld2_lanev4hi */
    case 2376:  /* neon_vld2_lanev8qi */
    case 2329:  /* neon_vld1_lanev2di */
    case 2328:  /* neon_vld1_lanev4sf */
    case 2327:  /* neon_vld1_lanev4si */
    case 2326:  /* neon_vld1_lanev8hf */
    case 2325:  /* neon_vld1_lanev8hi */
    case 2324:  /* neon_vld1_lanev16qi */
    case 2323:  /* neon_vld1_lanedi */
    case 2322:  /* neon_vld1_lanev2sf */
    case 2321:  /* neon_vld1_lanev2si */
    case 2320:  /* neon_vld1_lanev4hf */
    case 2319:  /* neon_vld1_lanev4hi */
    case 2318:  /* neon_vld1_lanev8qi */
    case 2275:  /* neon_vtbx4v8qi */
    case 2274:  /* neon_vtbx3v8qi */
    case 2273:  /* neon_vtbx2v8qi */
    case 2272:  /* neon_vtbx1v8qi */
    case 2264:  /* neon_vsli_nv2di */
    case 2263:  /* neon_vsli_ndi */
    case 2262:  /* neon_vsli_nv4si */
    case 2261:  /* neon_vsli_nv2si */
    case 2260:  /* neon_vsli_nv8hi */
    case 2259:  /* neon_vsli_nv4hi */
    case 2258:  /* neon_vsli_nv16qi */
    case 2257:  /* neon_vsli_nv8qi */
    case 2256:  /* neon_vsri_nv2di */
    case 2255:  /* neon_vsri_ndi */
    case 2254:  /* neon_vsri_nv4si */
    case 2253:  /* neon_vsri_nv2si */
    case 2252:  /* neon_vsri_nv8hi */
    case 2251:  /* neon_vsri_nv4hi */
    case 2250:  /* neon_vsri_nv16qi */
    case 2249:  /* neon_vsri_nv8qi */
    case 2248:  /* neon_vrsrau_nv2di */
    case 2247:  /* neon_vrsras_nv2di */
    case 2246:  /* neon_vsrau_nv2di */
    case 2245:  /* neon_vsras_nv2di */
    case 2244:  /* neon_vrsrau_ndi */
    case 2243:  /* neon_vrsras_ndi */
    case 2242:  /* neon_vsrau_ndi */
    case 2241:  /* neon_vsras_ndi */
    case 2240:  /* neon_vrsrau_nv4si */
    case 2239:  /* neon_vrsras_nv4si */
    case 2238:  /* neon_vsrau_nv4si */
    case 2237:  /* neon_vsras_nv4si */
    case 2236:  /* neon_vrsrau_nv2si */
    case 2235:  /* neon_vrsras_nv2si */
    case 2234:  /* neon_vsrau_nv2si */
    case 2233:  /* neon_vsras_nv2si */
    case 2232:  /* neon_vrsrau_nv8hi */
    case 2231:  /* neon_vrsras_nv8hi */
    case 2230:  /* neon_vsrau_nv8hi */
    case 2229:  /* neon_vsras_nv8hi */
    case 2228:  /* neon_vrsrau_nv4hi */
    case 2227:  /* neon_vrsras_nv4hi */
    case 2226:  /* neon_vsrau_nv4hi */
    case 2225:  /* neon_vsras_nv4hi */
    case 2224:  /* neon_vrsrau_nv16qi */
    case 2223:  /* neon_vrsras_nv16qi */
    case 2222:  /* neon_vsrau_nv16qi */
    case 2221:  /* neon_vsras_nv16qi */
    case 2220:  /* neon_vrsrau_nv8qi */
    case 2219:  /* neon_vrsras_nv8qi */
    case 2218:  /* neon_vsrau_nv8qi */
    case 2217:  /* neon_vsras_nv8qi */
    case 2058:  /* neon_vbslv2di_internal */
    case 2057:  /* neon_vbsldi_internal */
    case 2056:  /* neon_vbslv4sf_internal */
    case 2055:  /* neon_vbslv2sf_internal */
    case 2054:  /* neon_vbslv8hf_internal */
    case 2053:  /* neon_vbslv4hf_internal */
    case 2052:  /* neon_vbslv4si_internal */
    case 2051:  /* neon_vbslv2si_internal */
    case 2050:  /* neon_vbslv8hi_internal */
    case 2049:  /* neon_vbslv4hi_internal */
    case 2048:  /* neon_vbslv16qi_internal */
    case 2047:  /* neon_vbslv8qi_internal */
    case 2029:  /* neon_vextv2di */
    case 2028:  /* neon_vextdi */
    case 2027:  /* neon_vextv4sf */
    case 2026:  /* neon_vextv2sf */
    case 2025:  /* neon_vextv8hf */
    case 2024:  /* neon_vextv4hf */
    case 2023:  /* neon_vextv4si */
    case 2022:  /* neon_vextv2si */
    case 2021:  /* neon_vextv8hi */
    case 2020:  /* neon_vextv4hi */
    case 2019:  /* neon_vextv16qi */
    case 2018:  /* neon_vextv8qi */
    case 1985:  /* neon_vqrdmulh_lanev2si */
    case 1984:  /* neon_vqdmulh_lanev2si */
    case 1983:  /* neon_vqrdmulh_lanev4hi */
    case 1982:  /* neon_vqdmulh_lanev4hi */
    case 1981:  /* neon_vqrdmulh_lanev4si */
    case 1980:  /* neon_vqdmulh_lanev4si */
    case 1979:  /* neon_vqrdmulh_lanev8hi */
    case 1978:  /* neon_vqdmulh_lanev8hi */
    case 1977:  /* neon_vqdmull_lanev2si */
    case 1976:  /* neon_vqdmull_lanev4hi */
    case 1975:  /* neon_vmullu_lanev2si */
    case 1974:  /* neon_vmulls_lanev2si */
    case 1973:  /* neon_vmullu_lanev4hi */
    case 1972:  /* neon_vmulls_lanev4hi */
    case 1971:  /* neon_vmul_lanev4hf */
    case 1970:  /* neon_vmul_lanev8hf */
    case 1969:  /* neon_vmul_lanev4sf */
    case 1968:  /* neon_vmul_lanev4si */
    case 1967:  /* neon_vmul_lanev8hi */
    case 1966:  /* neon_vmul_lanev2sf */
    case 1965:  /* neon_vmul_lanev2si */
    case 1964:  /* neon_vmul_lanev4hi */
    case 1476:  /* neon_vqdmlslv2si */
    case 1475:  /* neon_vqdmlslv4hi */
    case 1474:  /* neon_vqdmlalv2si */
    case 1473:  /* neon_vqdmlalv4hi */
    case 1472:  /* neon_vqrdmlshv4si */
    case 1471:  /* neon_vqrdmlahv4si */
    case 1470:  /* neon_vqrdmlshv8hi */
    case 1469:  /* neon_vqrdmlahv8hi */
    case 1468:  /* neon_vqrdmlshv2si */
    case 1467:  /* neon_vqrdmlahv2si */
    case 1466:  /* neon_vqrdmlshv4hi */
    case 1465:  /* neon_vqrdmlahv4hi */
    case 1456:  /* neon_vmlsluv2si */
    case 1455:  /* neon_vmlslsv2si */
    case 1454:  /* neon_vmlsluv4hi */
    case 1453:  /* neon_vmlslsv4hi */
    case 1452:  /* neon_vmlsluv8qi */
    case 1451:  /* neon_vmlslsv8qi */
    case 1450:  /* neon_vmlsv4sf_unspec */
    case 1449:  /* neon_vmlsv2sf_unspec */
    case 1448:  /* neon_vmlsv4si_unspec */
    case 1447:  /* neon_vmlsv2si_unspec */
    case 1446:  /* neon_vmlsv8hi_unspec */
    case 1445:  /* neon_vmlsv4hi_unspec */
    case 1444:  /* neon_vmlsv16qi_unspec */
    case 1443:  /* neon_vmlsv8qi_unspec */
    case 1442:  /* neon_vmlaluv2si */
    case 1441:  /* neon_vmlalsv2si */
    case 1440:  /* neon_vmlaluv4hi */
    case 1439:  /* neon_vmlalsv4hi */
    case 1438:  /* neon_vmlaluv8qi */
    case 1437:  /* neon_vmlalsv8qi */
    case 1436:  /* neon_vmlav4sf_unspec */
    case 1435:  /* neon_vmlav2sf_unspec */
    case 1434:  /* neon_vmlav4si_unspec */
    case 1433:  /* neon_vmlav2si_unspec */
    case 1432:  /* neon_vmlav8hi_unspec */
    case 1431:  /* neon_vmlav4hi_unspec */
    case 1430:  /* neon_vmlav16qi_unspec */
    case 1429:  /* neon_vmlav8qi_unspec */
    case 576:  /* iwmmxt_wsadh */
    case 575:  /* iwmmxt_wsadb */
    case 467:  /* iwmmxt_wmacu */
    case 465:  /* iwmmxt_wmacs */
    case 421:  /* mrrc2 */
    case 420:  /* mrrc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 419:  /* mcrr2 */
    case 418:  /* mcrr */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 417:  /* mrc2 */
    case 416:  /* mrc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 4));
      break;

    case 415:  /* mcr2 */
    case 414:  /* mcr */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 5));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 413:  /* *stc */
    case 412:  /* *stc */
    case 411:  /* *stc */
    case 410:  /* *stc */
    case 409:  /* *ldc */
    case 408:  /* *ldc */
    case 407:  /* *ldc */
    case 406:  /* *ldc */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 405:  /* cdp2 */
    case 404:  /* cdp */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (pat, 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 5));
      break;

    case 403:  /* *load_multiple */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 398:  /* *stm2_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 397:  /* *stm2_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 396:  /* *ldm2_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 395:  /* *ldm2_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 402:  /* *stm2_db_update */
    case 394:  /* *stm2_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 401:  /* *stm2_db */
    case 393:  /* *stm2_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 400:  /* *ldm2_db_update */
    case 392:  /* *ldm2_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 399:  /* *ldm2_db */
    case 391:  /* *ldm2_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 390:  /* *thumb_stm2_ia_update */
    case 389:  /* *stm2_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 388:  /* *stm2_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 387:  /* *thumb_ldm2_ia_update */
    case 386:  /* *ldm2_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 385:  /* *thumb_ldm2_ia */
    case 384:  /* *ldm2_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 379:  /* *stm3_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 378:  /* *stm3_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 377:  /* *ldm3_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 376:  /* *ldm3_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 383:  /* *stm3_db_update */
    case 375:  /* *stm3_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 382:  /* *stm3_db */
    case 374:  /* *stm3_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 381:  /* *ldm3_db_update */
    case 373:  /* *ldm3_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 380:  /* *ldm3_db */
    case 372:  /* *ldm3_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 371:  /* *thumb_stm3_ia_update */
    case 370:  /* *stm3_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 369:  /* *stm3_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 368:  /* *thumb_ldm3_ia_update */
    case 367:  /* *ldm3_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 366:  /* *thumb_ldm3_ia */
    case 365:  /* *ldm3_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 360:  /* *stm4_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 359:  /* *stm4_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 358:  /* *ldm4_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 357:  /* *ldm4_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 364:  /* *stm4_db_update */
    case 356:  /* *stm4_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 363:  /* *stm4_db */
    case 355:  /* *stm4_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 362:  /* *ldm4_db_update */
    case 354:  /* *ldm4_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 361:  /* *ldm4_db */
    case 353:  /* *ldm4_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 352:  /* *thumb_stm4_ia_update */
    case 351:  /* *stm4_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 350:  /* *stm4_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 349:  /* *thumb_ldm4_ia_update */
    case 348:  /* *ldm4_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 347:  /* *thumb_ldm4_ia */
    case 346:  /* *ldm4_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 339:  /* *thumb2_strd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 338:  /* *thumb2_strd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 337:  /* *thumb2_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 336:  /* *thumb2_ldrd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 335:  /* *thumb2_ldrd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 334:  /* *thumb2_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 333:  /* arm_rev16si2_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 332:  /* arm_rev16si2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 328:  /* *arm_movtas_ze */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 327:  /* tlscall */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 911:  /* thumb2_eh_return */
    case 869:  /* thumb_eh_return */
    case 324:  /* arm_eh_return */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 322:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 801:  /* set_fpscr */
    case 323:  /* force_register_use */
    case 318:  /* consttable_16 */
    case 317:  /* consttable_8 */
    case 316:  /* consttable_4 */
    case 315:  /* consttable_2 */
    case 314:  /* consttable_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 309:  /* *ldr_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      break;

    case 308:  /* *pop_multiple_with_return */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 307:  /* *pop_multiple_with_writeback_and_return */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 310:  /* *vfp_pop_multiple_with_writeback */
    case 306:  /* *load_multiple_with_writeback */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 305:  /* stack_tie */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 766:  /* *push_multi_vfp */
    case 304:  /* *push_multi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 303:  /* *not_signextract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 302:  /* *sign_extract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 300:  /* *arith_adjacentmem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 295:  /* *if_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 294:  /* *ifcompare_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 293:  /* *if_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 292:  /* *ifcompare_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 290:  /* *ifcompare_shift_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 289:  /* *if_move_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 287:  /* *if_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 286:  /* *ifcompare_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 297:  /* *if_neg_move */
    case 285:  /* *if_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 296:  /* *ifcompare_neg_move */
    case 284:  /* *ifcompare_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 301:  /* *cond_move_not */
    case 299:  /* *if_move_neg */
    case 283:  /* *if_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 298:  /* *ifcompare_move_neg */
    case 282:  /* *ifcompare_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 281:  /* *if_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 288:  /* *ifcompare_move_shift */
    case 280:  /* *ifcompare_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 279:  /* *if_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 278:  /* *ifcompare_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 291:  /* *if_shift_shift */
    case 277:  /* *if_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 276:  /* *ifcompare_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 275:  /* *if_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 274:  /* *ifcompare_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 273:  /* *if_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 272:  /* *ifcompare_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 903:  /* *thumb2_movcond */
    case 271:  /* movcond */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 270:  /* movcond_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 902:  /* *thumb2_negscc */
    case 269:  /* *negscc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 267:  /* *and_scc_scc_cmp */
    case 265:  /* *ior_scc_scc_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 6;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[4] = 5;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[5] = 4;
      break;

    case 268:  /* *and_scc_scc_nodom */
    case 266:  /* *and_scc_scc */
    case 264:  /* *ior_scc_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 263:  /* *cmp_ior */
    case 262:  /* *cmp_and */
    case 261:  /* *cmp_ite1 */
    case 260:  /* *cmp_ite0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      break;

    case 900:  /* *thumb2_cond_arith_strict_it */
    case 899:  /* *thumb2_cond_arith */
    case 258:  /* *cond_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 898:  /* *thumb2_cond_move */
    case 257:  /* *cond_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 256:  /* *compare_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 896:  /* *thumb2_ior_scc */
    case 895:  /* *thumb2_and_scc */
    case 255:  /* *ior_scc */
    case 254:  /* *and_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 253:  /* *sub_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 252:  /* *sub_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 251:  /* *sub_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 250:  /* *arith_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 249:  /* *arith_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[4] = 4;
      break;

    case 248:  /* *and_shiftsi */
    case 247:  /* *eor_shiftsi */
    case 246:  /* *orr_shiftsi */
    case 245:  /* *rsb_shiftsi */
    case 244:  /* *add_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1046:  /* mulv4hf3addv4hf_neon */
    case 1045:  /* mulv8hf3addv8hf_neon */
    case 1044:  /* mulv4sf3addv4sf_neon */
    case 1043:  /* mulv2sf3addv2sf_neon */
    case 1042:  /* mulv4si3addv4si_neon */
    case 1041:  /* mulv2si3addv2si_neon */
    case 1040:  /* mulv8hi3addv8hi_neon */
    case 1039:  /* mulv4hi3addv4hi_neon */
    case 1038:  /* mulv16qi3addv16qi_neon */
    case 1037:  /* mulv8qi3addv8qi_neon */
    case 699:  /* *muldf3subdf_vfp */
    case 698:  /* *mulsf3subsf_vfp */
    case 697:  /* *mulhf3subhf_vfp */
    case 696:  /* *muldf3adddf_vfp */
    case 695:  /* *mulsf3addsf_vfp */
    case 694:  /* *mulsf3addhf_vfp */
    case 243:  /* *and_multsi */
    case 242:  /* *eor_multsi */
    case 241:  /* *orr_multsi */
    case 240:  /* *rsb_multsi */
    case 239:  /* *add_multsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 894:  /* *thumb2_indirect_jump */
    case 864:  /* *thumb1_indirect_jump */
    case 236:  /* *load_indirect_jump */
    case 235:  /* *arm_indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 234:  /* arm_casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 877:  /* *thumb2_pop_single */
    case 867:  /* *thumb1_movpc_insn */
    case 802:  /* get_fpscr */
    case 472:  /* iwmmxt_clrv2si */
    case 471:  /* iwmmxt_clrv4hi */
    case 470:  /* iwmmxt_clrv8qi */
    case 469:  /* iwmmxt_clrdi */
    case 325:  /* load_tp_hard */
    case 232:  /* probe_stack */
    case 230:  /* *check_arch2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 228:  /* *cond_simple_return_inverted */
    case 227:  /* *cond_return_inverted */
    case 226:  /* *cond_simple_return */
    case 225:  /* *cond_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 910:  /* *thumb2_cmse_entry_return */
    case 909:  /* *thumb2_return */
    case 866:  /* *epilogue_insns */
    case 865:  /* prologue_thumb1_interwork */
    case 736:  /* *movcc_vfp */
    case 641:  /* iwmmxt_torvscv8qi3 */
    case 640:  /* iwmmxt_torvscv4hi3 */
    case 639:  /* iwmmxt_torvscv2si3 */
    case 638:  /* iwmmxt_torcv8qi3 */
    case 637:  /* iwmmxt_torcv4hi3 */
    case 636:  /* iwmmxt_torcv2si3 */
    case 635:  /* iwmmxt_tandcv8qi3 */
    case 634:  /* iwmmxt_tandcv4hi3 */
    case 633:  /* iwmmxt_tandcv2si3 */
    case 326:  /* load_tp_soft */
    case 313:  /* consttable_end */
    case 312:  /* align_8 */
    case 311:  /* align_4 */
    case 238:  /* trap */
    case 237:  /* nop */
    case 231:  /* blockage */
    case 229:  /* *arm_simple_return */
    case 224:  /* *arm_return */
      break;

    case 223:  /* *sibcall_value_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 222:  /* *sibcall_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 892:  /* *call_value_reg_thumb2 */
    case 862:  /* *call_value_insn */
    case 860:  /* *call_value_reg_thumb1 */
    case 858:  /* *call_value_reg_thumb1_v5 */
    case 221:  /* *call_value_symbol */
    case 219:  /* *call_value_reg_arm */
    case 218:  /* *call_value_reg_armv5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 890:  /* *call_reg_thumb2 */
    case 861:  /* *call_insn */
    case 857:  /* *call_reg_thumb1 */
    case 855:  /* *call_reg_thumb1_v5 */
    case 220:  /* *call_symbol */
    case 217:  /* *call_reg_arm */
    case 216:  /* *call_reg_armv5 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 889:  /* *thumb2_movsfcc_soft_insn */
    case 888:  /* *thumb2_movsicc_insn */
    case 662:  /* *thumb2_movdfcc_vfp */
    case 661:  /* *movdfcc_vfp */
    case 660:  /* *thumb2_movsfcc_vfp */
    case 659:  /* *movsfcc_vfp */
    case 214:  /* *movsfcc_soft_insn */
    case 213:  /* *movsicc_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 212:  /* *cmovhf */
    case 211:  /* *cmovdf */
    case 210:  /* *cmovsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 887:  /* *thumb2_mov_notscc_strict_it */
    case 886:  /* *thumb2_mov_notscc */
    case 885:  /* *thumb2_mov_negscc_strict_it */
    case 884:  /* *thumb2_mov_negscc */
    case 209:  /* *mov_notscc */
    case 208:  /* *mov_negscc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 883:  /* *thumb2_mov_scc */
    case 207:  /* *mov_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 206:  /* *arm_cond_branch_reversed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 205:  /* arm_cond_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 204:  /* *deleted_compare */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XEXP (pat, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 848:  /* *thumb_cmpdi_zero */
    case 203:  /* *arm_cmpdi_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 201:  /* *arm_cmpdi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 200:  /* *arm_cmpsi_negshiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 199:  /* *cmpsi_shiftsi_swp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 198:  /* *cmpsi_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 744:  /* *cmpdf_trap_vfp */
    case 743:  /* *cmpdf_vfp */
    case 742:  /* *cmpsf_trap_vfp */
    case 741:  /* *cmpsf_vfp */
    case 740:  /* *cmpdf_trap_split_vfp */
    case 739:  /* *cmpdf_split_vfp */
    case 738:  /* *cmpsf_trap_split_vfp */
    case 737:  /* *cmpsf_split_vfp */
    case 202:  /* *arm_cmpdi_unsigned */
    case 197:  /* *arm_cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 190:  /* *movsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 189:  /* tls_load_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 188:  /* pic_add_dot_plus_eight */
    case 187:  /* pic_add_dot_plus_four */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 2600:  /* atomic_storesi */
    case 2599:  /* atomic_storehi */
    case 2598:  /* atomic_storeqi */
    case 2597:  /* atomic_loadsi */
    case 2596:  /* atomic_loadhi */
    case 2595:  /* atomic_loadqi */
    case 2590:  /* crypto_vmullp64 */
    case 2584:  /* crypto_sha256su0 */
    case 2583:  /* crypto_sha1su1 */
    case 2582:  /* crypto_aese */
    case 2581:  /* crypto_aesd */
    case 2522:  /* neon_vst4_lanev4sf */
    case 2521:  /* neon_vst4_lanev4si */
    case 2520:  /* neon_vst4_lanev8hf */
    case 2519:  /* neon_vst4_lanev8hi */
    case 2518:  /* neon_vst4_lanev2sf */
    case 2517:  /* neon_vst4_lanev2si */
    case 2516:  /* neon_vst4_lanev4hf */
    case 2515:  /* neon_vst4_lanev4hi */
    case 2514:  /* neon_vst4_lanev8qi */
    case 2482:  /* neon_vld4qbv4sf */
    case 2481:  /* neon_vld4qbv4si */
    case 2480:  /* neon_vld4qbv8hf */
    case 2479:  /* neon_vld4qbv8hi */
    case 2478:  /* neon_vld4qbv16qi */
    case 2466:  /* neon_vst3_lanev4sf */
    case 2465:  /* neon_vst3_lanev4si */
    case 2464:  /* neon_vst3_lanev8hf */
    case 2463:  /* neon_vst3_lanev8hi */
    case 2462:  /* neon_vst3_lanev2sf */
    case 2461:  /* neon_vst3_lanev2si */
    case 2460:  /* neon_vst3_lanev4hf */
    case 2459:  /* neon_vst3_lanev4hi */
    case 2458:  /* neon_vst3_lanev8qi */
    case 2426:  /* neon_vld3qbv4sf */
    case 2425:  /* neon_vld3qbv4si */
    case 2424:  /* neon_vld3qbv8hf */
    case 2423:  /* neon_vld3qbv8hi */
    case 2422:  /* neon_vld3qbv16qi */
    case 2410:  /* neon_vst2_lanev4sf */
    case 2409:  /* neon_vst2_lanev4si */
    case 2408:  /* neon_vst2_lanev8hf */
    case 2407:  /* neon_vst2_lanev8hi */
    case 2406:  /* neon_vst2_lanev2sf */
    case 2405:  /* neon_vst2_lanev2si */
    case 2404:  /* neon_vst2_lanev4hf */
    case 2403:  /* neon_vst2_lanev4hi */
    case 2402:  /* neon_vst2_lanev8qi */
    case 2364:  /* neon_vst1_lanev2di */
    case 2363:  /* neon_vst1_lanev4sf */
    case 2362:  /* neon_vst1_lanev4si */
    case 2361:  /* neon_vst1_lanev8hf */
    case 2360:  /* neon_vst1_lanev8hi */
    case 2359:  /* neon_vst1_lanev16qi */
    case 2358:  /* neon_vst1_lanedi */
    case 2357:  /* neon_vst1_lanev2sf */
    case 2356:  /* neon_vst1_lanev2si */
    case 2355:  /* neon_vst1_lanev4hf */
    case 2354:  /* neon_vst1_lanev4hi */
    case 2353:  /* neon_vst1_lanev8qi */
    case 2271:  /* neon_vcombinev16qi */
    case 2270:  /* neon_vtbl2v16qi */
    case 2269:  /* neon_vtbl1v16qi */
    case 2268:  /* neon_vtbl4v8qi */
    case 2267:  /* neon_vtbl3v8qi */
    case 2266:  /* neon_vtbl2v8qi */
    case 2265:  /* neon_vtbl1v8qi */
    case 2216:  /* neon_vshllu_nv2si */
    case 2215:  /* neon_vshlls_nv2si */
    case 2214:  /* neon_vshllu_nv4hi */
    case 2213:  /* neon_vshlls_nv4hi */
    case 2212:  /* neon_vshllu_nv8qi */
    case 2211:  /* neon_vshlls_nv8qi */
    case 2210:  /* neon_vqshlu_nv2di */
    case 2209:  /* neon_vqshlu_ndi */
    case 2208:  /* neon_vqshlu_nv4si */
    case 2207:  /* neon_vqshlu_nv2si */
    case 2206:  /* neon_vqshlu_nv8hi */
    case 2205:  /* neon_vqshlu_nv4hi */
    case 2204:  /* neon_vqshlu_nv16qi */
    case 2203:  /* neon_vqshlu_nv8qi */
    case 2202:  /* neon_vqshl_u_nv2di */
    case 2201:  /* neon_vqshl_s_nv2di */
    case 2200:  /* neon_vqshl_u_ndi */
    case 2199:  /* neon_vqshl_s_ndi */
    case 2198:  /* neon_vqshl_u_nv4si */
    case 2197:  /* neon_vqshl_s_nv4si */
    case 2196:  /* neon_vqshl_u_nv2si */
    case 2195:  /* neon_vqshl_s_nv2si */
    case 2194:  /* neon_vqshl_u_nv8hi */
    case 2193:  /* neon_vqshl_s_nv8hi */
    case 2192:  /* neon_vqshl_u_nv4hi */
    case 2191:  /* neon_vqshl_s_nv4hi */
    case 2190:  /* neon_vqshl_u_nv16qi */
    case 2189:  /* neon_vqshl_s_nv16qi */
    case 2188:  /* neon_vqshl_u_nv8qi */
    case 2187:  /* neon_vqshl_s_nv8qi */
    case 2186:  /* neon_vshl_nv2di */
    case 2185:  /* neon_vshl_ndi */
    case 2184:  /* neon_vshl_nv4si */
    case 2183:  /* neon_vshl_nv2si */
    case 2182:  /* neon_vshl_nv8hi */
    case 2181:  /* neon_vshl_nv4hi */
    case 2180:  /* neon_vshl_nv16qi */
    case 2179:  /* neon_vshl_nv8qi */
    case 2178:  /* neon_vqrshrun_nv2di */
    case 2177:  /* neon_vqshrun_nv2di */
    case 2176:  /* neon_vqrshrun_nv4si */
    case 2175:  /* neon_vqshrun_nv4si */
    case 2174:  /* neon_vqrshrun_nv8hi */
    case 2173:  /* neon_vqshrun_nv8hi */
    case 2172:  /* neon_vqrshrnu_nv2di */
    case 2171:  /* neon_vqrshrns_nv2di */
    case 2170:  /* neon_vqshrnu_nv2di */
    case 2169:  /* neon_vqshrns_nv2di */
    case 2168:  /* neon_vqrshrnu_nv4si */
    case 2167:  /* neon_vqrshrns_nv4si */
    case 2166:  /* neon_vqshrnu_nv4si */
    case 2165:  /* neon_vqshrns_nv4si */
    case 2164:  /* neon_vqrshrnu_nv8hi */
    case 2163:  /* neon_vqrshrns_nv8hi */
    case 2162:  /* neon_vqshrnu_nv8hi */
    case 2161:  /* neon_vqshrns_nv8hi */
    case 2160:  /* neon_vrshrn_nv2di */
    case 2159:  /* neon_vshrn_nv2di */
    case 2158:  /* neon_vrshrn_nv4si */
    case 2157:  /* neon_vshrn_nv4si */
    case 2156:  /* neon_vrshrn_nv8hi */
    case 2155:  /* neon_vshrn_nv8hi */
    case 2154:  /* neon_vrshru_nv2di */
    case 2153:  /* neon_vrshrs_nv2di */
    case 2152:  /* neon_vshru_nv2di */
    case 2151:  /* neon_vshrs_nv2di */
    case 2150:  /* neon_vrshru_ndi */
    case 2149:  /* neon_vrshrs_ndi */
    case 2148:  /* neon_vshru_ndi */
    case 2147:  /* neon_vshrs_ndi */
    case 2146:  /* neon_vrshru_nv4si */
    case 2145:  /* neon_vrshrs_nv4si */
    case 2144:  /* neon_vshru_nv4si */
    case 2143:  /* neon_vshrs_nv4si */
    case 2142:  /* neon_vrshru_nv2si */
    case 2141:  /* neon_vrshrs_nv2si */
    case 2140:  /* neon_vshru_nv2si */
    case 2139:  /* neon_vshrs_nv2si */
    case 2138:  /* neon_vrshru_nv8hi */
    case 2137:  /* neon_vrshrs_nv8hi */
    case 2136:  /* neon_vshru_nv8hi */
    case 2135:  /* neon_vshrs_nv8hi */
    case 2134:  /* neon_vrshru_nv4hi */
    case 2133:  /* neon_vrshrs_nv4hi */
    case 2132:  /* neon_vshru_nv4hi */
    case 2131:  /* neon_vshrs_nv4hi */
    case 2130:  /* neon_vrshru_nv16qi */
    case 2129:  /* neon_vrshrs_nv16qi */
    case 2128:  /* neon_vshru_nv16qi */
    case 2127:  /* neon_vshrs_nv16qi */
    case 2126:  /* neon_vrshru_nv8qi */
    case 2125:  /* neon_vrshrs_nv8qi */
    case 2124:  /* neon_vshru_nv8qi */
    case 2123:  /* neon_vshrs_nv8qi */
    case 2122:  /* neon_vqrshluv2di */
    case 2121:  /* neon_vqrshlsv2di */
    case 2120:  /* neon_vqshluv2di */
    case 2119:  /* neon_vqshlsv2di */
    case 2118:  /* neon_vqrshludi */
    case 2117:  /* neon_vqrshlsdi */
    case 2116:  /* neon_vqshludi */
    case 2115:  /* neon_vqshlsdi */
    case 2114:  /* neon_vqrshluv4si */
    case 2113:  /* neon_vqrshlsv4si */
    case 2112:  /* neon_vqshluv4si */
    case 2111:  /* neon_vqshlsv4si */
    case 2110:  /* neon_vqrshluv2si */
    case 2109:  /* neon_vqrshlsv2si */
    case 2108:  /* neon_vqshluv2si */
    case 2107:  /* neon_vqshlsv2si */
    case 2106:  /* neon_vqrshluv8hi */
    case 2105:  /* neon_vqrshlsv8hi */
    case 2104:  /* neon_vqshluv8hi */
    case 2103:  /* neon_vqshlsv8hi */
    case 2102:  /* neon_vqrshluv4hi */
    case 2101:  /* neon_vqrshlsv4hi */
    case 2100:  /* neon_vqshluv4hi */
    case 2099:  /* neon_vqshlsv4hi */
    case 2098:  /* neon_vqrshluv16qi */
    case 2097:  /* neon_vqrshlsv16qi */
    case 2096:  /* neon_vqshluv16qi */
    case 2095:  /* neon_vqshlsv16qi */
    case 2094:  /* neon_vqrshluv8qi */
    case 2093:  /* neon_vqrshlsv8qi */
    case 2092:  /* neon_vqshluv8qi */
    case 2091:  /* neon_vqshlsv8qi */
    case 2090:  /* neon_vrshluv2di */
    case 2089:  /* neon_vrshlsv2di */
    case 2088:  /* neon_vshluv2di */
    case 2087:  /* neon_vshlsv2di */
    case 2086:  /* neon_vrshludi */
    case 2085:  /* neon_vrshlsdi */
    case 2084:  /* neon_vshludi */
    case 2083:  /* neon_vshlsdi */
    case 2082:  /* neon_vrshluv4si */
    case 2081:  /* neon_vrshlsv4si */
    case 2080:  /* neon_vshluv4si */
    case 2079:  /* neon_vshlsv4si */
    case 2078:  /* neon_vrshluv2si */
    case 2077:  /* neon_vrshlsv2si */
    case 2076:  /* neon_vshluv2si */
    case 2075:  /* neon_vshlsv2si */
    case 2074:  /* neon_vrshluv8hi */
    case 2073:  /* neon_vrshlsv8hi */
    case 2072:  /* neon_vshluv8hi */
    case 2071:  /* neon_vshlsv8hi */
    case 2070:  /* neon_vrshluv4hi */
    case 2069:  /* neon_vrshlsv4hi */
    case 2068:  /* neon_vshluv4hi */
    case 2067:  /* neon_vshlsv4hi */
    case 2066:  /* neon_vrshluv16qi */
    case 2065:  /* neon_vrshlsv16qi */
    case 2064:  /* neon_vshluv16qi */
    case 2063:  /* neon_vshlsv16qi */
    case 2062:  /* neon_vrshluv8qi */
    case 2061:  /* neon_vrshlsv8qi */
    case 2060:  /* neon_vshluv8qi */
    case 2059:  /* neon_vshlsv8qi */
    case 1929:  /* neon_vcvtu_nv8hi */
    case 1928:  /* neon_vcvts_nv8hi */
    case 1927:  /* neon_vcvtu_nv4hi */
    case 1926:  /* neon_vcvts_nv4hi */
    case 1925:  /* neon_vcvtu_nv4si */
    case 1924:  /* neon_vcvts_nv4si */
    case 1923:  /* neon_vcvtu_nv2si */
    case 1922:  /* neon_vcvts_nv2si */
    case 1921:  /* neon_vcvtu_nv4hf */
    case 1920:  /* neon_vcvts_nv4hf */
    case 1919:  /* neon_vcvtu_nv8hf */
    case 1918:  /* neon_vcvts_nv8hf */
    case 1917:  /* neon_vcvtu_nv4sf */
    case 1916:  /* neon_vcvts_nv4sf */
    case 1915:  /* neon_vcvtu_nv2sf */
    case 1914:  /* neon_vcvts_nv2sf */
    case 1781:  /* neon_vrsqrtsv4hf */
    case 1780:  /* neon_vrsqrtsv8hf */
    case 1779:  /* neon_vrsqrtsv4sf */
    case 1778:  /* neon_vrsqrtsv2sf */
    case 1777:  /* neon_vrecpsv4hf */
    case 1776:  /* neon_vrecpsv8hf */
    case 1775:  /* neon_vrecpsv4sf */
    case 1774:  /* neon_vrecpsv2sf */
    case 1773:  /* neon_vpminfv4sf */
    case 1772:  /* neon_vpmaxfv4sf */
    case 1771:  /* neon_vpminfv2sf */
    case 1770:  /* neon_vpmaxfv2sf */
    case 1769:  /* neon_vpminuv2si */
    case 1768:  /* neon_vpminsv2si */
    case 1767:  /* neon_vpmaxuv2si */
    case 1766:  /* neon_vpmaxsv2si */
    case 1765:  /* neon_vpminuv4hi */
    case 1764:  /* neon_vpminsv4hi */
    case 1763:  /* neon_vpmaxuv4hi */
    case 1762:  /* neon_vpmaxsv4hi */
    case 1761:  /* neon_vpminuv8qi */
    case 1760:  /* neon_vpminsv8qi */
    case 1759:  /* neon_vpmaxuv8qi */
    case 1758:  /* neon_vpmaxsv8qi */
    case 1757:  /* neon_vpadaluv4si */
    case 1756:  /* neon_vpadalsv4si */
    case 1755:  /* neon_vpadaluv2si */
    case 1754:  /* neon_vpadalsv2si */
    case 1753:  /* neon_vpadaluv8hi */
    case 1752:  /* neon_vpadalsv8hi */
    case 1751:  /* neon_vpadaluv4hi */
    case 1750:  /* neon_vpadalsv4hi */
    case 1749:  /* neon_vpadaluv16qi */
    case 1748:  /* neon_vpadalsv16qi */
    case 1747:  /* neon_vpadaluv8qi */
    case 1746:  /* neon_vpadalsv8qi */
    case 1733:  /* fminv4sf3 */
    case 1732:  /* fmaxv4sf3 */
    case 1731:  /* fminv2sf3 */
    case 1730:  /* fmaxv2sf3 */
    case 1729:  /* neon_vminnmv4sf */
    case 1728:  /* neon_vmaxnmv4sf */
    case 1727:  /* neon_vminnmv2sf */
    case 1726:  /* neon_vmaxnmv2sf */
    case 1725:  /* neon_vminnmv4hf */
    case 1724:  /* neon_vmaxnmv4hf */
    case 1723:  /* neon_vminnmv8hf */
    case 1722:  /* neon_vmaxnmv8hf */
    case 1721:  /* neon_vpminfv4hf */
    case 1720:  /* neon_vpmaxfv4hf */
    case 1719:  /* neon_vminfv4hf */
    case 1718:  /* neon_vmaxfv4hf */
    case 1717:  /* neon_vminfv8hf */
    case 1716:  /* neon_vmaxfv8hf */
    case 1715:  /* neon_vminfv4sf */
    case 1714:  /* neon_vmaxfv4sf */
    case 1713:  /* neon_vminfv2sf */
    case 1712:  /* neon_vmaxfv2sf */
    case 1711:  /* neon_vminuv4si */
    case 1710:  /* neon_vminsv4si */
    case 1709:  /* neon_vmaxuv4si */
    case 1708:  /* neon_vmaxsv4si */
    case 1707:  /* neon_vminuv2si */
    case 1706:  /* neon_vminsv2si */
    case 1705:  /* neon_vmaxuv2si */
    case 1704:  /* neon_vmaxsv2si */
    case 1703:  /* neon_vminuv8hi */
    case 1702:  /* neon_vminsv8hi */
    case 1701:  /* neon_vmaxuv8hi */
    case 1700:  /* neon_vmaxsv8hi */
    case 1699:  /* neon_vminuv4hi */
    case 1698:  /* neon_vminsv4hi */
    case 1697:  /* neon_vmaxuv4hi */
    case 1696:  /* neon_vmaxsv4hi */
    case 1695:  /* neon_vminuv16qi */
    case 1694:  /* neon_vminsv16qi */
    case 1693:  /* neon_vmaxuv16qi */
    case 1692:  /* neon_vmaxsv16qi */
    case 1691:  /* neon_vminuv8qi */
    case 1690:  /* neon_vminsv8qi */
    case 1689:  /* neon_vmaxuv8qi */
    case 1688:  /* neon_vmaxsv8qi */
    case 1669:  /* neon_vabdluv2si */
    case 1668:  /* neon_vabdlsv2si */
    case 1667:  /* neon_vabdluv4hi */
    case 1666:  /* neon_vabdlsv4hi */
    case 1665:  /* neon_vabdluv8qi */
    case 1664:  /* neon_vabdlsv8qi */
    case 1663:  /* neon_vabdfv4sf */
    case 1662:  /* neon_vabdfv2sf */
    case 1661:  /* neon_vabdv4hf */
    case 1660:  /* neon_vabdv8hf */
    case 1659:  /* neon_vabduv4si */
    case 1658:  /* neon_vabdsv4si */
    case 1657:  /* neon_vabduv2si */
    case 1656:  /* neon_vabdsv2si */
    case 1655:  /* neon_vabduv8hi */
    case 1654:  /* neon_vabdsv8hi */
    case 1653:  /* neon_vabduv4hi */
    case 1652:  /* neon_vabdsv4hi */
    case 1651:  /* neon_vabduv16qi */
    case 1650:  /* neon_vabdsv16qi */
    case 1649:  /* neon_vabduv8qi */
    case 1648:  /* neon_vabdsv8qi */
    case 1647:  /* neon_vtstv4si */
    case 1646:  /* neon_vtstv2si */
    case 1645:  /* neon_vtstv8hi */
    case 1644:  /* neon_vtstv4hi */
    case 1643:  /* neon_vtstv16qi */
    case 1642:  /* neon_vtstv8qi */
    case 1641:  /* neon_vcaltv4hf_fp16insn_unspec */
    case 1640:  /* neon_vcalev4hf_fp16insn_unspec */
    case 1639:  /* neon_vcagtv4hf_fp16insn_unspec */
    case 1638:  /* neon_vcagev4hf_fp16insn_unspec */
    case 1637:  /* neon_vcaltv8hf_fp16insn_unspec */
    case 1636:  /* neon_vcalev8hf_fp16insn_unspec */
    case 1635:  /* neon_vcagtv8hf_fp16insn_unspec */
    case 1634:  /* neon_vcagev8hf_fp16insn_unspec */
    case 1625:  /* neon_vcagtv4sf_insn_unspec */
    case 1624:  /* neon_vcagev4sf_insn_unspec */
    case 1623:  /* neon_vcagtv2sf_insn_unspec */
    case 1622:  /* neon_vcagev2sf_insn_unspec */
    case 1605:  /* neon_vclev4hf_fp16insn_unspec */
    case 1604:  /* neon_vcltv4hf_fp16insn_unspec */
    case 1603:  /* neon_vcgev4hf_fp16insn_unspec */
    case 1602:  /* neon_vcgtv4hf_fp16insn_unspec */
    case 1601:  /* neon_vceqv4hf_fp16insn_unspec */
    case 1600:  /* neon_vclev8hf_fp16insn_unspec */
    case 1599:  /* neon_vcltv8hf_fp16insn_unspec */
    case 1598:  /* neon_vcgev8hf_fp16insn_unspec */
    case 1597:  /* neon_vcgtv8hf_fp16insn_unspec */
    case 1596:  /* neon_vceqv8hf_fp16insn_unspec */
    case 1585:  /* neon_vclev4sf_insn_unspec */
    case 1584:  /* neon_vcltv4sf_insn_unspec */
    case 1583:  /* neon_vcgev4sf_insn_unspec */
    case 1582:  /* neon_vcgtv4sf_insn_unspec */
    case 1581:  /* neon_vceqv4sf_insn_unspec */
    case 1580:  /* neon_vclev2sf_insn_unspec */
    case 1579:  /* neon_vcltv2sf_insn_unspec */
    case 1578:  /* neon_vcgev2sf_insn_unspec */
    case 1577:  /* neon_vcgtv2sf_insn_unspec */
    case 1576:  /* neon_vceqv2sf_insn_unspec */
    case 1535:  /* neon_vrsubhnv2di */
    case 1534:  /* neon_vsubhnv2di */
    case 1533:  /* neon_vrsubhnv4si */
    case 1532:  /* neon_vsubhnv4si */
    case 1531:  /* neon_vrsubhnv8hi */
    case 1530:  /* neon_vsubhnv8hi */
    case 1529:  /* neon_vhsubuv4si */
    case 1528:  /* neon_vhsubsv4si */
    case 1527:  /* neon_vhsubuv2si */
    case 1526:  /* neon_vhsubsv2si */
    case 1525:  /* neon_vhsubuv8hi */
    case 1524:  /* neon_vhsubsv8hi */
    case 1523:  /* neon_vhsubuv4hi */
    case 1522:  /* neon_vhsubsv4hi */
    case 1521:  /* neon_vhsubuv16qi */
    case 1520:  /* neon_vhsubsv16qi */
    case 1519:  /* neon_vhsubuv8qi */
    case 1518:  /* neon_vhsubsv8qi */
    case 1517:  /* neon_vqsubuv2di */
    case 1516:  /* neon_vqsubsv2di */
    case 1515:  /* neon_vqsubudi */
    case 1514:  /* neon_vqsubsdi */
    case 1513:  /* neon_vqsubuv4si */
    case 1512:  /* neon_vqsubsv4si */
    case 1511:  /* neon_vqsubuv2si */
    case 1510:  /* neon_vqsubsv2si */
    case 1509:  /* neon_vqsubuv8hi */
    case 1508:  /* neon_vqsubsv8hi */
    case 1507:  /* neon_vqsubuv4hi */
    case 1506:  /* neon_vqsubsv4hi */
    case 1505:  /* neon_vqsubuv16qi */
    case 1504:  /* neon_vqsubsv16qi */
    case 1503:  /* neon_vqsubuv8qi */
    case 1502:  /* neon_vqsubsv8qi */
    case 1501:  /* neon_vsubwuv2si */
    case 1500:  /* neon_vsubwsv2si */
    case 1499:  /* neon_vsubwuv4hi */
    case 1498:  /* neon_vsubwsv4hi */
    case 1497:  /* neon_vsubwuv8qi */
    case 1496:  /* neon_vsubwsv8qi */
    case 1495:  /* neon_vsubluv2si */
    case 1494:  /* neon_vsublsv2si */
    case 1493:  /* neon_vsubluv4hi */
    case 1492:  /* neon_vsublsv4hi */
    case 1491:  /* neon_vsubluv8qi */
    case 1490:  /* neon_vsublsv8qi */
    case 1489:  /* neon_vsubv4sf_unspec */
    case 1488:  /* neon_vsubv2sf_unspec */
    case 1487:  /* neon_vqdmullv2si */
    case 1486:  /* neon_vqdmullv4hi */
    case 1485:  /* neon_vmullpv2si */
    case 1484:  /* neon_vmulluv2si */
    case 1483:  /* neon_vmullsv2si */
    case 1482:  /* neon_vmullpv4hi */
    case 1481:  /* neon_vmulluv4hi */
    case 1480:  /* neon_vmullsv4hi */
    case 1479:  /* neon_vmullpv8qi */
    case 1478:  /* neon_vmulluv8qi */
    case 1477:  /* neon_vmullsv8qi */
    case 1464:  /* neon_vqrdmulhv4si */
    case 1463:  /* neon_vqdmulhv4si */
    case 1462:  /* neon_vqrdmulhv8hi */
    case 1461:  /* neon_vqdmulhv8hi */
    case 1460:  /* neon_vqrdmulhv2si */
    case 1459:  /* neon_vqdmulhv2si */
    case 1458:  /* neon_vqrdmulhv4hi */
    case 1457:  /* neon_vqdmulhv4hi */
    case 1400:  /* neon_vmulfv4sf */
    case 1399:  /* neon_vmulfv2sf */
    case 1398:  /* neon_vmulpv16qi */
    case 1397:  /* neon_vmulpv8qi */
    case 1396:  /* neon_vraddhnv2di */
    case 1395:  /* neon_vaddhnv2di */
    case 1394:  /* neon_vraddhnv4si */
    case 1393:  /* neon_vaddhnv4si */
    case 1392:  /* neon_vraddhnv8hi */
    case 1391:  /* neon_vaddhnv8hi */
    case 1390:  /* neon_vqadduv2di */
    case 1389:  /* neon_vqaddsv2di */
    case 1388:  /* neon_vqaddudi */
    case 1387:  /* neon_vqaddsdi */
    case 1386:  /* neon_vqadduv4si */
    case 1385:  /* neon_vqaddsv4si */
    case 1384:  /* neon_vqadduv2si */
    case 1383:  /* neon_vqaddsv2si */
    case 1382:  /* neon_vqadduv8hi */
    case 1381:  /* neon_vqaddsv8hi */
    case 1380:  /* neon_vqadduv4hi */
    case 1379:  /* neon_vqaddsv4hi */
    case 1378:  /* neon_vqadduv16qi */
    case 1377:  /* neon_vqaddsv16qi */
    case 1376:  /* neon_vqadduv8qi */
    case 1375:  /* neon_vqaddsv8qi */
    case 1374:  /* neon_vhadduv4si */
    case 1373:  /* neon_vhaddsv4si */
    case 1372:  /* neon_vrhadduv4si */
    case 1371:  /* neon_vrhaddsv4si */
    case 1370:  /* neon_vhadduv2si */
    case 1369:  /* neon_vhaddsv2si */
    case 1368:  /* neon_vrhadduv2si */
    case 1367:  /* neon_vrhaddsv2si */
    case 1366:  /* neon_vhadduv8hi */
    case 1365:  /* neon_vhaddsv8hi */
    case 1364:  /* neon_vrhadduv8hi */
    case 1363:  /* neon_vrhaddsv8hi */
    case 1362:  /* neon_vhadduv4hi */
    case 1361:  /* neon_vhaddsv4hi */
    case 1360:  /* neon_vrhadduv4hi */
    case 1359:  /* neon_vrhaddsv4hi */
    case 1358:  /* neon_vhadduv16qi */
    case 1357:  /* neon_vhaddsv16qi */
    case 1356:  /* neon_vrhadduv16qi */
    case 1355:  /* neon_vrhaddsv16qi */
    case 1354:  /* neon_vhadduv8qi */
    case 1353:  /* neon_vhaddsv8qi */
    case 1352:  /* neon_vrhadduv8qi */
    case 1351:  /* neon_vrhaddsv8qi */
    case 1350:  /* neon_vaddwuv2si */
    case 1349:  /* neon_vaddwsv2si */
    case 1348:  /* neon_vaddwuv4hi */
    case 1347:  /* neon_vaddwsv4hi */
    case 1346:  /* neon_vaddwuv8qi */
    case 1345:  /* neon_vaddwsv8qi */
    case 1344:  /* neon_vaddluv2si */
    case 1343:  /* neon_vaddlsv2si */
    case 1342:  /* neon_vaddluv4hi */
    case 1341:  /* neon_vaddlsv4hi */
    case 1340:  /* neon_vaddluv8qi */
    case 1339:  /* neon_vaddlsv8qi */
    case 1338:  /* neon_vaddv4sf_unspec */
    case 1337:  /* neon_vaddv2sf_unspec */
    case 1320:  /* neon_vpumaxv2si */
    case 1319:  /* neon_vpumaxv4hi */
    case 1318:  /* neon_vpumaxv8qi */
    case 1317:  /* neon_vpuminv2si */
    case 1316:  /* neon_vpuminv4hi */
    case 1315:  /* neon_vpuminv8qi */
    case 1314:  /* neon_vpsmaxv2sf */
    case 1313:  /* neon_vpsmaxv2si */
    case 1312:  /* neon_vpsmaxv4hi */
    case 1311:  /* neon_vpsmaxv8qi */
    case 1310:  /* neon_vpsminv2sf */
    case 1309:  /* neon_vpsminv2si */
    case 1308:  /* neon_vpsminv4hi */
    case 1307:  /* neon_vpsminv8qi */
    case 1306:  /* neon_vpaddv4hf */
    case 1305:  /* neon_vpadd_internalv2sf */
    case 1304:  /* neon_vpadd_internalv2si */
    case 1303:  /* neon_vpadd_internalv4hi */
    case 1302:  /* neon_vpadd_internalv8qi */
    case 1260:  /* unsigned_shift_di3_neon */
    case 1259:  /* signed_shift_di3_neon */
    case 1255:  /* ashlv2di3_unsigned */
    case 1254:  /* ashlv4si3_unsigned */
    case 1253:  /* ashlv2si3_unsigned */
    case 1252:  /* ashlv8hi3_unsigned */
    case 1251:  /* ashlv4hi3_unsigned */
    case 1250:  /* ashlv16qi3_unsigned */
    case 1249:  /* ashlv8qi3_unsigned */
    case 1248:  /* ashlv2di3_signed */
    case 1247:  /* ashlv4si3_signed */
    case 1246:  /* ashlv2si3_signed */
    case 1245:  /* ashlv8hi3_signed */
    case 1244:  /* ashlv4hi3_signed */
    case 1243:  /* ashlv16qi3_signed */
    case 1242:  /* ashlv8qi3_signed */
    case 800:  /* fmindf3 */
    case 799:  /* fmaxdf3 */
    case 798:  /* fminsf3 */
    case 797:  /* fmaxsf3 */
    case 796:  /* neon_vminnmhf */
    case 795:  /* neon_vmaxnmhf */
    case 733:  /* neon_vrsqrtshf */
    case 605:  /* iwmmxt_wqmulwmr */
    case 604:  /* iwmmxt_wqmulmr */
    case 603:  /* iwmmxt_wqmulwm */
    case 602:  /* iwmmxt_wqmulm */
    case 578:  /* iwmmxt_wsadhz */
    case 577:  /* iwmmxt_wsadbz */
    case 494:  /* gtv2si3 */
    case 493:  /* gtv4hi3 */
    case 492:  /* gtv8qi3 */
    case 491:  /* gtuv2si3 */
    case 490:  /* gtuv4hi3 */
    case 489:  /* gtuv8qi3 */
    case 488:  /* eqv2si3 */
    case 487:  /* eqv4hi3 */
    case 486:  /* eqv8qi3 */
    case 485:  /* iwmmxt_wshufh */
    case 468:  /* iwmmxt_wmacuz */
    case 466:  /* iwmmxt_wmacsz */
    case 345:  /* crc32cw */
    case 344:  /* crc32ch */
    case 343:  /* crc32cb */
    case 342:  /* crc32w */
    case 341:  /* crc32h */
    case 340:  /* crc32b */
    case 233:  /* probe_stack_range */
    case 184:  /* pic_load_addr_unified */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 950:  /* *neon_movxi */
    case 949:  /* *neon_movci */
    case 948:  /* *neon_movoi */
    case 947:  /* *neon_movei */
    case 946:  /* *neon_movti */
    case 945:  /* *neon_movv2di */
    case 944:  /* *neon_movv4sf */
    case 943:  /* *neon_movv4si */
    case 942:  /* *neon_movv8hf */
    case 941:  /* *neon_movv8hi */
    case 940:  /* *neon_movv16qi */
    case 939:  /* *neon_movdi */
    case 938:  /* *neon_movv2sf */
    case 937:  /* *neon_movv2si */
    case 936:  /* *neon_movv4hf */
    case 935:  /* *neon_movv4hi */
    case 934:  /* *neon_movv8qi */
    case 880:  /* *thumb2_movhi_insn */
    case 878:  /* *thumb2_movsi_insn */
    case 835:  /* *thumb_movdf_insn */
    case 834:  /* *thumb1_movsf_insn */
    case 833:  /* *thumb1_movhf */
    case 832:  /* *thumb1_movqi_insn */
    case 831:  /* *thumb1_movhi_insn */
    case 830:  /* *thumb1_movsi_insn */
    case 829:  /* *thumb1_movdi_insn */
    case 804:  /* no_literal_pool_sf_immediate */
    case 803:  /* no_literal_pool_df_immediate */
    case 658:  /* *thumb2_movdf_vfp */
    case 657:  /* *movdf_vfp */
    case 656:  /* *thumb2_movsf_vfp */
    case 655:  /* *movsf_vfp */
    case 654:  /* *movhf_vfp */
    case 653:  /* *movhf_vfp_neon */
    case 652:  /* *movhf_vfp_fp16 */
    case 651:  /* *movdi_vfp */
    case 650:  /* *thumb2_movsi_vfp */
    case 649:  /* *arm_movsi_vfp */
    case 648:  /* *thumb2_movhi_fp16 */
    case 647:  /* *arm_movhi_fp16 */
    case 646:  /* *thumb2_movhi_vfp */
    case 645:  /* *arm_movhi_vfp */
    case 434:  /* movv8qi_internal */
    case 433:  /* movv4hi_internal */
    case 432:  /* movv2si_internal */
    case 430:  /* *iwmmxt_movsi_insn */
    case 429:  /* *iwmmxt_arm_movdi */
    case 196:  /* *movdf_soft_insn */
    case 195:  /* *arm_movsf_soft_insn */
    case 194:  /* *arm32_movhf */
    case 193:  /* *arm_movqi_insn */
    case 192:  /* *movhi_bytes */
    case 191:  /* *movhi_insn_arch4 */
    case 183:  /* *arm_movsi_insn */
    case 181:  /* *arm_movdi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 854:  /* *thumb_jump */
    case 215:  /* *arm_jump */
    case 173:  /* *compareqi_eq0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 160:  /* *notsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 159:  /* *notsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 876:  /* *thumb2_neg_abssi2 */
    case 156:  /* *arm_neg_abssi2 */
    case 154:  /* *negdi_zero_extendsidi */
    case 153:  /* *negdi_extendsidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 727:  /* fixuns_truncdfsi2 */
    case 726:  /* fixuns_truncsfsi2 */
    case 725:  /* *truncsidf2_vfp */
    case 724:  /* *truncsisf2_vfp */
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
    case 330:  /* *arm_revsh */
    case 152:  /* *zextendsidi_negsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 150:  /* *negsi2_carryin_compare */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 927:  /* *thumb2_negsi2_short */
    case 926:  /* *thumb2_one_cmplsi2_short */
    case 875:  /* *thumb2_abssi2 */
    case 819:  /* *thumb1_negdi2 */
    case 155:  /* *arm_abssi2 */
    case 149:  /* *negdi2_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 148:  /* negdi2_compare */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1062:  /* fmav4hf4_intrinsic */
    case 1061:  /* fmav8hf4_intrinsic */
    case 1060:  /* fmav4hf4 */
    case 1059:  /* fmav8hf4 */
    case 1058:  /* fmav4sf4_intrinsic */
    case 1057:  /* fmav2sf4_intrinsic */
    case 1056:  /* fmav4sf4 */
    case 1055:  /* fmav2sf4 */
    case 708:  /* fmadf4 */
    case 707:  /* fmasf4 */
    case 706:  /* fmahf4 */
    case 145:  /* extzv_t2 */
    case 144:  /* *extv_reg */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2689:  /* arm_load_acquire_exclusivehi */
    case 2688:  /* arm_load_acquire_exclusiveqi */
    case 2687:  /* arm_load_exclusivehi */
    case 2686:  /* arm_load_exclusiveqi */
    case 1092:  /* neon_vcvtauv4sfv4si */
    case 1091:  /* neon_vcvtmuv4sfv4si */
    case 1090:  /* neon_vcvtpuv4sfv4si */
    case 1089:  /* neon_vcvtav4sfv4si */
    case 1088:  /* neon_vcvtmv4sfv4si */
    case 1087:  /* neon_vcvtpv4sfv4si */
    case 1086:  /* neon_vcvtauv2sfv2si */
    case 1085:  /* neon_vcvtmuv2sfv2si */
    case 1084:  /* neon_vcvtpuv2sfv2si */
    case 1083:  /* neon_vcvtav2sfv2si */
    case 1082:  /* neon_vcvtmv2sfv2si */
    case 1081:  /* neon_vcvtpv2sfv2si */
    case 790:  /* lroundudfsi2 */
    case 789:  /* lfloorudfsi2 */
    case 788:  /* lceiludfsi2 */
    case 787:  /* lrounddfsi2 */
    case 786:  /* lfloordfsi2 */
    case 785:  /* lceildfsi2 */
    case 784:  /* lroundusfsi2 */
    case 783:  /* lfloorusfsi2 */
    case 782:  /* lceilusfsi2 */
    case 781:  /* lroundsfsi2 */
    case 780:  /* lfloorsfsi2 */
    case 779:  /* lceilsfsi2 */
    case 141:  /* unaligned_loadhiu */
    case 140:  /* unaligned_loadhis */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2693:  /* arm_load_acquire_exclusivedi */
    case 2692:  /* arm_load_exclusivedi */
    case 2691:  /* arm_load_acquire_exclusivesi */
    case 2690:  /* arm_load_exclusivesi */
    case 2601:  /* arm_atomic_loaddi2_ldrd */
    case 2580:  /* crypto_aesimc */
    case 2579:  /* crypto_aesmc */
    case 2513:  /* neon_vst4qbv4sf */
    case 2512:  /* neon_vst4qbv4si */
    case 2511:  /* neon_vst4qbv8hf */
    case 2510:  /* neon_vst4qbv8hi */
    case 2509:  /* neon_vst4qbv16qi */
    case 2508:  /* neon_vst4qav4sf */
    case 2507:  /* neon_vst4qav4si */
    case 2506:  /* neon_vst4qav8hf */
    case 2505:  /* neon_vst4qav8hi */
    case 2504:  /* neon_vst4qav16qi */
    case 2503:  /* neon_vst4di */
    case 2502:  /* neon_vst4v2sf */
    case 2501:  /* neon_vst4v2si */
    case 2500:  /* neon_vst4v4hf */
    case 2499:  /* neon_vst4v4hi */
    case 2498:  /* neon_vst4v8qi */
    case 2497:  /* neon_vld4_dupdi */
    case 2496:  /* neon_vld4_dupv2sf */
    case 2495:  /* neon_vld4_dupv2si */
    case 2494:  /* neon_vld4_dupv4hf */
    case 2493:  /* neon_vld4_dupv4hi */
    case 2492:  /* neon_vld4_dupv8qi */
    case 2477:  /* neon_vld4qav4sf */
    case 2476:  /* neon_vld4qav4si */
    case 2475:  /* neon_vld4qav8hf */
    case 2474:  /* neon_vld4qav8hi */
    case 2473:  /* neon_vld4qav16qi */
    case 2472:  /* neon_vld4di */
    case 2471:  /* neon_vld4v2sf */
    case 2470:  /* neon_vld4v2si */
    case 2469:  /* neon_vld4v4hf */
    case 2468:  /* neon_vld4v4hi */
    case 2467:  /* neon_vld4v8qi */
    case 2457:  /* neon_vst3qbv4sf */
    case 2456:  /* neon_vst3qbv4si */
    case 2455:  /* neon_vst3qbv8hf */
    case 2454:  /* neon_vst3qbv8hi */
    case 2453:  /* neon_vst3qbv16qi */
    case 2452:  /* neon_vst3qav4sf */
    case 2451:  /* neon_vst3qav4si */
    case 2450:  /* neon_vst3qav8hf */
    case 2449:  /* neon_vst3qav8hi */
    case 2448:  /* neon_vst3qav16qi */
    case 2447:  /* neon_vst3di */
    case 2446:  /* neon_vst3v2sf */
    case 2445:  /* neon_vst3v2si */
    case 2444:  /* neon_vst3v4hf */
    case 2443:  /* neon_vst3v4hi */
    case 2442:  /* neon_vst3v8qi */
    case 2441:  /* neon_vld3_dupdi */
    case 2440:  /* neon_vld3_dupv2sf */
    case 2439:  /* neon_vld3_dupv2si */
    case 2438:  /* neon_vld3_dupv4hf */
    case 2437:  /* neon_vld3_dupv4hi */
    case 2436:  /* neon_vld3_dupv8qi */
    case 2421:  /* neon_vld3qav4sf */
    case 2420:  /* neon_vld3qav4si */
    case 2419:  /* neon_vld3qav8hf */
    case 2418:  /* neon_vld3qav8hi */
    case 2417:  /* neon_vld3qav16qi */
    case 2416:  /* neon_vld3di */
    case 2415:  /* neon_vld3v2sf */
    case 2414:  /* neon_vld3v2si */
    case 2413:  /* neon_vld3v4hf */
    case 2412:  /* neon_vld3v4hi */
    case 2411:  /* neon_vld3v8qi */
    case 2401:  /* neon_vst2v4sf */
    case 2400:  /* neon_vst2v4si */
    case 2399:  /* neon_vst2v8hf */
    case 2398:  /* neon_vst2v8hi */
    case 2397:  /* neon_vst2v16qi */
    case 2396:  /* neon_vst2di */
    case 2395:  /* neon_vst2v2sf */
    case 2394:  /* neon_vst2v2si */
    case 2393:  /* neon_vst2v4hf */
    case 2392:  /* neon_vst2v4hi */
    case 2391:  /* neon_vst2v8qi */
    case 2390:  /* neon_vld2_dupdi */
    case 2389:  /* neon_vld2_dupv2sf */
    case 2388:  /* neon_vld2_dupv2si */
    case 2387:  /* neon_vld2_dupv4hf */
    case 2386:  /* neon_vld2_dupv4hi */
    case 2385:  /* neon_vld2_dupv8qi */
    case 2375:  /* neon_vld2v4sf */
    case 2374:  /* neon_vld2v4si */
    case 2373:  /* neon_vld2v8hf */
    case 2372:  /* neon_vld2v8hi */
    case 2371:  /* neon_vld2v16qi */
    case 2370:  /* neon_vld2di */
    case 2369:  /* neon_vld2v2sf */
    case 2368:  /* neon_vld2v2si */
    case 2367:  /* neon_vld2v4hf */
    case 2366:  /* neon_vld2v4hi */
    case 2365:  /* neon_vld2v8qi */
    case 2352:  /* neon_vst1v2di */
    case 2351:  /* neon_vst1di */
    case 2350:  /* neon_vst1v4sf */
    case 2349:  /* neon_vst1v2sf */
    case 2348:  /* neon_vst1v8hf */
    case 2347:  /* neon_vst1v4hf */
    case 2346:  /* neon_vst1v4si */
    case 2345:  /* neon_vst1v2si */
    case 2344:  /* neon_vst1v8hi */
    case 2343:  /* neon_vst1v4hi */
    case 2342:  /* neon_vst1v16qi */
    case 2341:  /* neon_vst1v8qi */
    case 2317:  /* neon_vld1v2di */
    case 2316:  /* neon_vld1di */
    case 2315:  /* neon_vld1v4sf */
    case 2314:  /* neon_vld1v2sf */
    case 2313:  /* neon_vld1v8hf */
    case 2312:  /* neon_vld1v4hf */
    case 2311:  /* neon_vld1v4si */
    case 2310:  /* neon_vld1v2si */
    case 2309:  /* neon_vld1v8hi */
    case 2308:  /* neon_vld1v4hi */
    case 2307:  /* neon_vld1v16qi */
    case 2306:  /* neon_vld1v8qi */
    case 2046:  /* neon_vrev16v16qi */
    case 2045:  /* neon_vrev16v8qi */
    case 2044:  /* neon_vrev32v8hi */
    case 2043:  /* neon_vrev32v16qi */
    case 2042:  /* neon_vrev32v4hi */
    case 2041:  /* neon_vrev32v8qi */
    case 2040:  /* neon_vrev64v2di */
    case 2039:  /* neon_vrev64v4sf */
    case 2038:  /* neon_vrev64v2sf */
    case 2037:  /* neon_vrev64v8hf */
    case 2036:  /* neon_vrev64v4hf */
    case 2035:  /* neon_vrev64v4si */
    case 2034:  /* neon_vrev64v2si */
    case 2033:  /* neon_vrev64v8hi */
    case 2032:  /* neon_vrev64v4hi */
    case 2031:  /* neon_vrev64v16qi */
    case 2030:  /* neon_vrev64v8qi */
    case 1963:  /* neon_vmovluv2si */
    case 1962:  /* neon_vmovlsv2si */
    case 1961:  /* neon_vmovluv4hi */
    case 1960:  /* neon_vmovlsv4hi */
    case 1959:  /* neon_vmovluv8qi */
    case 1958:  /* neon_vmovlsv8qi */
    case 1957:  /* neon_vqmovunv2di */
    case 1956:  /* neon_vqmovunv4si */
    case 1955:  /* neon_vqmovunv8hi */
    case 1954:  /* neon_vqmovnuv2di */
    case 1953:  /* neon_vqmovnsv2di */
    case 1952:  /* neon_vqmovnuv4si */
    case 1951:  /* neon_vqmovnsv4si */
    case 1950:  /* neon_vqmovnuv8hi */
    case 1949:  /* neon_vqmovnsv8hi */
    case 1948:  /* neon_vmovnv2di */
    case 1947:  /* neon_vmovnv4si */
    case 1946:  /* neon_vmovnv8hi */
    case 1945:  /* neon_vcvtpuv4hf */
    case 1944:  /* neon_vcvtpsv4hf */
    case 1943:  /* neon_vcvtnuv4hf */
    case 1942:  /* neon_vcvtnsv4hf */
    case 1941:  /* neon_vcvtmuv4hf */
    case 1940:  /* neon_vcvtmsv4hf */
    case 1939:  /* neon_vcvtauv4hf */
    case 1938:  /* neon_vcvtasv4hf */
    case 1937:  /* neon_vcvtpuv8hf */
    case 1936:  /* neon_vcvtpsv8hf */
    case 1935:  /* neon_vcvtnuv8hf */
    case 1934:  /* neon_vcvtnsv8hf */
    case 1933:  /* neon_vcvtmuv8hf */
    case 1932:  /* neon_vcvtmsv8hf */
    case 1931:  /* neon_vcvtauv8hf */
    case 1930:  /* neon_vcvtasv8hf */
    case 1913:  /* neon_vcvtuv4hf */
    case 1912:  /* neon_vcvtsv4hf */
    case 1911:  /* neon_vcvtuv8hf */
    case 1910:  /* neon_vcvtsv8hf */
    case 1909:  /* neon_vcvtuv8hi */
    case 1908:  /* neon_vcvtsv8hi */
    case 1907:  /* neon_vcvtuv4hi */
    case 1906:  /* neon_vcvtsv4hi */
    case 1905:  /* neon_vcvtv4hfv4sf */
    case 1904:  /* neon_vcvtv4sfv4hf */
    case 1903:  /* neon_vcvtuv4si */
    case 1902:  /* neon_vcvtsv4si */
    case 1901:  /* neon_vcvtuv2si */
    case 1900:  /* neon_vcvtsv2si */
    case 1899:  /* neon_vcvtuv4sf */
    case 1898:  /* neon_vcvtsv4sf */
    case 1897:  /* neon_vcvtuv2sf */
    case 1896:  /* neon_vcvtsv2sf */
    case 1830:  /* neon_vrsqrtev4sf */
    case 1829:  /* neon_vrsqrtev4si */
    case 1828:  /* neon_vrsqrtev2sf */
    case 1827:  /* neon_vrsqrtev2si */
    case 1826:  /* neon_vrecpev4sf */
    case 1825:  /* neon_vrecpev4si */
    case 1824:  /* neon_vrecpev2sf */
    case 1823:  /* neon_vrecpev2si */
    case 1822:  /* neon_vrecpev4hf */
    case 1821:  /* neon_vrecpev8hf */
    case 1812:  /* neon_vclsv4si */
    case 1811:  /* neon_vclsv2si */
    case 1810:  /* neon_vclsv8hi */
    case 1809:  /* neon_vclsv4hi */
    case 1808:  /* neon_vclsv16qi */
    case 1807:  /* neon_vclsv8qi */
    case 1806:  /* neon_vqnegv4si */
    case 1805:  /* neon_vqnegv2si */
    case 1804:  /* neon_vqnegv8hi */
    case 1803:  /* neon_vqnegv4hi */
    case 1802:  /* neon_vqnegv16qi */
    case 1801:  /* neon_vqnegv8qi */
    case 1787:  /* neon_vqabsv4si */
    case 1786:  /* neon_vqabsv2si */
    case 1785:  /* neon_vqabsv8hi */
    case 1784:  /* neon_vqabsv4hi */
    case 1783:  /* neon_vqabsv16qi */
    case 1782:  /* neon_vqabsv8qi */
    case 1745:  /* neon_vpaddluv4si */
    case 1744:  /* neon_vpaddlsv4si */
    case 1743:  /* neon_vpaddluv2si */
    case 1742:  /* neon_vpaddlsv2si */
    case 1741:  /* neon_vpaddluv8hi */
    case 1740:  /* neon_vpaddlsv8hi */
    case 1739:  /* neon_vpaddluv4hi */
    case 1738:  /* neon_vpaddlsv4hi */
    case 1737:  /* neon_vpaddluv16qi */
    case 1736:  /* neon_vpaddlsv16qi */
    case 1735:  /* neon_vpaddluv8qi */
    case 1734:  /* neon_vpaddlsv8qi */
    case 1301:  /* arm_reduc_plus_internal_v2di */
    case 1256:  /* neon_load_count */
    case 1195:  /* neon_vrsqrtev4hf */
    case 1194:  /* neon_vrsqrtev8hf */
    case 1193:  /* neon_vrndxv4hf */
    case 1192:  /* neon_vrndpv4hf */
    case 1191:  /* neon_vrndnv4hf */
    case 1190:  /* neon_vrndmv4hf */
    case 1189:  /* neon_vrndav4hf */
    case 1188:  /* neon_vrndv4hf */
    case 1187:  /* neon_vrndxv8hf */
    case 1186:  /* neon_vrndpv8hf */
    case 1185:  /* neon_vrndnv8hf */
    case 1184:  /* neon_vrndmv8hf */
    case 1183:  /* neon_vrndav8hf */
    case 1182:  /* neon_vrndv8hf */
    case 1080:  /* neon_vrintnv4sf */
    case 1079:  /* neon_vrintav4sf */
    case 1078:  /* neon_vrintxv4sf */
    case 1077:  /* neon_vrintmv4sf */
    case 1076:  /* neon_vrintzv4sf */
    case 1075:  /* neon_vrintpv4sf */
    case 1074:  /* neon_vrintnv2sf */
    case 1073:  /* neon_vrintav2sf */
    case 1072:  /* neon_vrintxv2sf */
    case 1071:  /* neon_vrintmv2sf */
    case 1070:  /* neon_vrintzv2sf */
    case 1069:  /* neon_vrintpv2sf */
    case 974:  /* *movmisalignv2di_neon_load */
    case 973:  /* *movmisalignv4sf_neon_load */
    case 972:  /* *movmisalignv4si_neon_load */
    case 971:  /* *movmisalignv8hf_neon_load */
    case 970:  /* *movmisalignv8hi_neon_load */
    case 969:  /* *movmisalignv16qi_neon_load */
    case 968:  /* *movmisalignv2di_neon_store */
    case 967:  /* *movmisalignv4sf_neon_store */
    case 966:  /* *movmisalignv4si_neon_store */
    case 965:  /* *movmisalignv8hf_neon_store */
    case 964:  /* *movmisalignv8hi_neon_store */
    case 963:  /* *movmisalignv16qi_neon_store */
    case 962:  /* *movmisaligndi_neon_load */
    case 961:  /* *movmisalignv2sf_neon_load */
    case 960:  /* *movmisalignv2si_neon_load */
    case 959:  /* *movmisalignv4hf_neon_load */
    case 958:  /* *movmisalignv4hi_neon_load */
    case 957:  /* *movmisalignv8qi_neon_load */
    case 956:  /* *movmisaligndi_neon_store */
    case 955:  /* *movmisalignv2sf_neon_store */
    case 954:  /* *movmisalignv2si_neon_store */
    case 953:  /* *movmisalignv4hf_neon_store */
    case 952:  /* *movmisalignv4hi_neon_store */
    case 951:  /* *movmisalignv8qi_neon_store */
    case 778:  /* rounddf2 */
    case 777:  /* rintdf2 */
    case 776:  /* nearbyintdf2 */
    case 775:  /* floordf2 */
    case 774:  /* ceildf2 */
    case 773:  /* btruncdf2 */
    case 772:  /* roundsf2 */
    case 771:  /* rintsf2 */
    case 770:  /* nearbyintsf2 */
    case 769:  /* floorsf2 */
    case 768:  /* ceilsf2 */
    case 767:  /* btruncsf2 */
    case 765:  /* neon_vcvtphusi */
    case 764:  /* neon_vcvtphssi */
    case 763:  /* neon_vcvtnhusi */
    case 762:  /* neon_vcvtnhssi */
    case 761:  /* neon_vcvtmhusi */
    case 760:  /* neon_vcvtmhssi */
    case 759:  /* neon_vcvtahusi */
    case 758:  /* neon_vcvtahssi */
    case 753:  /* neon_vcvthusi */
    case 752:  /* neon_vcvthssi */
    case 751:  /* neon_vcvthuhf */
    case 750:  /* neon_vcvthshf */
    case 675:  /* neon_vrndihf */
    case 674:  /* neon_vrndxhf */
    case 673:  /* neon_vrndphf */
    case 672:  /* neon_vrndnhf */
    case 671:  /* neon_vrndmhf */
    case 670:  /* neon_vrndahf */
    case 669:  /* neon_vrndhf */
    case 581:  /* iwmmxt_wabsv8qi3 */
    case 580:  /* iwmmxt_wabsv4hi3 */
    case 579:  /* iwmmxt_wabsv2si3 */
    case 568:  /* iwmmxt_waccw */
    case 567:  /* iwmmxt_wacch */
    case 566:  /* iwmmxt_waccb */
    case 565:  /* iwmmxt_tmovmskw */
    case 564:  /* iwmmxt_tmovmskh */
    case 563:  /* iwmmxt_tmovmskb */
    case 320:  /* rbitsi2 */
    case 186:  /* pic_load_addr_thumb1 */
    case 185:  /* pic_load_addr_32bit */
    case 143:  /* unaligned_storehi */
    case 142:  /* unaligned_storesi */
    case 139:  /* unaligned_loadsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 138:  /* *not_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 137:  /* *not_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 136:  /* *not_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 135:  /* *shiftsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 134:  /* *shiftsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 133:  /* *arm_shiftsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 132:  /* *satsi_smax_shift */
    case 131:  /* *satsi_smin_shift */
    case 130:  /* *satsi_smax_shift */
    case 129:  /* *satsi_smin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 128:  /* *satsi_smax */
    case 127:  /* *satsi_smin */
    case 126:  /* *satsi_smax */
    case 125:  /* *satsi_smin */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 901:  /* *thumb2_cond_sub */
    case 259:  /* *cond_sub */
    case 124:  /* *minmax_arithsi_non_canon */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 123:  /* *minmax_arithsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 913:  /* *thumb2_shiftsi3_short */
    case 912:  /* *thumb2_alusi3_short */
    case 122:  /* *store_minmaxsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 2759:  /* arm_usatsihi */
    case 2570:  /* neon_vec_pack_trunc_v2di */
    case 2569:  /* neon_vec_pack_trunc_v4si */
    case 2568:  /* neon_vec_pack_trunc_v8hi */
    case 2558:  /* neon_unpacku_v2si */
    case 2557:  /* neon_unpacks_v2si */
    case 2556:  /* neon_unpacku_v4hi */
    case 2555:  /* neon_unpacks_v4hi */
    case 2554:  /* neon_unpacku_v8qi */
    case 2553:  /* neon_unpacks_v8qi */
    case 2340:  /* neon_vld1_dupv2di */
    case 2339:  /* neon_vld1_dupv4sf */
    case 2338:  /* neon_vld1_dupv4si */
    case 2337:  /* neon_vld1_dupv8hf */
    case 2336:  /* neon_vld1_dupv8hi */
    case 2335:  /* neon_vld1_dupv16qi */
    case 2334:  /* neon_vld1_dupv2sf */
    case 2333:  /* neon_vld1_dupv2si */
    case 2332:  /* neon_vld1_dupv4hf */
    case 2331:  /* neon_vld1_dupv4hi */
    case 2330:  /* neon_vld1_dupv8qi */
    case 1895:  /* fixuns_truncv4sfv4si2 */
    case 1894:  /* fixuns_truncv2sfv2si2 */
    case 1893:  /* fix_truncv4sfv4si2 */
    case 1892:  /* fix_truncv2sfv2si2 */
    case 1891:  /* floatunsv4siv4sf2 */
    case 1890:  /* floatunsv2siv2sf2 */
    case 1889:  /* floatv4siv4sf2 */
    case 1888:  /* floatv2siv2sf2 */
    case 1859:  /* neon_vdup_nv2di */
    case 1858:  /* neon_vdup_nv4sf */
    case 1857:  /* neon_vdup_nv4si */
    case 1856:  /* neon_vdup_nv2sf */
    case 1855:  /* neon_vdup_nv2si */
    case 1854:  /* neon_vdup_nv8hf */
    case 1853:  /* neon_vdup_nv4hf */
    case 1852:  /* neon_vdup_nv8hi */
    case 1851:  /* neon_vdup_nv16qi */
    case 1850:  /* neon_vdup_nv4hi */
    case 1849:  /* neon_vdup_nv8qi */
    case 1820:  /* popcountv16qi2 */
    case 1819:  /* popcountv8qi2 */
    case 1818:  /* clzv4si2 */
    case 1817:  /* clzv2si2 */
    case 1816:  /* clzv8hi2 */
    case 1815:  /* clzv4hi2 */
    case 1814:  /* clzv16qi2 */
    case 1813:  /* clzv8qi2 */
    case 1792:  /* neon_bswapv2di */
    case 1791:  /* neon_bswapv4si */
    case 1790:  /* neon_bswapv2si */
    case 1789:  /* neon_bswapv8hi */
    case 1788:  /* neon_bswapv4hi */
    case 1181:  /* negv4hf2 */
    case 1180:  /* absv4hf2 */
    case 1179:  /* negv8hf2 */
    case 1178:  /* absv8hf2 */
    case 1176:  /* negv4sf2 */
    case 1175:  /* negv2sf2 */
    case 1174:  /* negv4si2 */
    case 1173:  /* negv2si2 */
    case 1172:  /* negv8hi2 */
    case 1171:  /* negv4hi2 */
    case 1170:  /* negv16qi2 */
    case 1169:  /* negv8qi2 */
    case 1168:  /* absv4sf2 */
    case 1167:  /* absv2sf2 */
    case 1166:  /* absv4si2 */
    case 1165:  /* absv2si2 */
    case 1164:  /* absv8hi2 */
    case 1163:  /* absv4hi2 */
    case 1162:  /* absv16qi2 */
    case 1161:  /* absv8qi2 */
    case 1160:  /* one_cmplv2di2 */
    case 1159:  /* one_cmplv4sf2 */
    case 1158:  /* one_cmplv2sf2 */
    case 1157:  /* one_cmplv8hf2 */
    case 1156:  /* one_cmplv4hf2 */
    case 1155:  /* one_cmplv4si2 */
    case 1154:  /* one_cmplv2si2 */
    case 1153:  /* one_cmplv8hi2 */
    case 1152:  /* one_cmplv4hi2 */
    case 1151:  /* one_cmplv16qi2 */
    case 1150:  /* one_cmplv8qi2 */
    case 906:  /* thumb2_zero_extendqisi2_v6 */
    case 905:  /* *thumb2_zero_extendhisi2_v6 */
    case 904:  /* *thumb2_extendqisi_v6 */
    case 828:  /* thumb1_extendqisi2 */
    case 826:  /* *thumb1_zero_extendqisi2_v6 */
    case 825:  /* *thumb1_zero_extendqisi2 */
    case 824:  /* *thumb1_zero_extendhisi2 */
    case 823:  /* *thumb1_one_cmplsi2 */
    case 820:  /* *thumb1_negsi2 */
    case 735:  /* *sqrtdf2_vfp */
    case 734:  /* *sqrtsf2_vfp */
    case 732:  /* neon_vsqrthf */
    case 731:  /* floatunssidf2 */
    case 730:  /* floatunssisf2 */
    case 729:  /* *floatsidf2_vfp */
    case 728:  /* *floatsisf2_vfp */
    case 723:  /* truncsfhf2 */
    case 722:  /* *extendhfdf2 */
    case 721:  /* *truncdfhf2 */
    case 720:  /* extendhfsf2 */
    case 719:  /* *truncdfsf2_vfp */
    case 718:  /* *extendsfdf2_vfp */
    case 668:  /* neghf2 */
    case 667:  /* abshf2 */
    case 666:  /* *negdf2_vfp */
    case 665:  /* *negsf2_vfp */
    case 664:  /* *absdf2_vfp */
    case 663:  /* *abssf2_vfp */
    case 424:  /* tbcstv2si */
    case 423:  /* tbcstv4hi */
    case 422:  /* tbcstv8qi */
    case 331:  /* *arm_rev16 */
    case 329:  /* *arm_rev */
    case 321:  /* ctzsi2 */
    case 319:  /* clzsi2 */
    case 179:  /* *arm_extendqisi_v6 */
    case 178:  /* *arm_extendqisi */
    case 177:  /* *arm_extendqihi_insn */
    case 175:  /* *arm_extendhisi2_v6 */
    case 174:  /* *arm_extendhisi2 */
    case 171:  /* *arm_zero_extendqisi2_v6 */
    case 170:  /* *arm_zero_extendqisi2 */
    case 168:  /* *arm_zero_extendhisi2_v6 */
    case 167:  /* *arm_zero_extendhisi2 */
    case 166:  /* extendsidi2 */
    case 165:  /* extendhidi2 */
    case 164:  /* extendqidi2 */
    case 163:  /* zero_extendsidi2 */
    case 162:  /* zero_extendhidi2 */
    case 161:  /* zero_extendqidi2 */
    case 158:  /* *arm_one_cmplsi2 */
    case 157:  /* *one_cmpldi2_insn */
    case 151:  /* *arm_negsi2 */
    case 118:  /* *smin_0 */
    case 116:  /* *smax_m1 */
    case 115:  /* *smax_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 114:  /* *andsi_iorsi3_notsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 923:  /* *thumb2_mulsi_short_compare0_scratch */
    case 107:  /* *iorsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 101:  /* *andsi_notsi_si_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 100:  /* *andsi_notsi_si_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 99:  /* andsi_not_shiftsi_si_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 3;
      break;

    case 98:  /* andsi_not_shiftsi_si_scc_no_reuse */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 933:  /* *orsi_not_shiftsi_si */
    case 870:  /* *thumb_andsi_not_shiftsi_si */
    case 97:  /* andsi_not_shiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 930:  /* *iordi_notdi_zesidi */
    case 94:  /* *anddi_notdi_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 931:  /* *iordi_notsesidi_di */
    case 929:  /* *iordi_notzesidi_di */
    case 95:  /* *anddi_notsesidi_di */
    case 93:  /* *anddi_notzesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1282:  /* widen_usumv2si3 */
    case 1281:  /* widen_usumv4hi3 */
    case 1280:  /* widen_usumv8qi3 */
    case 1273:  /* widen_ssumv2si3 */
    case 1272:  /* widen_ssumv4hi3 */
    case 1271:  /* widen_ssumv8qi3 */
    case 928:  /* *iordi_notdi_di */
    case 812:  /* thumb1_bicsi3 */
    case 748:  /* *combine_vcvt_f64_s32 */
    case 747:  /* *combine_vcvt_f64_u32 */
    case 746:  /* *combine_vcvt_f32_s32 */
    case 745:  /* *combine_vcvt_f32_u32 */
    case 692:  /* *muldf3negdf_vfp */
    case 690:  /* *mulsf3negsf_vfp */
    case 688:  /* *mulsf3neghf_vfp */
    case 180:  /* *arm_extendqisi2addsi */
    case 176:  /* *arm_extendhisi2addsi */
    case 172:  /* *arm_zero_extendqisi2addsi */
    case 169:  /* *arm_zero_extendhisi2addsi */
    case 92:  /* *anddi_notdi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 91:  /* insv_t2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 90:  /* insv_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      break;

    case 89:  /* *ite_ne_zeroextractsi_shifted */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 88:  /* *ite_ne_zeroextractsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 86:  /* *ne_zeroextractsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 85:  /* *zeroextractsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 84:  /* *andsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1138:  /* bicdi3_neon */
    case 1137:  /* bicv2di3_neon */
    case 1136:  /* bicv4sf3_neon */
    case 1135:  /* bicv2sf3_neon */
    case 1134:  /* bicv8hf3_neon */
    case 1133:  /* bicv4hf3_neon */
    case 1132:  /* bicv4si3_neon */
    case 1131:  /* bicv2si3_neon */
    case 1130:  /* bicv8hi3_neon */
    case 1129:  /* bicv4hi3_neon */
    case 1128:  /* bicv16qi3_neon */
    case 1127:  /* bicv8qi3_neon */
    case 1126:  /* orndi3_neon */
    case 1125:  /* ornv2di3_neon */
    case 1124:  /* ornv4sf3_neon */
    case 1123:  /* ornv2sf3_neon */
    case 1122:  /* ornv8hf3_neon */
    case 1121:  /* ornv4hf3_neon */
    case 1120:  /* ornv4si3_neon */
    case 1119:  /* ornv2si3_neon */
    case 1118:  /* ornv8hi3_neon */
    case 1117:  /* ornv4hi3_neon */
    case 1116:  /* ornv16qi3_neon */
    case 1115:  /* ornv8qi3_neon */
    case 932:  /* *orsi_notsi_si */
    case 110:  /* *xordi_sesidi_di */
    case 109:  /* *xordi_zesidi_di */
    case 104:  /* *iordi_sesidi_di */
    case 103:  /* *iordi_zesidi_di */
    case 96:  /* andsi_notsi_si */
    case 81:  /* *anddi_sesdi_di */
    case 80:  /* *anddi_zesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 78:  /* *maddhidi4tt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 77:  /* *maddhidi4tb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 76:  /* maddhidi4 */
    case 75:  /* *maddhisi4tt */
    case 74:  /* *maddhisi4tb */
    case 73:  /* maddhisi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 68:  /* *umulsi3_highpart_v6 */
    case 67:  /* *umulsi3_highpart_nov6 */
    case 66:  /* *smulsi3_highpart_v6 */
    case 65:  /* *smulsi3_highpart_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 2567:  /* vec_pack_trunc_v2di */
    case 2566:  /* vec_pack_trunc_v4si */
    case 2565:  /* vec_pack_trunc_v8hi */
    case 2564:  /* neon_vec_umult_v2si */
    case 2563:  /* neon_vec_smult_v2si */
    case 2562:  /* neon_vec_umult_v4hi */
    case 2561:  /* neon_vec_smult_v4hi */
    case 2560:  /* neon_vec_umult_v8qi */
    case 2559:  /* neon_vec_smult_v8qi */
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
    case 72:  /* *mulhisi3tt */
    case 71:  /* *mulhisi3bt */
    case 70:  /* *mulhisi3tb */
    case 69:  /* mulhisi3 */
    case 62:  /* *umulsidi3_v6 */
    case 61:  /* *umulsidi3_nov6 */
    case 60:  /* *mulsidi3_v6 */
    case 59:  /* *mulsidi3_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 64:  /* *umulsidi3adddi_v6 */
    case 63:  /* *umulsidi3adddi */
    case 58:  /* *mulsidi3adddi_v6 */
    case 57:  /* *mulsidi3adddi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 56:  /* *mulsi3subsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 55:  /* *mulsi3addsi_compare0_scratch_v6 */
    case 54:  /* *mulsi3addsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 53:  /* *mulsi3addsi_compare0_v6 */
    case 52:  /* *mulsi3addsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 51:  /* *mulsi3addsi_v6 */
    case 50:  /* *mulsi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 49:  /* *mulsi_compare0_scratch_v6 */
    case 48:  /* *mulsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 47:  /* *mulsi3_compare0_v6 */
    case 46:  /* *mulsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 44:  /* *arm_mulsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 40:  /* *subdi_zesidi_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 37:  /* *subdi_di_sesidi */
    case 36:  /* *subdi_di_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 33:  /* *subsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      break;

    case 32:  /* *subsi3_carryin_compare_const */
    case 31:  /* *subsi3_carryin_compare */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 43:  /* subsi3_compare */
    case 28:  /* subsi3_compare1 */
    case 27:  /* subdi3_compare1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 87:  /* *ne_zeroextractsi_shifted */
    case 26:  /* *addsi3_carryin_clobercc_geu */
    case 25:  /* *addsi3_carryin_clobercc_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 34:  /* *rsbsi3_carryin_shift */
    case 24:  /* *addsi3_carryin_shift_geu */
    case 23:  /* *addsi3_carryin_shift_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 22:  /* *addsi3_carryin_alt2_geu */
    case 21:  /* *addsi3_carryin_alt2_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2574:  /* neon_vabdv4sf_2 */
    case 2573:  /* neon_vabdv2sf_2 */
    case 2572:  /* neon_vabdv8hf_2 */
    case 2571:  /* neon_vabdv4hf_2 */
    case 2552:  /* neon_vec_ushiftl_v2si */
    case 2551:  /* neon_vec_sshiftl_v2si */
    case 2550:  /* neon_vec_ushiftl_v4hi */
    case 2549:  /* neon_vec_sshiftl_v4hi */
    case 2548:  /* neon_vec_ushiftl_v8qi */
    case 2547:  /* neon_vec_sshiftl_v8qi */
    case 2534:  /* neon_vec_unpacku_hi_v4si */
    case 2533:  /* neon_vec_unpacks_hi_v4si */
    case 2532:  /* neon_vec_unpacku_hi_v8hi */
    case 2531:  /* neon_vec_unpacks_hi_v8hi */
    case 2530:  /* neon_vec_unpacku_hi_v16qi */
    case 2529:  /* neon_vec_unpacks_hi_v16qi */
    case 2528:  /* neon_vec_unpacku_lo_v4si */
    case 2527:  /* neon_vec_unpacks_lo_v4si */
    case 2526:  /* neon_vec_unpacku_lo_v8hi */
    case 2525:  /* neon_vec_unpacks_lo_v8hi */
    case 2524:  /* neon_vec_unpacku_lo_v16qi */
    case 2523:  /* neon_vec_unpacks_lo_v16qi */
    case 1617:  /* neon_vcgeuv4si */
    case 1616:  /* neon_vcgtuv4si */
    case 1615:  /* neon_vcgeuv2si */
    case 1614:  /* neon_vcgtuv2si */
    case 1613:  /* neon_vcgeuv8hi */
    case 1612:  /* neon_vcgtuv8hi */
    case 1611:  /* neon_vcgeuv4hi */
    case 1610:  /* neon_vcgtuv4hi */
    case 1609:  /* neon_vcgeuv16qi */
    case 1608:  /* neon_vcgtuv16qi */
    case 1607:  /* neon_vcgeuv8qi */
    case 1606:  /* neon_vcgtuv8qi */
    case 1595:  /* neon_vcltv4hf_fp16insn */
    case 1594:  /* neon_vclev4hf_fp16insn */
    case 1593:  /* neon_vcgev4hf_fp16insn */
    case 1592:  /* neon_vcgtv4hf_fp16insn */
    case 1591:  /* neon_vceqv4hf_fp16insn */
    case 1590:  /* neon_vcltv8hf_fp16insn */
    case 1589:  /* neon_vclev8hf_fp16insn */
    case 1588:  /* neon_vcgev8hf_fp16insn */
    case 1587:  /* neon_vcgtv8hf_fp16insn */
    case 1586:  /* neon_vceqv8hf_fp16insn */
    case 1575:  /* neon_vcltv4sf_insn */
    case 1574:  /* neon_vclev4sf_insn */
    case 1573:  /* neon_vcgev4sf_insn */
    case 1572:  /* neon_vcgtv4sf_insn */
    case 1571:  /* neon_vceqv4sf_insn */
    case 1570:  /* neon_vcltv2sf_insn */
    case 1569:  /* neon_vclev2sf_insn */
    case 1568:  /* neon_vcgev2sf_insn */
    case 1567:  /* neon_vcgtv2sf_insn */
    case 1566:  /* neon_vceqv2sf_insn */
    case 1565:  /* neon_vcltv4si_insn */
    case 1564:  /* neon_vclev4si_insn */
    case 1563:  /* neon_vcgev4si_insn */
    case 1562:  /* neon_vcgtv4si_insn */
    case 1561:  /* neon_vceqv4si_insn */
    case 1560:  /* neon_vcltv2si_insn */
    case 1559:  /* neon_vclev2si_insn */
    case 1558:  /* neon_vcgev2si_insn */
    case 1557:  /* neon_vcgtv2si_insn */
    case 1556:  /* neon_vceqv2si_insn */
    case 1555:  /* neon_vcltv8hi_insn */
    case 1554:  /* neon_vclev8hi_insn */
    case 1553:  /* neon_vcgev8hi_insn */
    case 1552:  /* neon_vcgtv8hi_insn */
    case 1551:  /* neon_vceqv8hi_insn */
    case 1550:  /* neon_vcltv4hi_insn */
    case 1549:  /* neon_vclev4hi_insn */
    case 1548:  /* neon_vcgev4hi_insn */
    case 1547:  /* neon_vcgtv4hi_insn */
    case 1546:  /* neon_vceqv4hi_insn */
    case 1545:  /* neon_vcltv16qi_insn */
    case 1544:  /* neon_vclev16qi_insn */
    case 1543:  /* neon_vcgev16qi_insn */
    case 1542:  /* neon_vcgtv16qi_insn */
    case 1541:  /* neon_vceqv16qi_insn */
    case 1540:  /* neon_vcltv8qi_insn */
    case 1539:  /* neon_vclev8qi_insn */
    case 1538:  /* neon_vcgev8qi_insn */
    case 1537:  /* neon_vcgtv8qi_insn */
    case 1536:  /* neon_vceqv8qi_insn */
    case 851:  /* cstoresi_nltu_thumb1 */
    case 693:  /* *negmuldf3_vfp */
    case 691:  /* *negmulsf3_vfp */
    case 689:  /* *negmulhf3_vfp */
    case 30:  /* *subsi3_carryin_const */
    case 29:  /* *subsi3_carryin */
    case 20:  /* *addsi3_carryin_geu */
    case 19:  /* *addsi3_carryin_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 18:  /* *compare_addsi2_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 17:  /* *compare_addsi2_op0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 16:  /* *addsi3_compare_op2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 15:  /* *addsi3_compare_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 14:  /* cmpsi2_addneg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 13:  /* *compare_negsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 920:  /* *thumb2_addsi3_compare0_scratch */
    case 113:  /* *xorsi3_compare0_scratch */
    case 12:  /* *addsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 922:  /* *thumb2_mulsi_short_compare0 */
    case 919:  /* thumb2_addsi3_compare0 */
    case 112:  /* *xorsi3_compare0 */
    case 106:  /* *iorsi3_compare0 */
    case 83:  /* *andsi3_compare0 */
    case 42:  /* subsi3_compare0 */
    case 11:  /* addsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 9:  /* *addsi3_compareC_upper */
    case 7:  /* *addsi3_compareV_upper */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 10:  /* addsi3_compareC */
    case 8:  /* adddi3_compareC */
    case 6:  /* addsi3_compareV */
    case 5:  /* adddi3_compareV */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 2755:  /* sssubsa3 */
    case 2754:  /* sssubsq3 */
    case 2753:  /* sssubha3 */
    case 2752:  /* sssubv2ha3 */
    case 2751:  /* sssubhq3 */
    case 2750:  /* sssubqq3 */
    case 2749:  /* sssubv2hq3 */
    case 2748:  /* sssubv4qq3 */
    case 2747:  /* ussubuha3 */
    case 2746:  /* ussubv2uha3 */
    case 2745:  /* ussubuhq3 */
    case 2744:  /* ussubuqq3 */
    case 2743:  /* ussubv2uhq3 */
    case 2742:  /* ussubv4uqq3 */
    case 2741:  /* subv2ha3 */
    case 2740:  /* subv2hq3 */
    case 2739:  /* subv4qq3 */
    case 2738:  /* subusa3 */
    case 2737:  /* subuha3 */
    case 2736:  /* subsa3 */
    case 2735:  /* subha3 */
    case 2734:  /* subusq3 */
    case 2733:  /* subuhq3 */
    case 2732:  /* subuqq3 */
    case 2731:  /* subsq3 */
    case 2730:  /* subhq3 */
    case 2729:  /* subqq3 */
    case 2728:  /* ssaddsa3 */
    case 2727:  /* ssaddsq3 */
    case 2726:  /* ssaddha3 */
    case 2725:  /* ssaddv2ha3 */
    case 2724:  /* ssaddhq3 */
    case 2723:  /* ssaddqq3 */
    case 2722:  /* ssaddv2hq3 */
    case 2721:  /* ssaddv4qq3 */
    case 2720:  /* usadduha3 */
    case 2719:  /* usaddv2uha3 */
    case 2718:  /* usadduhq3 */
    case 2717:  /* usadduqq3 */
    case 2716:  /* usaddv2uhq3 */
    case 2715:  /* usaddv4uqq3 */
    case 2714:  /* addv2ha3 */
    case 2713:  /* addv2hq3 */
    case 2712:  /* addv4qq3 */
    case 2711:  /* addusa3 */
    case 2710:  /* adduha3 */
    case 2709:  /* addsa3 */
    case 2708:  /* addha3 */
    case 2707:  /* addusq3 */
    case 2706:  /* adduhq3 */
    case 2705:  /* adduqq3 */
    case 2704:  /* addsq3 */
    case 2703:  /* addhq3 */
    case 2702:  /* addqq3 */
    case 1887:  /* neon_vcombinedi */
    case 1886:  /* neon_vcombinev2sf */
    case 1885:  /* neon_vcombinev2si */
    case 1884:  /* neon_vcombinev4hf */
    case 1883:  /* neon_vcombinev4hi */
    case 1882:  /* neon_vcombinev8qi */
    case 1404:  /* neon_vmulfv4hf */
    case 1403:  /* neon_vmulfv8hf */
    case 1402:  /* mulv4hf3 */
    case 1401:  /* mulv8hf3 */
    case 1336:  /* *us_subv2sf_neon */
    case 1335:  /* *us_subv2si_neon */
    case 1334:  /* *us_subv4hi_neon */
    case 1333:  /* *us_subv8qi_neon */
    case 1332:  /* *ss_subv2sf_neon */
    case 1331:  /* *ss_subv2si_neon */
    case 1330:  /* *ss_subv4hi_neon */
    case 1329:  /* *ss_subv8qi_neon */
    case 1328:  /* *us_addv2sf_neon */
    case 1327:  /* *us_addv2si_neon */
    case 1326:  /* *us_addv4hi_neon */
    case 1325:  /* *us_addv8qi_neon */
    case 1324:  /* *ss_addv2sf_neon */
    case 1323:  /* *ss_addv2si_neon */
    case 1322:  /* *ss_addv4hi_neon */
    case 1321:  /* *ss_addv8qi_neon */
    case 1262:  /* lshrdi3_neon_imm_noclobber */
    case 1261:  /* ashrdi3_neon_imm_noclobber */
    case 1257:  /* ashldi3_neon_noclobber */
    case 1241:  /* vlshrv4si3_imm */
    case 1240:  /* vlshrv2si3_imm */
    case 1239:  /* vlshrv8hi3_imm */
    case 1238:  /* vlshrv4hi3_imm */
    case 1237:  /* vlshrv16qi3_imm */
    case 1236:  /* vlshrv8qi3_imm */
    case 1235:  /* vashrv4si3_imm */
    case 1234:  /* vashrv2si3_imm */
    case 1233:  /* vashrv8hi3_imm */
    case 1232:  /* vashrv4hi3_imm */
    case 1231:  /* vashrv16qi3_imm */
    case 1230:  /* vashrv8qi3_imm */
    case 1229:  /* vashlv4si3 */
    case 1228:  /* vashlv2si3 */
    case 1227:  /* vashlv8hi3 */
    case 1226:  /* vashlv4hi3 */
    case 1225:  /* vashlv16qi3 */
    case 1224:  /* vashlv8qi3 */
    case 1223:  /* *smaxv4sf3_neon */
    case 1222:  /* *smaxv2sf3_neon */
    case 1221:  /* *smaxv4si3_neon */
    case 1220:  /* *smaxv2si3_neon */
    case 1219:  /* *smaxv8hi3_neon */
    case 1218:  /* *smaxv4hi3_neon */
    case 1217:  /* *smaxv16qi3_neon */
    case 1216:  /* *smaxv8qi3_neon */
    case 1215:  /* *sminv4sf3_neon */
    case 1214:  /* *sminv2sf3_neon */
    case 1213:  /* *sminv4si3_neon */
    case 1212:  /* *sminv2si3_neon */
    case 1211:  /* *sminv8hi3_neon */
    case 1210:  /* *sminv4hi3_neon */
    case 1209:  /* *sminv16qi3_neon */
    case 1208:  /* *sminv8qi3_neon */
    case 1207:  /* *umaxv4si3_neon */
    case 1206:  /* *umaxv2si3_neon */
    case 1205:  /* *umaxv8hi3_neon */
    case 1204:  /* *umaxv4hi3_neon */
    case 1203:  /* *umaxv16qi3_neon */
    case 1202:  /* *umaxv8qi3_neon */
    case 1201:  /* *uminv4si3_neon */
    case 1200:  /* *uminv2si3_neon */
    case 1199:  /* *uminv8hi3_neon */
    case 1198:  /* *uminv4hi3_neon */
    case 1197:  /* *uminv16qi3_neon */
    case 1196:  /* *uminv8qi3_neon */
    case 1149:  /* xorv2di3 */
    case 1148:  /* xorv4sf3 */
    case 1147:  /* xorv2sf3 */
    case 1146:  /* xorv8hf3 */
    case 1145:  /* xorv4hf3 */
    case 1144:  /* xorv4si3 */
    case 1143:  /* xorv2si3 */
    case 1142:  /* xorv8hi3 */
    case 1141:  /* xorv4hi3 */
    case 1140:  /* xorv16qi3 */
    case 1139:  /* xorv8qi3 */
    case 1114:  /* andv2di3 */
    case 1113:  /* andv4sf3 */
    case 1112:  /* andv2sf3 */
    case 1111:  /* andv8hf3 */
    case 1110:  /* andv4hf3 */
    case 1109:  /* andv4si3 */
    case 1108:  /* andv2si3 */
    case 1107:  /* andv8hi3 */
    case 1106:  /* andv4hi3 */
    case 1105:  /* andv16qi3 */
    case 1104:  /* andv8qi3 */
    case 1103:  /* iorv2di3 */
    case 1102:  /* iorv4sf3 */
    case 1101:  /* iorv2sf3 */
    case 1100:  /* iorv8hf3 */
    case 1099:  /* iorv4hf3 */
    case 1098:  /* iorv4si3 */
    case 1097:  /* iorv2si3 */
    case 1096:  /* iorv8hi3 */
    case 1095:  /* iorv4hi3 */
    case 1094:  /* iorv16qi3 */
    case 1093:  /* iorv8qi3 */
    case 1036:  /* *mulv4sf3_neon */
    case 1035:  /* *mulv2sf3_neon */
    case 1034:  /* *mulv4si3_neon */
    case 1033:  /* *mulv2si3_neon */
    case 1032:  /* *mulv8hi3_neon */
    case 1031:  /* *mulv4hi3_neon */
    case 1030:  /* *mulv16qi3_neon */
    case 1029:  /* *mulv8qi3_neon */
    case 1027:  /* subv4hf3_fp16 */
    case 1026:  /* subv8hf3_fp16 */
    case 1025:  /* subv4hf3 */
    case 1024:  /* subv8hf3 */
    case 1023:  /* *subv2di3_neon */
    case 1022:  /* *subv4sf3_neon */
    case 1021:  /* *subv2sf3_neon */
    case 1020:  /* *subv8hf3_neon */
    case 1019:  /* *subv4hf3_neon */
    case 1018:  /* *subv4si3_neon */
    case 1017:  /* *subv2si3_neon */
    case 1016:  /* *subv8hi3_neon */
    case 1015:  /* *subv4hi3_neon */
    case 1014:  /* *subv16qi3_neon */
    case 1013:  /* *subv8qi3_neon */
    case 1011:  /* addv4hf3_fp16 */
    case 1010:  /* addv8hf3_fp16 */
    case 1009:  /* addv4hf3 */
    case 1008:  /* addv8hf3 */
    case 1007:  /* *addv2di3_neon */
    case 1006:  /* *addv4sf3_neon */
    case 1005:  /* *addv2sf3_neon */
    case 1004:  /* *addv8hf3_neon */
    case 1003:  /* *addv4hf3_neon */
    case 1002:  /* *addv4si3_neon */
    case 1001:  /* *addv2si3_neon */
    case 1000:  /* *addv8hi3_neon */
    case 999:  /* *addv4hi3_neon */
    case 998:  /* *addv16qi3_neon */
    case 997:  /* *addv8qi3_neon */
    case 852:  /* cstoresi_ltu_thumb1 */
    case 818:  /* *thumb1_rotrsi3 */
    case 817:  /* *thumb1_lshrsi3 */
    case 816:  /* *thumb1_ashrsi3 */
    case 815:  /* *thumb1_ashlsi3 */
    case 814:  /* *thumb1_xorsi3_insn */
    case 813:  /* *thumb1_iorsi3_insn */
    case 811:  /* *thumb1_andsi3_insn */
    case 810:  /* *thumb_mulsi3_v6 */
    case 809:  /* *thumb_mulsi3 */
    case 808:  /* thumb1_subsi3_insn */
    case 806:  /* *thumb1_addsi3 */
    case 794:  /* smindf3 */
    case 793:  /* sminsf3 */
    case 792:  /* smaxdf3 */
    case 791:  /* smaxsf3 */
    case 687:  /* *muldf3_vfp */
    case 686:  /* *mulsf3_vfp */
    case 685:  /* mulhf3 */
    case 684:  /* *divdf3_vfp */
    case 683:  /* *divsf3_vfp */
    case 682:  /* divhf3 */
    case 681:  /* *subdf3_vfp */
    case 680:  /* *subsf3_vfp */
    case 679:  /* subhf3 */
    case 678:  /* *adddf3_vfp */
    case 677:  /* *addsf3_vfp */
    case 676:  /* addhf3 */
    case 601:  /* iwmmxt_wmulwl */
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
    case 462:  /* *mulv4hi3_iwmmxt */
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
    case 443:  /* *xorv8qi3_iwmmxt */
    case 442:  /* *xorv4hi3_iwmmxt */
    case 441:  /* *xorv2si3_iwmmxt */
    case 440:  /* *iorv8qi3_iwmmxt */
    case 439:  /* *iorv4hi3_iwmmxt */
    case 438:  /* *iorv2si3_iwmmxt */
    case 437:  /* *andv8qi3_iwmmxt */
    case 436:  /* *andv4hi3_iwmmxt */
    case 435:  /* *andv2si3_iwmmxt */
    case 427:  /* iwmmxt_anddi3 */
    case 426:  /* iwmmxt_xordi3 */
    case 425:  /* iwmmxt_iordi3 */
    case 182:  /* *arm_movt */
    case 147:  /* udivsi3 */
    case 146:  /* divsi3 */
    case 111:  /* *arm_xorsi3 */
    case 108:  /* *xordi3_insn */
    case 105:  /* *iorsi3_insn */
    case 102:  /* *iordi3_insn */
    case 82:  /* *arm_andsi3_insn */
    case 79:  /* *anddi3_insn */
    case 45:  /* *arm_mulsi3_v6 */
    case 41:  /* *arm_subsi3_insn */
    case 4:  /* *arm_addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 39:  /* *subdi_sesidi_di */
    case 38:  /* *subdi_zesidi_di */
    case 3:  /* *adddi_zesidi_di */
    case 2:  /* *adddi_sesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1028:  /* subdi3_neon */
    case 1012:  /* adddi3_neon */
    case 921:  /* *thumb2_mulsi_short */
    case 918:  /* *thumb2_subsi_short */
    case 917:  /* *thumb2_addsi_short */
    case 874:  /* *thumb2_uminsi3 */
    case 873:  /* *thumb32_umaxsi3 */
    case 872:  /* *thumb2_sminsi3 */
    case 871:  /* *thumb2_smaxsi3 */
    case 807:  /* *thumb_subdi3 */
    case 805:  /* *thumb1_adddi3 */
    case 121:  /* *arm_uminsi3 */
    case 120:  /* *arm_umaxsi3 */
    case 119:  /* *arm_smin_insn */
    case 117:  /* *arm_smax_insn */
    case 35:  /* *arm_subdi3 */
    case 1:  /* *arm_adddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    }
}

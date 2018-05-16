/* Generated automatically by the program `genopinit'
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
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x011819, CODE_FOR_extendqihi2 },
  { 0x01181a, CODE_FOR_extendqisi2 },
  { 0x01181b, CODE_FOR_extendqidi2 },
  { 0x01191a, CODE_FOR_extendhisi2 },
  { 0x01191b, CODE_FOR_extendhidi2 },
  { 0x011a1b, CODE_FOR_extendsidi2 },
  { 0x013334, CODE_FOR_extendhfsf2 },
  { 0x013335, CODE_FOR_extendhfdf2 },
  { 0x013435, CODE_FOR_extendsfdf2 },
  { 0x023433, CODE_FOR_truncsfhf2 },
  { 0x023533, CODE_FOR_truncdfhf2 },
  { 0x023534, CODE_FOR_truncdfsf2 },
  { 0x03181a, CODE_FOR_zero_extendqisi2 },
  { 0x03181b, CODE_FOR_zero_extendqidi2 },
  { 0x03191a, CODE_FOR_zero_extendhisi2 },
  { 0x03191b, CODE_FOR_zero_extendhidi2 },
  { 0x031a1b, CODE_FOR_zero_extendsidi2 },
  { 0x061a33, CODE_FOR_floatsihf2 },
  { 0x061a34, CODE_FOR_floatsisf2 },
  { 0x061a35, CODE_FOR_floatsidf2 },
  { 0x061b33, CODE_FOR_floatdihf2 },
  { 0x064956, CODE_FOR_floatv2siv2sf2 },
  { 0x064c58, CODE_FOR_floatv4siv4sf2 },
  { 0x071a34, CODE_FOR_floatunssisf2 },
  { 0x071a35, CODE_FOR_floatunssidf2 },
  { 0x074956, CODE_FOR_floatunsv2siv2sf2 },
  { 0x074c58, CODE_FOR_floatunsv4siv4sf2 },
  { 0x09341a, CODE_FOR_lroundsfsi2 },
  { 0x09351a, CODE_FOR_lrounddfsi2 },
  { 0x0a341a, CODE_FOR_lfloorsfsi2 },
  { 0x0a351a, CODE_FOR_lfloordfsi2 },
  { 0x0b341a, CODE_FOR_lceilsfsi2 },
  { 0x0b351a, CODE_FOR_lceildfsi2 },
  { 0x10331a, CODE_FOR_fix_trunchfsi2 },
  { 0x10331b, CODE_FOR_fix_trunchfdi2 },
  { 0x10341a, CODE_FOR_fix_truncsfsi2 },
  { 0x10351a, CODE_FOR_fix_truncdfsi2 },
  { 0x105649, CODE_FOR_fix_truncv2sfv2si2 },
  { 0x10584c, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x11341a, CODE_FOR_fixuns_truncsfsi2 },
  { 0x11351a, CODE_FOR_fixuns_truncdfsi2 },
  { 0x115649, CODE_FOR_fixuns_truncv2sfv2si2 },
  { 0x11584c, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x12191a, CODE_FOR_mulhisi3 },
  { 0x121a1b, CODE_FOR_mulsidi3 },
  { 0x131a1b, CODE_FOR_umulsidi3 },
  { 0x15191a, CODE_FOR_maddhisi4 },
  { 0x15191b, CODE_FOR_maddhidi4 },
  { 0x151a1b, CODE_FOR_maddsidi4 },
  { 0x161a1b, CODE_FOR_umaddsidi4 },
  { 0x1d1b1b, CODE_FOR_vec_load_lanesdidi },
  { 0x1d1b1c, CODE_FOR_vec_load_lanestidi },
  { 0x1d1b1d, CODE_FOR_vec_load_laneseidi },
  { 0x1d1b1e, CODE_FOR_vec_load_lanesoidi },
  { 0x1d471c, CODE_FOR_vec_load_lanestiv8qi },
  { 0x1d471d, CODE_FOR_vec_load_laneseiv8qi },
  { 0x1d471e, CODE_FOR_vec_load_lanesoiv8qi },
  { 0x1d4747, CODE_FOR_vec_load_lanesv8qiv8qi },
  { 0x1d481c, CODE_FOR_vec_load_lanestiv4hi },
  { 0x1d481d, CODE_FOR_vec_load_laneseiv4hi },
  { 0x1d481e, CODE_FOR_vec_load_lanesoiv4hi },
  { 0x1d4848, CODE_FOR_vec_load_lanesv4hiv4hi },
  { 0x1d491c, CODE_FOR_vec_load_lanestiv2si },
  { 0x1d491d, CODE_FOR_vec_load_laneseiv2si },
  { 0x1d491e, CODE_FOR_vec_load_lanesoiv2si },
  { 0x1d4949, CODE_FOR_vec_load_lanesv2siv2si },
  { 0x1d4a1e, CODE_FOR_vec_load_lanesoiv16qi },
  { 0x1d4a1f, CODE_FOR_vec_load_lanesciv16qi },
  { 0x1d4a20, CODE_FOR_vec_load_lanesxiv16qi },
  { 0x1d4a4a, CODE_FOR_vec_load_lanesv16qiv16qi },
  { 0x1d4b1e, CODE_FOR_vec_load_lanesoiv8hi },
  { 0x1d4b1f, CODE_FOR_vec_load_lanesciv8hi },
  { 0x1d4b20, CODE_FOR_vec_load_lanesxiv8hi },
  { 0x1d4b4b, CODE_FOR_vec_load_lanesv8hiv8hi },
  { 0x1d4c1e, CODE_FOR_vec_load_lanesoiv4si },
  { 0x1d4c1f, CODE_FOR_vec_load_lanesciv4si },
  { 0x1d4c20, CODE_FOR_vec_load_lanesxiv4si },
  { 0x1d4c4c, CODE_FOR_vec_load_lanesv4siv4si },
  { 0x1d4d4d, CODE_FOR_vec_load_lanesv2div2di },
  { 0x1d551c, CODE_FOR_vec_load_lanestiv4hf },
  { 0x1d551d, CODE_FOR_vec_load_laneseiv4hf },
  { 0x1d551e, CODE_FOR_vec_load_lanesoiv4hf },
  { 0x1d5555, CODE_FOR_vec_load_lanesv4hfv4hf },
  { 0x1d561c, CODE_FOR_vec_load_lanestiv2sf },
  { 0x1d561d, CODE_FOR_vec_load_laneseiv2sf },
  { 0x1d561e, CODE_FOR_vec_load_lanesoiv2sf },
  { 0x1d5656, CODE_FOR_vec_load_lanesv2sfv2sf },
  { 0x1d571e, CODE_FOR_vec_load_lanesoiv8hf },
  { 0x1d571f, CODE_FOR_vec_load_lanesciv8hf },
  { 0x1d5720, CODE_FOR_vec_load_lanesxiv8hf },
  { 0x1d5757, CODE_FOR_vec_load_lanesv8hfv8hf },
  { 0x1d581e, CODE_FOR_vec_load_lanesoiv4sf },
  { 0x1d581f, CODE_FOR_vec_load_lanesciv4sf },
  { 0x1d5820, CODE_FOR_vec_load_lanesxiv4sf },
  { 0x1d5858, CODE_FOR_vec_load_lanesv4sfv4sf },
  { 0x1e1b1b, CODE_FOR_vec_store_lanesdidi },
  { 0x1e1b1c, CODE_FOR_vec_store_lanestidi },
  { 0x1e1b1d, CODE_FOR_vec_store_laneseidi },
  { 0x1e1b1e, CODE_FOR_vec_store_lanesoidi },
  { 0x1e471c, CODE_FOR_vec_store_lanestiv8qi },
  { 0x1e471d, CODE_FOR_vec_store_laneseiv8qi },
  { 0x1e471e, CODE_FOR_vec_store_lanesoiv8qi },
  { 0x1e4747, CODE_FOR_vec_store_lanesv8qiv8qi },
  { 0x1e481c, CODE_FOR_vec_store_lanestiv4hi },
  { 0x1e481d, CODE_FOR_vec_store_laneseiv4hi },
  { 0x1e481e, CODE_FOR_vec_store_lanesoiv4hi },
  { 0x1e4848, CODE_FOR_vec_store_lanesv4hiv4hi },
  { 0x1e491c, CODE_FOR_vec_store_lanestiv2si },
  { 0x1e491d, CODE_FOR_vec_store_laneseiv2si },
  { 0x1e491e, CODE_FOR_vec_store_lanesoiv2si },
  { 0x1e4949, CODE_FOR_vec_store_lanesv2siv2si },
  { 0x1e4a1e, CODE_FOR_vec_store_lanesoiv16qi },
  { 0x1e4a1f, CODE_FOR_vec_store_lanesciv16qi },
  { 0x1e4a20, CODE_FOR_vec_store_lanesxiv16qi },
  { 0x1e4a4a, CODE_FOR_vec_store_lanesv16qiv16qi },
  { 0x1e4b1e, CODE_FOR_vec_store_lanesoiv8hi },
  { 0x1e4b1f, CODE_FOR_vec_store_lanesciv8hi },
  { 0x1e4b20, CODE_FOR_vec_store_lanesxiv8hi },
  { 0x1e4b4b, CODE_FOR_vec_store_lanesv8hiv8hi },
  { 0x1e4c1e, CODE_FOR_vec_store_lanesoiv4si },
  { 0x1e4c1f, CODE_FOR_vec_store_lanesciv4si },
  { 0x1e4c20, CODE_FOR_vec_store_lanesxiv4si },
  { 0x1e4c4c, CODE_FOR_vec_store_lanesv4siv4si },
  { 0x1e4d4d, CODE_FOR_vec_store_lanesv2div2di },
  { 0x1e551c, CODE_FOR_vec_store_lanestiv4hf },
  { 0x1e551d, CODE_FOR_vec_store_laneseiv4hf },
  { 0x1e551e, CODE_FOR_vec_store_lanesoiv4hf },
  { 0x1e5555, CODE_FOR_vec_store_lanesv4hfv4hf },
  { 0x1e561c, CODE_FOR_vec_store_lanestiv2sf },
  { 0x1e561d, CODE_FOR_vec_store_laneseiv2sf },
  { 0x1e561e, CODE_FOR_vec_store_lanesoiv2sf },
  { 0x1e5656, CODE_FOR_vec_store_lanesv2sfv2sf },
  { 0x1e571e, CODE_FOR_vec_store_lanesoiv8hf },
  { 0x1e571f, CODE_FOR_vec_store_lanesciv8hf },
  { 0x1e5720, CODE_FOR_vec_store_lanesxiv8hf },
  { 0x1e5757, CODE_FOR_vec_store_lanesv8hfv8hf },
  { 0x1e581e, CODE_FOR_vec_store_lanesoiv4sf },
  { 0x1e581f, CODE_FOR_vec_store_lanesciv4sf },
  { 0x1e5820, CODE_FOR_vec_store_lanesxiv4sf },
  { 0x1e5858, CODE_FOR_vec_store_lanesv4sfv4sf },
  { 0x214747, CODE_FOR_vcondv8qiv8qi },
  { 0x214848, CODE_FOR_vcondv4hiv4hi },
  { 0x214949, CODE_FOR_vcondv2siv2si },
  { 0x214a4a, CODE_FOR_vcondv16qiv16qi },
  { 0x214b4b, CODE_FOR_vcondv8hiv8hi },
  { 0x214c4c, CODE_FOR_vcondv4siv4si },
  { 0x215656, CODE_FOR_vcondv2sfv2sf },
  { 0x215858, CODE_FOR_vcondv4sfv4sf },
  { 0x224747, CODE_FOR_vconduv8qiv8qi },
  { 0x224848, CODE_FOR_vconduv4hiv4hi },
  { 0x224949, CODE_FOR_vconduv2siv2si },
  { 0x224a4a, CODE_FOR_vconduv16qiv16qi },
  { 0x224b4b, CODE_FOR_vconduv8hiv8hi },
  { 0x224c4c, CODE_FOR_vconduv4siv4si },
  { 0x2a1847, CODE_FOR_vec_extractv8qiqi },
  { 0x2a184a, CODE_FOR_vec_extractv16qiqi },
  { 0x2a1948, CODE_FOR_vec_extractv4hihi },
  { 0x2a194b, CODE_FOR_vec_extractv8hihi },
  { 0x2a1a49, CODE_FOR_vec_extractv2sisi },
  { 0x2a1a4c, CODE_FOR_vec_extractv4sisi },
  { 0x2a1b4d, CODE_FOR_vec_extractv2didi },
  { 0x2a3355, CODE_FOR_vec_extractv4hfhf },
  { 0x2a3357, CODE_FOR_vec_extractv8hfhf },
  { 0x2a3456, CODE_FOR_vec_extractv2sfsf },
  { 0x2a3458, CODE_FOR_vec_extractv4sfsf },
  { 0x2b1847, CODE_FOR_vec_initv8qiqi },
  { 0x2b184a, CODE_FOR_vec_initv16qiqi },
  { 0x2b1948, CODE_FOR_vec_initv4hihi },
  { 0x2b194b, CODE_FOR_vec_initv8hihi },
  { 0x2b1a49, CODE_FOR_vec_initv2sisi },
  { 0x2b1a4c, CODE_FOR_vec_initv4sisi },
  { 0x2b1b4d, CODE_FOR_vec_initv2didi },
  { 0x2b3355, CODE_FOR_vec_initv4hfhf },
  { 0x2b3357, CODE_FOR_vec_initv8hfhf },
  { 0x2b3456, CODE_FOR_vec_initv2sfsf },
  { 0x2b3458, CODE_FOR_vec_initv4sfsf },
  { 0x2d001a, CODE_FOR_addsi3 },
  { 0x2d001b, CODE_FOR_adddi3 },
  { 0x2d0021, CODE_FOR_addqq3 },
  { 0x2d0022, CODE_FOR_addhq3 },
  { 0x2d0023, CODE_FOR_addsq3 },
  { 0x2d0026, CODE_FOR_adduqq3 },
  { 0x2d0027, CODE_FOR_adduhq3 },
  { 0x2d0028, CODE_FOR_addusq3 },
  { 0x2d002b, CODE_FOR_addha3 },
  { 0x2d002c, CODE_FOR_addsa3 },
  { 0x2d002f, CODE_FOR_adduha3 },
  { 0x2d0030, CODE_FOR_addusa3 },
  { 0x2d0033, CODE_FOR_addhf3 },
  { 0x2d0034, CODE_FOR_addsf3 },
  { 0x2d0035, CODE_FOR_adddf3 },
  { 0x2d0047, CODE_FOR_addv8qi3 },
  { 0x2d0048, CODE_FOR_addv4hi3 },
  { 0x2d0049, CODE_FOR_addv2si3 },
  { 0x2d004a, CODE_FOR_addv16qi3 },
  { 0x2d004b, CODE_FOR_addv8hi3 },
  { 0x2d004c, CODE_FOR_addv4si3 },
  { 0x2d004d, CODE_FOR_addv2di3 },
  { 0x2d004e, CODE_FOR_addv4qq3 },
  { 0x2d004f, CODE_FOR_addv2hq3 },
  { 0x2d0052, CODE_FOR_addv2ha3 },
  { 0x2d0055, CODE_FOR_addv4hf3 },
  { 0x2d0056, CODE_FOR_addv2sf3 },
  { 0x2d0057, CODE_FOR_addv8hf3 },
  { 0x2d0058, CODE_FOR_addv4sf3 },
  { 0x2f0021, CODE_FOR_ssaddqq3 },
  { 0x2f0022, CODE_FOR_ssaddhq3 },
  { 0x2f0023, CODE_FOR_ssaddsq3 },
  { 0x2f002b, CODE_FOR_ssaddha3 },
  { 0x2f002c, CODE_FOR_ssaddsa3 },
  { 0x2f004e, CODE_FOR_ssaddv4qq3 },
  { 0x2f004f, CODE_FOR_ssaddv2hq3 },
  { 0x2f0052, CODE_FOR_ssaddv2ha3 },
  { 0x300026, CODE_FOR_usadduqq3 },
  { 0x300027, CODE_FOR_usadduhq3 },
  { 0x30002f, CODE_FOR_usadduha3 },
  { 0x300050, CODE_FOR_usaddv4uqq3 },
  { 0x300051, CODE_FOR_usaddv2uhq3 },
  { 0x300053, CODE_FOR_usaddv2uha3 },
  { 0x31001a, CODE_FOR_subsi3 },
  { 0x31001b, CODE_FOR_subdi3 },
  { 0x310021, CODE_FOR_subqq3 },
  { 0x310022, CODE_FOR_subhq3 },
  { 0x310023, CODE_FOR_subsq3 },
  { 0x310026, CODE_FOR_subuqq3 },
  { 0x310027, CODE_FOR_subuhq3 },
  { 0x310028, CODE_FOR_subusq3 },
  { 0x31002b, CODE_FOR_subha3 },
  { 0x31002c, CODE_FOR_subsa3 },
  { 0x31002f, CODE_FOR_subuha3 },
  { 0x310030, CODE_FOR_subusa3 },
  { 0x310033, CODE_FOR_subhf3 },
  { 0x310034, CODE_FOR_subsf3 },
  { 0x310035, CODE_FOR_subdf3 },
  { 0x310047, CODE_FOR_subv8qi3 },
  { 0x310048, CODE_FOR_subv4hi3 },
  { 0x310049, CODE_FOR_subv2si3 },
  { 0x31004a, CODE_FOR_subv16qi3 },
  { 0x31004b, CODE_FOR_subv8hi3 },
  { 0x31004c, CODE_FOR_subv4si3 },
  { 0x31004d, CODE_FOR_subv2di3 },
  { 0x31004e, CODE_FOR_subv4qq3 },
  { 0x31004f, CODE_FOR_subv2hq3 },
  { 0x310052, CODE_FOR_subv2ha3 },
  { 0x310055, CODE_FOR_subv4hf3 },
  { 0x310056, CODE_FOR_subv2sf3 },
  { 0x310057, CODE_FOR_subv8hf3 },
  { 0x310058, CODE_FOR_subv4sf3 },
  { 0x330021, CODE_FOR_sssubqq3 },
  { 0x330022, CODE_FOR_sssubhq3 },
  { 0x330023, CODE_FOR_sssubsq3 },
  { 0x33002b, CODE_FOR_sssubha3 },
  { 0x33002c, CODE_FOR_sssubsa3 },
  { 0x33004e, CODE_FOR_sssubv4qq3 },
  { 0x33004f, CODE_FOR_sssubv2hq3 },
  { 0x330052, CODE_FOR_sssubv2ha3 },
  { 0x340026, CODE_FOR_ussubuqq3 },
  { 0x340027, CODE_FOR_ussubuhq3 },
  { 0x34002f, CODE_FOR_ussubuha3 },
  { 0x340050, CODE_FOR_ussubv4uqq3 },
  { 0x340051, CODE_FOR_ussubv2uhq3 },
  { 0x340053, CODE_FOR_ussubv2uha3 },
  { 0x350019, CODE_FOR_mulhi3 },
  { 0x35001a, CODE_FOR_mulsi3 },
  { 0x350021, CODE_FOR_mulqq3 },
  { 0x350022, CODE_FOR_mulhq3 },
  { 0x350023, CODE_FOR_mulsq3 },
  { 0x35002b, CODE_FOR_mulha3 },
  { 0x35002c, CODE_FOR_mulsa3 },
  { 0x35002f, CODE_FOR_muluha3 },
  { 0x350030, CODE_FOR_mulusa3 },
  { 0x350033, CODE_FOR_mulhf3 },
  { 0x350034, CODE_FOR_mulsf3 },
  { 0x350035, CODE_FOR_muldf3 },
  { 0x350047, CODE_FOR_mulv8qi3 },
  { 0x350048, CODE_FOR_mulv4hi3 },
  { 0x350049, CODE_FOR_mulv2si3 },
  { 0x35004a, CODE_FOR_mulv16qi3 },
  { 0x35004b, CODE_FOR_mulv8hi3 },
  { 0x35004c, CODE_FOR_mulv4si3 },
  { 0x350055, CODE_FOR_mulv4hf3 },
  { 0x350056, CODE_FOR_mulv2sf3 },
  { 0x350057, CODE_FOR_mulv8hf3 },
  { 0x350058, CODE_FOR_mulv4sf3 },
  { 0x37002b, CODE_FOR_ssmulha3 },
  { 0x37002c, CODE_FOR_ssmulsa3 },
  { 0x38002f, CODE_FOR_usmuluha3 },
  { 0x380030, CODE_FOR_usmulusa3 },
  { 0x39001a, CODE_FOR_divsi3 },
  { 0x390033, CODE_FOR_divhf3 },
  { 0x390034, CODE_FOR_divsf3 },
  { 0x390035, CODE_FOR_divdf3 },
  { 0x3c001a, CODE_FOR_udivsi3 },
  { 0x40001a, CODE_FOR_modsi3 },
  { 0x43001a, CODE_FOR_andsi3 },
  { 0x43001b, CODE_FOR_anddi3 },
  { 0x430047, CODE_FOR_andv8qi3 },
  { 0x430048, CODE_FOR_andv4hi3 },
  { 0x430049, CODE_FOR_andv2si3 },
  { 0x43004a, CODE_FOR_andv16qi3 },
  { 0x43004b, CODE_FOR_andv8hi3 },
  { 0x43004c, CODE_FOR_andv4si3 },
  { 0x43004d, CODE_FOR_andv2di3 },
  { 0x430055, CODE_FOR_andv4hf3 },
  { 0x430056, CODE_FOR_andv2sf3 },
  { 0x430057, CODE_FOR_andv8hf3 },
  { 0x430058, CODE_FOR_andv4sf3 },
  { 0x44001a, CODE_FOR_iorsi3 },
  { 0x44001b, CODE_FOR_iordi3 },
  { 0x440047, CODE_FOR_iorv8qi3 },
  { 0x440048, CODE_FOR_iorv4hi3 },
  { 0x440049, CODE_FOR_iorv2si3 },
  { 0x44004a, CODE_FOR_iorv16qi3 },
  { 0x44004b, CODE_FOR_iorv8hi3 },
  { 0x44004c, CODE_FOR_iorv4si3 },
  { 0x44004d, CODE_FOR_iorv2di3 },
  { 0x440055, CODE_FOR_iorv4hf3 },
  { 0x440056, CODE_FOR_iorv2sf3 },
  { 0x440057, CODE_FOR_iorv8hf3 },
  { 0x440058, CODE_FOR_iorv4sf3 },
  { 0x45001a, CODE_FOR_xorsi3 },
  { 0x45001b, CODE_FOR_xordi3 },
  { 0x450047, CODE_FOR_xorv8qi3 },
  { 0x450048, CODE_FOR_xorv4hi3 },
  { 0x450049, CODE_FOR_xorv2si3 },
  { 0x45004a, CODE_FOR_xorv16qi3 },
  { 0x45004b, CODE_FOR_xorv8hi3 },
  { 0x45004c, CODE_FOR_xorv4si3 },
  { 0x45004d, CODE_FOR_xorv2di3 },
  { 0x450055, CODE_FOR_xorv4hf3 },
  { 0x450056, CODE_FOR_xorv2sf3 },
  { 0x450057, CODE_FOR_xorv8hf3 },
  { 0x450058, CODE_FOR_xorv4sf3 },
  { 0x46001a, CODE_FOR_ashlsi3 },
  { 0x46001b, CODE_FOR_ashldi3 },
  { 0x49001a, CODE_FOR_ashrsi3 },
  { 0x49001b, CODE_FOR_ashrdi3 },
  { 0x4a001a, CODE_FOR_lshrsi3 },
  { 0x4a001b, CODE_FOR_lshrdi3 },
  { 0x4b001a, CODE_FOR_rotlsi3 },
  { 0x4c001a, CODE_FOR_rotrsi3 },
  { 0x4d0047, CODE_FOR_vashlv8qi3 },
  { 0x4d0048, CODE_FOR_vashlv4hi3 },
  { 0x4d0049, CODE_FOR_vashlv2si3 },
  { 0x4d004a, CODE_FOR_vashlv16qi3 },
  { 0x4d004b, CODE_FOR_vashlv8hi3 },
  { 0x4d004c, CODE_FOR_vashlv4si3 },
  { 0x4e0047, CODE_FOR_vashrv8qi3 },
  { 0x4e0048, CODE_FOR_vashrv4hi3 },
  { 0x4e0049, CODE_FOR_vashrv2si3 },
  { 0x4e004a, CODE_FOR_vashrv16qi3 },
  { 0x4e004b, CODE_FOR_vashrv8hi3 },
  { 0x4e004c, CODE_FOR_vashrv4si3 },
  { 0x4f0047, CODE_FOR_vlshrv8qi3 },
  { 0x4f0048, CODE_FOR_vlshrv4hi3 },
  { 0x4f0049, CODE_FOR_vlshrv2si3 },
  { 0x4f004a, CODE_FOR_vlshrv16qi3 },
  { 0x4f004b, CODE_FOR_vlshrv8hi3 },
  { 0x4f004c, CODE_FOR_vlshrv4si3 },
  { 0x52001a, CODE_FOR_sminsi3 },
  { 0x520034, CODE_FOR_sminsf3 },
  { 0x520035, CODE_FOR_smindf3 },
  { 0x520047, CODE_FOR_sminv8qi3 },
  { 0x520048, CODE_FOR_sminv4hi3 },
  { 0x520049, CODE_FOR_sminv2si3 },
  { 0x52004a, CODE_FOR_sminv16qi3 },
  { 0x52004b, CODE_FOR_sminv8hi3 },
  { 0x52004c, CODE_FOR_sminv4si3 },
  { 0x520056, CODE_FOR_sminv2sf3 },
  { 0x520058, CODE_FOR_sminv4sf3 },
  { 0x53001a, CODE_FOR_smaxsi3 },
  { 0x530034, CODE_FOR_smaxsf3 },
  { 0x530035, CODE_FOR_smaxdf3 },
  { 0x530047, CODE_FOR_smaxv8qi3 },
  { 0x530048, CODE_FOR_smaxv4hi3 },
  { 0x530049, CODE_FOR_smaxv2si3 },
  { 0x53004a, CODE_FOR_smaxv16qi3 },
  { 0x53004b, CODE_FOR_smaxv8hi3 },
  { 0x53004c, CODE_FOR_smaxv4si3 },
  { 0x530056, CODE_FOR_smaxv2sf3 },
  { 0x530058, CODE_FOR_smaxv4sf3 },
  { 0x54001a, CODE_FOR_uminsi3 },
  { 0x540047, CODE_FOR_uminv8qi3 },
  { 0x540048, CODE_FOR_uminv4hi3 },
  { 0x540049, CODE_FOR_uminv2si3 },
  { 0x54004a, CODE_FOR_uminv16qi3 },
  { 0x54004b, CODE_FOR_uminv8hi3 },
  { 0x54004c, CODE_FOR_uminv4si3 },
  { 0x55001a, CODE_FOR_umaxsi3 },
  { 0x550047, CODE_FOR_umaxv8qi3 },
  { 0x550048, CODE_FOR_umaxv4hi3 },
  { 0x550049, CODE_FOR_umaxv2si3 },
  { 0x55004a, CODE_FOR_umaxv16qi3 },
  { 0x55004b, CODE_FOR_umaxv8hi3 },
  { 0x55004c, CODE_FOR_umaxv4si3 },
  { 0x56001a, CODE_FOR_negsi2 },
  { 0x56001b, CODE_FOR_negdi2 },
  { 0x560033, CODE_FOR_neghf2 },
  { 0x560034, CODE_FOR_negsf2 },
  { 0x560035, CODE_FOR_negdf2 },
  { 0x560047, CODE_FOR_negv8qi2 },
  { 0x560048, CODE_FOR_negv4hi2 },
  { 0x560049, CODE_FOR_negv2si2 },
  { 0x56004a, CODE_FOR_negv16qi2 },
  { 0x56004b, CODE_FOR_negv8hi2 },
  { 0x56004c, CODE_FOR_negv4si2 },
  { 0x560055, CODE_FOR_negv4hf2 },
  { 0x560056, CODE_FOR_negv2sf2 },
  { 0x560057, CODE_FOR_negv8hf2 },
  { 0x560058, CODE_FOR_negv4sf2 },
  { 0x5a001a, CODE_FOR_abssi2 },
  { 0x5a0033, CODE_FOR_abshf2 },
  { 0x5a0034, CODE_FOR_abssf2 },
  { 0x5a0035, CODE_FOR_absdf2 },
  { 0x5a0047, CODE_FOR_absv8qi2 },
  { 0x5a0048, CODE_FOR_absv4hi2 },
  { 0x5a0049, CODE_FOR_absv2si2 },
  { 0x5a004a, CODE_FOR_absv16qi2 },
  { 0x5a004b, CODE_FOR_absv8hi2 },
  { 0x5a004c, CODE_FOR_absv4si2 },
  { 0x5a0055, CODE_FOR_absv4hf2 },
  { 0x5a0056, CODE_FOR_absv2sf2 },
  { 0x5a0057, CODE_FOR_absv8hf2 },
  { 0x5a0058, CODE_FOR_absv4sf2 },
  { 0x5c001a, CODE_FOR_one_cmplsi2 },
  { 0x5c001b, CODE_FOR_one_cmpldi2 },
  { 0x5c0047, CODE_FOR_one_cmplv8qi2 },
  { 0x5c0048, CODE_FOR_one_cmplv4hi2 },
  { 0x5c0049, CODE_FOR_one_cmplv2si2 },
  { 0x5c004a, CODE_FOR_one_cmplv16qi2 },
  { 0x5c004b, CODE_FOR_one_cmplv8hi2 },
  { 0x5c004c, CODE_FOR_one_cmplv4si2 },
  { 0x5c004d, CODE_FOR_one_cmplv2di2 },
  { 0x5c0055, CODE_FOR_one_cmplv4hf2 },
  { 0x5c0056, CODE_FOR_one_cmplv2sf2 },
  { 0x5c0057, CODE_FOR_one_cmplv8hf2 },
  { 0x5c0058, CODE_FOR_one_cmplv4sf2 },
  { 0x5d0019, CODE_FOR_bswaphi2 },
  { 0x5d001a, CODE_FOR_bswapsi2 },
  { 0x5f001a, CODE_FOR_clzsi2 },
  { 0x5f0047, CODE_FOR_clzv8qi2 },
  { 0x5f0048, CODE_FOR_clzv4hi2 },
  { 0x5f0049, CODE_FOR_clzv2si2 },
  { 0x5f004a, CODE_FOR_clzv16qi2 },
  { 0x5f004b, CODE_FOR_clzv8hi2 },
  { 0x5f004c, CODE_FOR_clzv4si2 },
  { 0x60001a, CODE_FOR_ctzsi2 },
  { 0x620047, CODE_FOR_popcountv8qi2 },
  { 0x62004a, CODE_FOR_popcountv16qi2 },
  { 0x6e0034, CODE_FOR_sqrtsf2 },
  { 0x6e0035, CODE_FOR_sqrtdf2 },
  { 0x7d0018, CODE_FOR_movqi },
  { 0x7d0019, CODE_FOR_movhi },
  { 0x7d001a, CODE_FOR_movsi },
  { 0x7d001b, CODE_FOR_movdi },
  { 0x7d001c, CODE_FOR_movti },
  { 0x7d001d, CODE_FOR_movei },
  { 0x7d001e, CODE_FOR_movoi },
  { 0x7d001f, CODE_FOR_movci },
  { 0x7d0020, CODE_FOR_movxi },
  { 0x7d0033, CODE_FOR_movhf },
  { 0x7d0034, CODE_FOR_movsf },
  { 0x7d0035, CODE_FOR_movdf },
  { 0x7d0047, CODE_FOR_movv8qi },
  { 0x7d0048, CODE_FOR_movv4hi },
  { 0x7d0049, CODE_FOR_movv2si },
  { 0x7d004a, CODE_FOR_movv16qi },
  { 0x7d004b, CODE_FOR_movv8hi },
  { 0x7d004c, CODE_FOR_movv4si },
  { 0x7d004d, CODE_FOR_movv2di },
  { 0x7d0055, CODE_FOR_movv4hf },
  { 0x7d0056, CODE_FOR_movv2sf },
  { 0x7d0057, CODE_FOR_movv8hf },
  { 0x7d0058, CODE_FOR_movv4sf },
  { 0x7f0019, CODE_FOR_movmisalignhi },
  { 0x7f001a, CODE_FOR_movmisalignsi },
  { 0x7f001b, CODE_FOR_movmisaligndi },
  { 0x7f0047, CODE_FOR_movmisalignv8qi },
  { 0x7f0048, CODE_FOR_movmisalignv4hi },
  { 0x7f0049, CODE_FOR_movmisalignv2si },
  { 0x7f004a, CODE_FOR_movmisalignv16qi },
  { 0x7f004b, CODE_FOR_movmisalignv8hi },
  { 0x7f004c, CODE_FOR_movmisalignv4si },
  { 0x7f004d, CODE_FOR_movmisalignv2di },
  { 0x7f0055, CODE_FOR_movmisalignv4hf },
  { 0x7f0056, CODE_FOR_movmisalignv2sf },
  { 0x7f0057, CODE_FOR_movmisalignv8hf },
  { 0x7f0058, CODE_FOR_movmisalignv4sf },
  { 0x880019, CODE_FOR_reload_inhi },
  { 0x890019, CODE_FOR_reload_outhi },
  { 0x890035, CODE_FOR_reload_outdf },
  { 0x8a0018, CODE_FOR_cbranchqi4 },
  { 0x8a001a, CODE_FOR_cbranchsi4 },
  { 0x8a001b, CODE_FOR_cbranchdi4 },
  { 0x8a0034, CODE_FOR_cbranchsf4 },
  { 0x8a0035, CODE_FOR_cbranchdf4 },
  { 0x8e001a, CODE_FOR_movsicc },
  { 0x8e0033, CODE_FOR_movhfcc },
  { 0x8e0034, CODE_FOR_movsfcc },
  { 0x8e0035, CODE_FOR_movdfcc },
  { 0x99001a, CODE_FOR_cstoresi4 },
  { 0x99001b, CODE_FOR_cstoredi4 },
  { 0x990033, CODE_FOR_cstorehf4 },
  { 0x990034, CODE_FOR_cstoresf4 },
  { 0x990035, CODE_FOR_cstoredf4 },
  { 0x9b001a, CODE_FOR_addvsi4 },
  { 0x9b001b, CODE_FOR_addvdi4 },
  { 0x9c001a, CODE_FOR_subvsi4 },
  { 0x9c001b, CODE_FOR_subvdi4 },
  { 0x9e001a, CODE_FOR_uaddvsi4 },
  { 0x9e001b, CODE_FOR_uaddvdi4 },
  { 0x9f001a, CODE_FOR_usubvsi4 },
  { 0x9f001b, CODE_FOR_usubvdi4 },
  { 0xa1001a, CODE_FOR_negvsi3 },
  { 0xa1001b, CODE_FOR_negvdi3 },
  { 0xa3001a, CODE_FOR_smulsi3_highpart },
  { 0xa30048, CODE_FOR_smulv4hi3_highpart },
  { 0xa4001a, CODE_FOR_umulsi3_highpart },
  { 0xa40048, CODE_FOR_umulv4hi3_highpart },
  { 0xa80018, CODE_FOR_movmemqi },
  { 0xa9001a, CODE_FOR_setmemsi },
  { 0xab0033, CODE_FOR_fmahf4 },
  { 0xab0034, CODE_FOR_fmasf4 },
  { 0xab0035, CODE_FOR_fmadf4 },
  { 0xab0055, CODE_FOR_fmav4hf4 },
  { 0xab0056, CODE_FOR_fmav2sf4 },
  { 0xab0057, CODE_FOR_fmav8hf4 },
  { 0xab0058, CODE_FOR_fmav4sf4 },
  { 0xaf0034, CODE_FOR_rintsf2 },
  { 0xaf0035, CODE_FOR_rintdf2 },
  { 0xb00034, CODE_FOR_roundsf2 },
  { 0xb00035, CODE_FOR_rounddf2 },
  { 0xb10034, CODE_FOR_floorsf2 },
  { 0xb10035, CODE_FOR_floordf2 },
  { 0xb20034, CODE_FOR_ceilsf2 },
  { 0xb20035, CODE_FOR_ceildf2 },
  { 0xb30034, CODE_FOR_btruncsf2 },
  { 0xb30035, CODE_FOR_btruncdf2 },
  { 0xb40034, CODE_FOR_nearbyintsf2 },
  { 0xb40035, CODE_FOR_nearbyintdf2 },
  { 0xb90034, CODE_FOR_copysignsf3 },
  { 0xb90035, CODE_FOR_copysigndf3 },
  { 0xd20034, CODE_FOR_fmaxsf3 },
  { 0xd20035, CODE_FOR_fmaxdf3 },
  { 0xd20056, CODE_FOR_fmaxv2sf3 },
  { 0xd20058, CODE_FOR_fmaxv4sf3 },
  { 0xd30034, CODE_FOR_fminsf3 },
  { 0xd30035, CODE_FOR_fmindf3 },
  { 0xd30056, CODE_FOR_fminv2sf3 },
  { 0xd30058, CODE_FOR_fminv4sf3 },
  { 0xd40047, CODE_FOR_reduc_smax_scal_v8qi },
  { 0xd40048, CODE_FOR_reduc_smax_scal_v4hi },
  { 0xd40049, CODE_FOR_reduc_smax_scal_v2si },
  { 0xd4004a, CODE_FOR_reduc_smax_scal_v16qi },
  { 0xd4004b, CODE_FOR_reduc_smax_scal_v8hi },
  { 0xd4004c, CODE_FOR_reduc_smax_scal_v4si },
  { 0xd40056, CODE_FOR_reduc_smax_scal_v2sf },
  { 0xd40058, CODE_FOR_reduc_smax_scal_v4sf },
  { 0xd50047, CODE_FOR_reduc_smin_scal_v8qi },
  { 0xd50048, CODE_FOR_reduc_smin_scal_v4hi },
  { 0xd50049, CODE_FOR_reduc_smin_scal_v2si },
  { 0xd5004a, CODE_FOR_reduc_smin_scal_v16qi },
  { 0xd5004b, CODE_FOR_reduc_smin_scal_v8hi },
  { 0xd5004c, CODE_FOR_reduc_smin_scal_v4si },
  { 0xd50056, CODE_FOR_reduc_smin_scal_v2sf },
  { 0xd50058, CODE_FOR_reduc_smin_scal_v4sf },
  { 0xd60047, CODE_FOR_reduc_plus_scal_v8qi },
  { 0xd60048, CODE_FOR_reduc_plus_scal_v4hi },
  { 0xd60049, CODE_FOR_reduc_plus_scal_v2si },
  { 0xd6004a, CODE_FOR_reduc_plus_scal_v16qi },
  { 0xd6004b, CODE_FOR_reduc_plus_scal_v8hi },
  { 0xd6004c, CODE_FOR_reduc_plus_scal_v4si },
  { 0xd6004d, CODE_FOR_reduc_plus_scal_v2di },
  { 0xd60056, CODE_FOR_reduc_plus_scal_v2sf },
  { 0xd60058, CODE_FOR_reduc_plus_scal_v4sf },
  { 0xd70047, CODE_FOR_reduc_umax_scal_v8qi },
  { 0xd70048, CODE_FOR_reduc_umax_scal_v4hi },
  { 0xd70049, CODE_FOR_reduc_umax_scal_v2si },
  { 0xd7004a, CODE_FOR_reduc_umax_scal_v16qi },
  { 0xd7004b, CODE_FOR_reduc_umax_scal_v8hi },
  { 0xd7004c, CODE_FOR_reduc_umax_scal_v4si },
  { 0xd80047, CODE_FOR_reduc_umin_scal_v8qi },
  { 0xd80048, CODE_FOR_reduc_umin_scal_v4hi },
  { 0xd80049, CODE_FOR_reduc_umin_scal_v2si },
  { 0xd8004a, CODE_FOR_reduc_umin_scal_v16qi },
  { 0xd8004b, CODE_FOR_reduc_umin_scal_v8hi },
  { 0xd8004c, CODE_FOR_reduc_umin_scal_v4si },
  { 0xdf0047, CODE_FOR_sdot_prodv8qi },
  { 0xdf004a, CODE_FOR_sdot_prodv16qi },
  { 0xe00047, CODE_FOR_widen_ssumv8qi3 },
  { 0xe00048, CODE_FOR_widen_ssumv4hi3 },
  { 0xe00049, CODE_FOR_widen_ssumv2si3 },
  { 0xe0004a, CODE_FOR_widen_ssumv16qi3 },
  { 0xe0004b, CODE_FOR_widen_ssumv8hi3 },
  { 0xe0004c, CODE_FOR_widen_ssumv4si3 },
  { 0xe10047, CODE_FOR_udot_prodv8qi },
  { 0xe1004a, CODE_FOR_udot_prodv16qi },
  { 0xe20047, CODE_FOR_widen_usumv8qi3 },
  { 0xe20048, CODE_FOR_widen_usumv4hi3 },
  { 0xe20049, CODE_FOR_widen_usumv2si3 },
  { 0xe2004a, CODE_FOR_widen_usumv16qi3 },
  { 0xe2004b, CODE_FOR_widen_usumv8hi3 },
  { 0xe2004c, CODE_FOR_widen_usumv4si3 },
  { 0xe7001b, CODE_FOR_vec_pack_trunc_di },
  { 0xe70048, CODE_FOR_vec_pack_trunc_v4hi },
  { 0xe70049, CODE_FOR_vec_pack_trunc_v2si },
  { 0xe7004b, CODE_FOR_vec_pack_trunc_v8hi },
  { 0xe7004c, CODE_FOR_vec_pack_trunc_v4si },
  { 0xe7004d, CODE_FOR_vec_pack_trunc_v2di },
  { 0xea0047, CODE_FOR_vec_permv8qi },
  { 0xea004a, CODE_FOR_vec_permv16qi },
  { 0xec0047, CODE_FOR_vec_setv8qi },
  { 0xec0048, CODE_FOR_vec_setv4hi },
  { 0xec0049, CODE_FOR_vec_setv2si },
  { 0xec004a, CODE_FOR_vec_setv16qi },
  { 0xec004b, CODE_FOR_vec_setv8hi },
  { 0xec004c, CODE_FOR_vec_setv4si },
  { 0xec004d, CODE_FOR_vec_setv2di },
  { 0xec0055, CODE_FOR_vec_setv4hf },
  { 0xec0056, CODE_FOR_vec_setv2sf },
  { 0xec0057, CODE_FOR_vec_setv8hf },
  { 0xec0058, CODE_FOR_vec_setv4sf },
  { 0xf00047, CODE_FOR_vec_unpacks_hi_v8qi },
  { 0xf00048, CODE_FOR_vec_unpacks_hi_v4hi },
  { 0xf00049, CODE_FOR_vec_unpacks_hi_v2si },
  { 0xf0004a, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0xf0004b, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0xf0004c, CODE_FOR_vec_unpacks_hi_v4si },
  { 0xf10047, CODE_FOR_vec_unpacks_lo_v8qi },
  { 0xf10048, CODE_FOR_vec_unpacks_lo_v4hi },
  { 0xf10049, CODE_FOR_vec_unpacks_lo_v2si },
  { 0xf1004a, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0xf1004b, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0xf1004c, CODE_FOR_vec_unpacks_lo_v4si },
  { 0xf40047, CODE_FOR_vec_unpacku_hi_v8qi },
  { 0xf40048, CODE_FOR_vec_unpacku_hi_v4hi },
  { 0xf40049, CODE_FOR_vec_unpacku_hi_v2si },
  { 0xf4004a, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0xf4004b, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0xf4004c, CODE_FOR_vec_unpacku_hi_v4si },
  { 0xf50047, CODE_FOR_vec_unpacku_lo_v8qi },
  { 0xf50048, CODE_FOR_vec_unpacku_lo_v4hi },
  { 0xf50049, CODE_FOR_vec_unpacku_lo_v2si },
  { 0xf5004a, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0xf5004b, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0xf5004c, CODE_FOR_vec_unpacku_lo_v4si },
  { 0xf70047, CODE_FOR_vec_widen_smult_hi_v8qi },
  { 0xf70048, CODE_FOR_vec_widen_smult_hi_v4hi },
  { 0xf70049, CODE_FOR_vec_widen_smult_hi_v2si },
  { 0xf7004a, CODE_FOR_vec_widen_smult_hi_v16qi },
  { 0xf7004b, CODE_FOR_vec_widen_smult_hi_v8hi },
  { 0xf7004c, CODE_FOR_vec_widen_smult_hi_v4si },
  { 0xf80047, CODE_FOR_vec_widen_smult_lo_v8qi },
  { 0xf80048, CODE_FOR_vec_widen_smult_lo_v4hi },
  { 0xf80049, CODE_FOR_vec_widen_smult_lo_v2si },
  { 0xf8004a, CODE_FOR_vec_widen_smult_lo_v16qi },
  { 0xf8004b, CODE_FOR_vec_widen_smult_lo_v8hi },
  { 0xf8004c, CODE_FOR_vec_widen_smult_lo_v4si },
  { 0xfa0047, CODE_FOR_vec_widen_sshiftl_hi_v8qi },
  { 0xfa0048, CODE_FOR_vec_widen_sshiftl_hi_v4hi },
  { 0xfa0049, CODE_FOR_vec_widen_sshiftl_hi_v2si },
  { 0xfa004a, CODE_FOR_vec_widen_sshiftl_hi_v16qi },
  { 0xfa004b, CODE_FOR_vec_widen_sshiftl_hi_v8hi },
  { 0xfa004c, CODE_FOR_vec_widen_sshiftl_hi_v4si },
  { 0xfb0047, CODE_FOR_vec_widen_sshiftl_lo_v8qi },
  { 0xfb0048, CODE_FOR_vec_widen_sshiftl_lo_v4hi },
  { 0xfb0049, CODE_FOR_vec_widen_sshiftl_lo_v2si },
  { 0xfb004a, CODE_FOR_vec_widen_sshiftl_lo_v16qi },
  { 0xfb004b, CODE_FOR_vec_widen_sshiftl_lo_v8hi },
  { 0xfb004c, CODE_FOR_vec_widen_sshiftl_lo_v4si },
  { 0xfd0047, CODE_FOR_vec_widen_umult_hi_v8qi },
  { 0xfd0048, CODE_FOR_vec_widen_umult_hi_v4hi },
  { 0xfd0049, CODE_FOR_vec_widen_umult_hi_v2si },
  { 0xfd004a, CODE_FOR_vec_widen_umult_hi_v16qi },
  { 0xfd004b, CODE_FOR_vec_widen_umult_hi_v8hi },
  { 0xfd004c, CODE_FOR_vec_widen_umult_hi_v4si },
  { 0xfe0047, CODE_FOR_vec_widen_umult_lo_v8qi },
  { 0xfe0048, CODE_FOR_vec_widen_umult_lo_v4hi },
  { 0xfe0049, CODE_FOR_vec_widen_umult_lo_v2si },
  { 0xfe004a, CODE_FOR_vec_widen_umult_lo_v16qi },
  { 0xfe004b, CODE_FOR_vec_widen_umult_lo_v8hi },
  { 0xfe004c, CODE_FOR_vec_widen_umult_lo_v4si },
  { 0x1000047, CODE_FOR_vec_widen_ushiftl_hi_v8qi },
  { 0x1000048, CODE_FOR_vec_widen_ushiftl_hi_v4hi },
  { 0x1000049, CODE_FOR_vec_widen_ushiftl_hi_v2si },
  { 0x100004a, CODE_FOR_vec_widen_ushiftl_hi_v16qi },
  { 0x100004b, CODE_FOR_vec_widen_ushiftl_hi_v8hi },
  { 0x100004c, CODE_FOR_vec_widen_ushiftl_hi_v4si },
  { 0x1010047, CODE_FOR_vec_widen_ushiftl_lo_v8qi },
  { 0x1010048, CODE_FOR_vec_widen_ushiftl_lo_v4hi },
  { 0x1010049, CODE_FOR_vec_widen_ushiftl_lo_v2si },
  { 0x101004a, CODE_FOR_vec_widen_ushiftl_lo_v16qi },
  { 0x101004b, CODE_FOR_vec_widen_ushiftl_lo_v8hi },
  { 0x101004c, CODE_FOR_vec_widen_ushiftl_lo_v4si },
  { 0x1090018, CODE_FOR_atomic_add_fetchqi },
  { 0x1090019, CODE_FOR_atomic_add_fetchhi },
  { 0x109001a, CODE_FOR_atomic_add_fetchsi },
  { 0x109001b, CODE_FOR_atomic_add_fetchdi },
  { 0x10a0018, CODE_FOR_atomic_addqi },
  { 0x10a0019, CODE_FOR_atomic_addhi },
  { 0x10a001a, CODE_FOR_atomic_addsi },
  { 0x10a001b, CODE_FOR_atomic_adddi },
  { 0x10b0018, CODE_FOR_atomic_and_fetchqi },
  { 0x10b0019, CODE_FOR_atomic_and_fetchhi },
  { 0x10b001a, CODE_FOR_atomic_and_fetchsi },
  { 0x10b001b, CODE_FOR_atomic_and_fetchdi },
  { 0x10c0018, CODE_FOR_atomic_andqi },
  { 0x10c0019, CODE_FOR_atomic_andhi },
  { 0x10c001a, CODE_FOR_atomic_andsi },
  { 0x10c001b, CODE_FOR_atomic_anddi },
  { 0x1100018, CODE_FOR_atomic_compare_and_swapqi },
  { 0x1100019, CODE_FOR_atomic_compare_and_swaphi },
  { 0x110001a, CODE_FOR_atomic_compare_and_swapsi },
  { 0x110001b, CODE_FOR_atomic_compare_and_swapdi },
  { 0x1110018, CODE_FOR_atomic_exchangeqi },
  { 0x1110019, CODE_FOR_atomic_exchangehi },
  { 0x111001a, CODE_FOR_atomic_exchangesi },
  { 0x111001b, CODE_FOR_atomic_exchangedi },
  { 0x1120018, CODE_FOR_atomic_fetch_addqi },
  { 0x1120019, CODE_FOR_atomic_fetch_addhi },
  { 0x112001a, CODE_FOR_atomic_fetch_addsi },
  { 0x112001b, CODE_FOR_atomic_fetch_adddi },
  { 0x1130018, CODE_FOR_atomic_fetch_andqi },
  { 0x1130019, CODE_FOR_atomic_fetch_andhi },
  { 0x113001a, CODE_FOR_atomic_fetch_andsi },
  { 0x113001b, CODE_FOR_atomic_fetch_anddi },
  { 0x1140018, CODE_FOR_atomic_fetch_nandqi },
  { 0x1140019, CODE_FOR_atomic_fetch_nandhi },
  { 0x114001a, CODE_FOR_atomic_fetch_nandsi },
  { 0x114001b, CODE_FOR_atomic_fetch_nanddi },
  { 0x1150018, CODE_FOR_atomic_fetch_orqi },
  { 0x1150019, CODE_FOR_atomic_fetch_orhi },
  { 0x115001a, CODE_FOR_atomic_fetch_orsi },
  { 0x115001b, CODE_FOR_atomic_fetch_ordi },
  { 0x1160018, CODE_FOR_atomic_fetch_subqi },
  { 0x1160019, CODE_FOR_atomic_fetch_subhi },
  { 0x116001a, CODE_FOR_atomic_fetch_subsi },
  { 0x116001b, CODE_FOR_atomic_fetch_subdi },
  { 0x1170018, CODE_FOR_atomic_fetch_xorqi },
  { 0x1170019, CODE_FOR_atomic_fetch_xorhi },
  { 0x117001a, CODE_FOR_atomic_fetch_xorsi },
  { 0x117001b, CODE_FOR_atomic_fetch_xordi },
  { 0x1180018, CODE_FOR_atomic_loadqi },
  { 0x1180019, CODE_FOR_atomic_loadhi },
  { 0x118001a, CODE_FOR_atomic_loadsi },
  { 0x118001b, CODE_FOR_atomic_loaddi },
  { 0x1190018, CODE_FOR_atomic_nand_fetchqi },
  { 0x1190019, CODE_FOR_atomic_nand_fetchhi },
  { 0x119001a, CODE_FOR_atomic_nand_fetchsi },
  { 0x119001b, CODE_FOR_atomic_nand_fetchdi },
  { 0x11a0018, CODE_FOR_atomic_nandqi },
  { 0x11a0019, CODE_FOR_atomic_nandhi },
  { 0x11a001a, CODE_FOR_atomic_nandsi },
  { 0x11a001b, CODE_FOR_atomic_nanddi },
  { 0x11b0018, CODE_FOR_atomic_or_fetchqi },
  { 0x11b0019, CODE_FOR_atomic_or_fetchhi },
  { 0x11b001a, CODE_FOR_atomic_or_fetchsi },
  { 0x11b001b, CODE_FOR_atomic_or_fetchdi },
  { 0x11c0018, CODE_FOR_atomic_orqi },
  { 0x11c0019, CODE_FOR_atomic_orhi },
  { 0x11c001a, CODE_FOR_atomic_orsi },
  { 0x11c001b, CODE_FOR_atomic_ordi },
  { 0x11d0018, CODE_FOR_atomic_storeqi },
  { 0x11d0019, CODE_FOR_atomic_storehi },
  { 0x11d001a, CODE_FOR_atomic_storesi },
  { 0x11e0018, CODE_FOR_atomic_sub_fetchqi },
  { 0x11e0019, CODE_FOR_atomic_sub_fetchhi },
  { 0x11e001a, CODE_FOR_atomic_sub_fetchsi },
  { 0x11e001b, CODE_FOR_atomic_sub_fetchdi },
  { 0x11f0018, CODE_FOR_atomic_subqi },
  { 0x11f0019, CODE_FOR_atomic_subhi },
  { 0x11f001a, CODE_FOR_atomic_subsi },
  { 0x11f001b, CODE_FOR_atomic_subdi },
  { 0x1200018, CODE_FOR_atomic_xor_fetchqi },
  { 0x1200019, CODE_FOR_atomic_xor_fetchhi },
  { 0x120001a, CODE_FOR_atomic_xor_fetchsi },
  { 0x120001b, CODE_FOR_atomic_xor_fetchdi },
  { 0x1210018, CODE_FOR_atomic_xorqi },
  { 0x1210019, CODE_FOR_atomic_xorhi },
  { 0x121001a, CODE_FOR_atomic_xorsi },
  { 0x121001b, CODE_FOR_atomic_xordi },
  { 0x122001a, CODE_FOR_get_thread_pointersi },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendhfsf2;
  ena[7] = HAVE_extendhfdf2;
  ena[8] = HAVE_extendsfdf2;
  ena[9] = HAVE_truncsfhf2;
  ena[10] = HAVE_truncdfhf2;
  ena[11] = HAVE_truncdfsf2;
  ena[12] = HAVE_zero_extendqisi2;
  ena[13] = HAVE_zero_extendqidi2;
  ena[14] = HAVE_zero_extendhisi2;
  ena[15] = HAVE_zero_extendhidi2;
  ena[16] = HAVE_zero_extendsidi2;
  ena[17] = HAVE_floatsihf2;
  ena[18] = HAVE_floatsisf2;
  ena[19] = HAVE_floatsidf2;
  ena[20] = HAVE_floatdihf2;
  ena[21] = HAVE_floatv2siv2sf2;
  ena[22] = HAVE_floatv4siv4sf2;
  ena[23] = HAVE_floatunssisf2;
  ena[24] = HAVE_floatunssidf2;
  ena[25] = HAVE_floatunsv2siv2sf2;
  ena[26] = HAVE_floatunsv4siv4sf2;
  ena[27] = HAVE_lroundsfsi2;
  ena[28] = HAVE_lrounddfsi2;
  ena[29] = HAVE_lfloorsfsi2;
  ena[30] = HAVE_lfloordfsi2;
  ena[31] = HAVE_lceilsfsi2;
  ena[32] = HAVE_lceildfsi2;
  ena[33] = HAVE_fix_trunchfsi2;
  ena[34] = HAVE_fix_trunchfdi2;
  ena[35] = HAVE_fix_truncsfsi2;
  ena[36] = HAVE_fix_truncdfsi2;
  ena[37] = HAVE_fix_truncv2sfv2si2;
  ena[38] = HAVE_fix_truncv4sfv4si2;
  ena[39] = HAVE_fixuns_truncsfsi2;
  ena[40] = HAVE_fixuns_truncdfsi2;
  ena[41] = HAVE_fixuns_truncv2sfv2si2;
  ena[42] = HAVE_fixuns_truncv4sfv4si2;
  ena[43] = HAVE_mulhisi3;
  ena[44] = HAVE_mulsidi3;
  ena[45] = HAVE_umulsidi3;
  ena[46] = HAVE_maddhisi4;
  ena[47] = HAVE_maddhidi4;
  ena[48] = HAVE_maddsidi4;
  ena[49] = HAVE_umaddsidi4;
  ena[50] = HAVE_vec_load_lanesdidi;
  ena[51] = HAVE_vec_load_lanestidi;
  ena[52] = HAVE_vec_load_laneseidi;
  ena[53] = HAVE_vec_load_lanesoidi;
  ena[54] = HAVE_vec_load_lanestiv8qi;
  ena[55] = HAVE_vec_load_laneseiv8qi;
  ena[56] = HAVE_vec_load_lanesoiv8qi;
  ena[57] = HAVE_vec_load_lanesv8qiv8qi;
  ena[58] = HAVE_vec_load_lanestiv4hi;
  ena[59] = HAVE_vec_load_laneseiv4hi;
  ena[60] = HAVE_vec_load_lanesoiv4hi;
  ena[61] = HAVE_vec_load_lanesv4hiv4hi;
  ena[62] = HAVE_vec_load_lanestiv2si;
  ena[63] = HAVE_vec_load_laneseiv2si;
  ena[64] = HAVE_vec_load_lanesoiv2si;
  ena[65] = HAVE_vec_load_lanesv2siv2si;
  ena[66] = HAVE_vec_load_lanesoiv16qi;
  ena[67] = HAVE_vec_load_lanesciv16qi;
  ena[68] = HAVE_vec_load_lanesxiv16qi;
  ena[69] = HAVE_vec_load_lanesv16qiv16qi;
  ena[70] = HAVE_vec_load_lanesoiv8hi;
  ena[71] = HAVE_vec_load_lanesciv8hi;
  ena[72] = HAVE_vec_load_lanesxiv8hi;
  ena[73] = HAVE_vec_load_lanesv8hiv8hi;
  ena[74] = HAVE_vec_load_lanesoiv4si;
  ena[75] = HAVE_vec_load_lanesciv4si;
  ena[76] = HAVE_vec_load_lanesxiv4si;
  ena[77] = HAVE_vec_load_lanesv4siv4si;
  ena[78] = HAVE_vec_load_lanesv2div2di;
  ena[79] = HAVE_vec_load_lanestiv4hf;
  ena[80] = HAVE_vec_load_laneseiv4hf;
  ena[81] = HAVE_vec_load_lanesoiv4hf;
  ena[82] = HAVE_vec_load_lanesv4hfv4hf;
  ena[83] = HAVE_vec_load_lanestiv2sf;
  ena[84] = HAVE_vec_load_laneseiv2sf;
  ena[85] = HAVE_vec_load_lanesoiv2sf;
  ena[86] = HAVE_vec_load_lanesv2sfv2sf;
  ena[87] = HAVE_vec_load_lanesoiv8hf;
  ena[88] = HAVE_vec_load_lanesciv8hf;
  ena[89] = HAVE_vec_load_lanesxiv8hf;
  ena[90] = HAVE_vec_load_lanesv8hfv8hf;
  ena[91] = HAVE_vec_load_lanesoiv4sf;
  ena[92] = HAVE_vec_load_lanesciv4sf;
  ena[93] = HAVE_vec_load_lanesxiv4sf;
  ena[94] = HAVE_vec_load_lanesv4sfv4sf;
  ena[95] = HAVE_vec_store_lanesdidi;
  ena[96] = HAVE_vec_store_lanestidi;
  ena[97] = HAVE_vec_store_laneseidi;
  ena[98] = HAVE_vec_store_lanesoidi;
  ena[99] = HAVE_vec_store_lanestiv8qi;
  ena[100] = HAVE_vec_store_laneseiv8qi;
  ena[101] = HAVE_vec_store_lanesoiv8qi;
  ena[102] = HAVE_vec_store_lanesv8qiv8qi;
  ena[103] = HAVE_vec_store_lanestiv4hi;
  ena[104] = HAVE_vec_store_laneseiv4hi;
  ena[105] = HAVE_vec_store_lanesoiv4hi;
  ena[106] = HAVE_vec_store_lanesv4hiv4hi;
  ena[107] = HAVE_vec_store_lanestiv2si;
  ena[108] = HAVE_vec_store_laneseiv2si;
  ena[109] = HAVE_vec_store_lanesoiv2si;
  ena[110] = HAVE_vec_store_lanesv2siv2si;
  ena[111] = HAVE_vec_store_lanesoiv16qi;
  ena[112] = HAVE_vec_store_lanesciv16qi;
  ena[113] = HAVE_vec_store_lanesxiv16qi;
  ena[114] = HAVE_vec_store_lanesv16qiv16qi;
  ena[115] = HAVE_vec_store_lanesoiv8hi;
  ena[116] = HAVE_vec_store_lanesciv8hi;
  ena[117] = HAVE_vec_store_lanesxiv8hi;
  ena[118] = HAVE_vec_store_lanesv8hiv8hi;
  ena[119] = HAVE_vec_store_lanesoiv4si;
  ena[120] = HAVE_vec_store_lanesciv4si;
  ena[121] = HAVE_vec_store_lanesxiv4si;
  ena[122] = HAVE_vec_store_lanesv4siv4si;
  ena[123] = HAVE_vec_store_lanesv2div2di;
  ena[124] = HAVE_vec_store_lanestiv4hf;
  ena[125] = HAVE_vec_store_laneseiv4hf;
  ena[126] = HAVE_vec_store_lanesoiv4hf;
  ena[127] = HAVE_vec_store_lanesv4hfv4hf;
  ena[128] = HAVE_vec_store_lanestiv2sf;
  ena[129] = HAVE_vec_store_laneseiv2sf;
  ena[130] = HAVE_vec_store_lanesoiv2sf;
  ena[131] = HAVE_vec_store_lanesv2sfv2sf;
  ena[132] = HAVE_vec_store_lanesoiv8hf;
  ena[133] = HAVE_vec_store_lanesciv8hf;
  ena[134] = HAVE_vec_store_lanesxiv8hf;
  ena[135] = HAVE_vec_store_lanesv8hfv8hf;
  ena[136] = HAVE_vec_store_lanesoiv4sf;
  ena[137] = HAVE_vec_store_lanesciv4sf;
  ena[138] = HAVE_vec_store_lanesxiv4sf;
  ena[139] = HAVE_vec_store_lanesv4sfv4sf;
  ena[140] = HAVE_vcondv8qiv8qi;
  ena[141] = HAVE_vcondv4hiv4hi;
  ena[142] = HAVE_vcondv2siv2si;
  ena[143] = HAVE_vcondv16qiv16qi;
  ena[144] = HAVE_vcondv8hiv8hi;
  ena[145] = HAVE_vcondv4siv4si;
  ena[146] = HAVE_vcondv2sfv2sf;
  ena[147] = HAVE_vcondv4sfv4sf;
  ena[148] = HAVE_vconduv8qiv8qi;
  ena[149] = HAVE_vconduv4hiv4hi;
  ena[150] = HAVE_vconduv2siv2si;
  ena[151] = HAVE_vconduv16qiv16qi;
  ena[152] = HAVE_vconduv8hiv8hi;
  ena[153] = HAVE_vconduv4siv4si;
  ena[154] = HAVE_vec_extractv8qiqi;
  ena[155] = HAVE_vec_extractv16qiqi;
  ena[156] = HAVE_vec_extractv4hihi;
  ena[157] = HAVE_vec_extractv8hihi;
  ena[158] = HAVE_vec_extractv2sisi;
  ena[159] = HAVE_vec_extractv4sisi;
  ena[160] = HAVE_vec_extractv2didi;
  ena[161] = HAVE_vec_extractv4hfhf;
  ena[162] = HAVE_vec_extractv8hfhf;
  ena[163] = HAVE_vec_extractv2sfsf;
  ena[164] = HAVE_vec_extractv4sfsf;
  ena[165] = HAVE_vec_initv8qiqi;
  ena[166] = HAVE_vec_initv16qiqi;
  ena[167] = HAVE_vec_initv4hihi;
  ena[168] = HAVE_vec_initv8hihi;
  ena[169] = HAVE_vec_initv2sisi;
  ena[170] = HAVE_vec_initv4sisi;
  ena[171] = HAVE_vec_initv2didi;
  ena[172] = HAVE_vec_initv4hfhf;
  ena[173] = HAVE_vec_initv8hfhf;
  ena[174] = HAVE_vec_initv2sfsf;
  ena[175] = HAVE_vec_initv4sfsf;
  ena[176] = HAVE_addsi3;
  ena[177] = HAVE_adddi3;
  ena[178] = HAVE_addqq3;
  ena[179] = HAVE_addhq3;
  ena[180] = HAVE_addsq3;
  ena[181] = HAVE_adduqq3;
  ena[182] = HAVE_adduhq3;
  ena[183] = HAVE_addusq3;
  ena[184] = HAVE_addha3;
  ena[185] = HAVE_addsa3;
  ena[186] = HAVE_adduha3;
  ena[187] = HAVE_addusa3;
  ena[188] = HAVE_addhf3;
  ena[189] = HAVE_addsf3;
  ena[190] = HAVE_adddf3;
  ena[191] = HAVE_addv8qi3;
  ena[192] = HAVE_addv4hi3;
  ena[193] = HAVE_addv2si3;
  ena[194] = HAVE_addv16qi3;
  ena[195] = HAVE_addv8hi3;
  ena[196] = HAVE_addv4si3;
  ena[197] = HAVE_addv2di3;
  ena[198] = HAVE_addv4qq3;
  ena[199] = HAVE_addv2hq3;
  ena[200] = HAVE_addv2ha3;
  ena[201] = HAVE_addv4hf3;
  ena[202] = HAVE_addv2sf3;
  ena[203] = HAVE_addv8hf3;
  ena[204] = HAVE_addv4sf3;
  ena[205] = HAVE_ssaddqq3;
  ena[206] = HAVE_ssaddhq3;
  ena[207] = HAVE_ssaddsq3;
  ena[208] = HAVE_ssaddha3;
  ena[209] = HAVE_ssaddsa3;
  ena[210] = HAVE_ssaddv4qq3;
  ena[211] = HAVE_ssaddv2hq3;
  ena[212] = HAVE_ssaddv2ha3;
  ena[213] = HAVE_usadduqq3;
  ena[214] = HAVE_usadduhq3;
  ena[215] = HAVE_usadduha3;
  ena[216] = HAVE_usaddv4uqq3;
  ena[217] = HAVE_usaddv2uhq3;
  ena[218] = HAVE_usaddv2uha3;
  ena[219] = HAVE_subsi3;
  ena[220] = HAVE_subdi3;
  ena[221] = HAVE_subqq3;
  ena[222] = HAVE_subhq3;
  ena[223] = HAVE_subsq3;
  ena[224] = HAVE_subuqq3;
  ena[225] = HAVE_subuhq3;
  ena[226] = HAVE_subusq3;
  ena[227] = HAVE_subha3;
  ena[228] = HAVE_subsa3;
  ena[229] = HAVE_subuha3;
  ena[230] = HAVE_subusa3;
  ena[231] = HAVE_subhf3;
  ena[232] = HAVE_subsf3;
  ena[233] = HAVE_subdf3;
  ena[234] = HAVE_subv8qi3;
  ena[235] = HAVE_subv4hi3;
  ena[236] = HAVE_subv2si3;
  ena[237] = HAVE_subv16qi3;
  ena[238] = HAVE_subv8hi3;
  ena[239] = HAVE_subv4si3;
  ena[240] = HAVE_subv2di3;
  ena[241] = HAVE_subv4qq3;
  ena[242] = HAVE_subv2hq3;
  ena[243] = HAVE_subv2ha3;
  ena[244] = HAVE_subv4hf3;
  ena[245] = HAVE_subv2sf3;
  ena[246] = HAVE_subv8hf3;
  ena[247] = HAVE_subv4sf3;
  ena[248] = HAVE_sssubqq3;
  ena[249] = HAVE_sssubhq3;
  ena[250] = HAVE_sssubsq3;
  ena[251] = HAVE_sssubha3;
  ena[252] = HAVE_sssubsa3;
  ena[253] = HAVE_sssubv4qq3;
  ena[254] = HAVE_sssubv2hq3;
  ena[255] = HAVE_sssubv2ha3;
  ena[256] = HAVE_ussubuqq3;
  ena[257] = HAVE_ussubuhq3;
  ena[258] = HAVE_ussubuha3;
  ena[259] = HAVE_ussubv4uqq3;
  ena[260] = HAVE_ussubv2uhq3;
  ena[261] = HAVE_ussubv2uha3;
  ena[262] = HAVE_mulhi3;
  ena[263] = HAVE_mulsi3;
  ena[264] = HAVE_mulqq3;
  ena[265] = HAVE_mulhq3;
  ena[266] = HAVE_mulsq3;
  ena[267] = HAVE_mulha3;
  ena[268] = HAVE_mulsa3;
  ena[269] = HAVE_muluha3;
  ena[270] = HAVE_mulusa3;
  ena[271] = HAVE_mulhf3;
  ena[272] = HAVE_mulsf3;
  ena[273] = HAVE_muldf3;
  ena[274] = HAVE_mulv8qi3;
  ena[275] = HAVE_mulv4hi3;
  ena[276] = HAVE_mulv2si3;
  ena[277] = HAVE_mulv16qi3;
  ena[278] = HAVE_mulv8hi3;
  ena[279] = HAVE_mulv4si3;
  ena[280] = HAVE_mulv4hf3;
  ena[281] = HAVE_mulv2sf3;
  ena[282] = HAVE_mulv8hf3;
  ena[283] = HAVE_mulv4sf3;
  ena[284] = HAVE_ssmulha3;
  ena[285] = HAVE_ssmulsa3;
  ena[286] = HAVE_usmuluha3;
  ena[287] = HAVE_usmulusa3;
  ena[288] = HAVE_divsi3;
  ena[289] = HAVE_divhf3;
  ena[290] = HAVE_divsf3;
  ena[291] = HAVE_divdf3;
  ena[292] = HAVE_udivsi3;
  ena[293] = HAVE_modsi3;
  ena[294] = HAVE_andsi3;
  ena[295] = HAVE_anddi3;
  ena[296] = HAVE_andv8qi3;
  ena[297] = HAVE_andv4hi3;
  ena[298] = HAVE_andv2si3;
  ena[299] = HAVE_andv16qi3;
  ena[300] = HAVE_andv8hi3;
  ena[301] = HAVE_andv4si3;
  ena[302] = HAVE_andv2di3;
  ena[303] = HAVE_andv4hf3;
  ena[304] = HAVE_andv2sf3;
  ena[305] = HAVE_andv8hf3;
  ena[306] = HAVE_andv4sf3;
  ena[307] = HAVE_iorsi3;
  ena[308] = HAVE_iordi3;
  ena[309] = HAVE_iorv8qi3;
  ena[310] = HAVE_iorv4hi3;
  ena[311] = HAVE_iorv2si3;
  ena[312] = HAVE_iorv16qi3;
  ena[313] = HAVE_iorv8hi3;
  ena[314] = HAVE_iorv4si3;
  ena[315] = HAVE_iorv2di3;
  ena[316] = HAVE_iorv4hf3;
  ena[317] = HAVE_iorv2sf3;
  ena[318] = HAVE_iorv8hf3;
  ena[319] = HAVE_iorv4sf3;
  ena[320] = HAVE_xorsi3;
  ena[321] = HAVE_xordi3;
  ena[322] = HAVE_xorv8qi3;
  ena[323] = HAVE_xorv4hi3;
  ena[324] = HAVE_xorv2si3;
  ena[325] = HAVE_xorv16qi3;
  ena[326] = HAVE_xorv8hi3;
  ena[327] = HAVE_xorv4si3;
  ena[328] = HAVE_xorv2di3;
  ena[329] = HAVE_xorv4hf3;
  ena[330] = HAVE_xorv2sf3;
  ena[331] = HAVE_xorv8hf3;
  ena[332] = HAVE_xorv4sf3;
  ena[333] = HAVE_ashlsi3;
  ena[334] = HAVE_ashldi3;
  ena[335] = HAVE_ashrsi3;
  ena[336] = HAVE_ashrdi3;
  ena[337] = HAVE_lshrsi3;
  ena[338] = HAVE_lshrdi3;
  ena[339] = HAVE_rotlsi3;
  ena[340] = HAVE_rotrsi3;
  ena[341] = HAVE_vashlv8qi3;
  ena[342] = HAVE_vashlv4hi3;
  ena[343] = HAVE_vashlv2si3;
  ena[344] = HAVE_vashlv16qi3;
  ena[345] = HAVE_vashlv8hi3;
  ena[346] = HAVE_vashlv4si3;
  ena[347] = HAVE_vashrv8qi3;
  ena[348] = HAVE_vashrv4hi3;
  ena[349] = HAVE_vashrv2si3;
  ena[350] = HAVE_vashrv16qi3;
  ena[351] = HAVE_vashrv8hi3;
  ena[352] = HAVE_vashrv4si3;
  ena[353] = HAVE_vlshrv8qi3;
  ena[354] = HAVE_vlshrv4hi3;
  ena[355] = HAVE_vlshrv2si3;
  ena[356] = HAVE_vlshrv16qi3;
  ena[357] = HAVE_vlshrv8hi3;
  ena[358] = HAVE_vlshrv4si3;
  ena[359] = HAVE_sminsi3;
  ena[360] = HAVE_sminsf3;
  ena[361] = HAVE_smindf3;
  ena[362] = HAVE_sminv8qi3;
  ena[363] = HAVE_sminv4hi3;
  ena[364] = HAVE_sminv2si3;
  ena[365] = HAVE_sminv16qi3;
  ena[366] = HAVE_sminv8hi3;
  ena[367] = HAVE_sminv4si3;
  ena[368] = HAVE_sminv2sf3;
  ena[369] = HAVE_sminv4sf3;
  ena[370] = HAVE_smaxsi3;
  ena[371] = HAVE_smaxsf3;
  ena[372] = HAVE_smaxdf3;
  ena[373] = HAVE_smaxv8qi3;
  ena[374] = HAVE_smaxv4hi3;
  ena[375] = HAVE_smaxv2si3;
  ena[376] = HAVE_smaxv16qi3;
  ena[377] = HAVE_smaxv8hi3;
  ena[378] = HAVE_smaxv4si3;
  ena[379] = HAVE_smaxv2sf3;
  ena[380] = HAVE_smaxv4sf3;
  ena[381] = HAVE_uminsi3;
  ena[382] = HAVE_uminv8qi3;
  ena[383] = HAVE_uminv4hi3;
  ena[384] = HAVE_uminv2si3;
  ena[385] = HAVE_uminv16qi3;
  ena[386] = HAVE_uminv8hi3;
  ena[387] = HAVE_uminv4si3;
  ena[388] = HAVE_umaxsi3;
  ena[389] = HAVE_umaxv8qi3;
  ena[390] = HAVE_umaxv4hi3;
  ena[391] = HAVE_umaxv2si3;
  ena[392] = HAVE_umaxv16qi3;
  ena[393] = HAVE_umaxv8hi3;
  ena[394] = HAVE_umaxv4si3;
  ena[395] = HAVE_negsi2;
  ena[396] = HAVE_negdi2;
  ena[397] = HAVE_neghf2;
  ena[398] = HAVE_negsf2;
  ena[399] = HAVE_negdf2;
  ena[400] = HAVE_negv8qi2;
  ena[401] = HAVE_negv4hi2;
  ena[402] = HAVE_negv2si2;
  ena[403] = HAVE_negv16qi2;
  ena[404] = HAVE_negv8hi2;
  ena[405] = HAVE_negv4si2;
  ena[406] = HAVE_negv4hf2;
  ena[407] = HAVE_negv2sf2;
  ena[408] = HAVE_negv8hf2;
  ena[409] = HAVE_negv4sf2;
  ena[410] = HAVE_abssi2;
  ena[411] = HAVE_abshf2;
  ena[412] = HAVE_abssf2;
  ena[413] = HAVE_absdf2;
  ena[414] = HAVE_absv8qi2;
  ena[415] = HAVE_absv4hi2;
  ena[416] = HAVE_absv2si2;
  ena[417] = HAVE_absv16qi2;
  ena[418] = HAVE_absv8hi2;
  ena[419] = HAVE_absv4si2;
  ena[420] = HAVE_absv4hf2;
  ena[421] = HAVE_absv2sf2;
  ena[422] = HAVE_absv8hf2;
  ena[423] = HAVE_absv4sf2;
  ena[424] = HAVE_one_cmplsi2;
  ena[425] = HAVE_one_cmpldi2;
  ena[426] = HAVE_one_cmplv8qi2;
  ena[427] = HAVE_one_cmplv4hi2;
  ena[428] = HAVE_one_cmplv2si2;
  ena[429] = HAVE_one_cmplv16qi2;
  ena[430] = HAVE_one_cmplv8hi2;
  ena[431] = HAVE_one_cmplv4si2;
  ena[432] = HAVE_one_cmplv2di2;
  ena[433] = HAVE_one_cmplv4hf2;
  ena[434] = HAVE_one_cmplv2sf2;
  ena[435] = HAVE_one_cmplv8hf2;
  ena[436] = HAVE_one_cmplv4sf2;
  ena[437] = HAVE_bswaphi2;
  ena[438] = HAVE_bswapsi2;
  ena[439] = HAVE_clzsi2;
  ena[440] = HAVE_clzv8qi2;
  ena[441] = HAVE_clzv4hi2;
  ena[442] = HAVE_clzv2si2;
  ena[443] = HAVE_clzv16qi2;
  ena[444] = HAVE_clzv8hi2;
  ena[445] = HAVE_clzv4si2;
  ena[446] = HAVE_ctzsi2;
  ena[447] = HAVE_popcountv8qi2;
  ena[448] = HAVE_popcountv16qi2;
  ena[449] = HAVE_sqrtsf2;
  ena[450] = HAVE_sqrtdf2;
  ena[451] = HAVE_movqi;
  ena[452] = HAVE_movhi;
  ena[453] = HAVE_movsi;
  ena[454] = HAVE_movdi;
  ena[455] = HAVE_movti;
  ena[456] = HAVE_movei;
  ena[457] = HAVE_movoi;
  ena[458] = HAVE_movci;
  ena[459] = HAVE_movxi;
  ena[460] = HAVE_movhf;
  ena[461] = HAVE_movsf;
  ena[462] = HAVE_movdf;
  ena[463] = HAVE_movv8qi;
  ena[464] = HAVE_movv4hi;
  ena[465] = HAVE_movv2si;
  ena[466] = HAVE_movv16qi;
  ena[467] = HAVE_movv8hi;
  ena[468] = HAVE_movv4si;
  ena[469] = HAVE_movv2di;
  ena[470] = HAVE_movv4hf;
  ena[471] = HAVE_movv2sf;
  ena[472] = HAVE_movv8hf;
  ena[473] = HAVE_movv4sf;
  ena[474] = HAVE_movmisalignhi;
  ena[475] = HAVE_movmisalignsi;
  ena[476] = HAVE_movmisaligndi;
  ena[477] = HAVE_movmisalignv8qi;
  ena[478] = HAVE_movmisalignv4hi;
  ena[479] = HAVE_movmisalignv2si;
  ena[480] = HAVE_movmisalignv16qi;
  ena[481] = HAVE_movmisalignv8hi;
  ena[482] = HAVE_movmisalignv4si;
  ena[483] = HAVE_movmisalignv2di;
  ena[484] = HAVE_movmisalignv4hf;
  ena[485] = HAVE_movmisalignv2sf;
  ena[486] = HAVE_movmisalignv8hf;
  ena[487] = HAVE_movmisalignv4sf;
  ena[488] = HAVE_reload_inhi;
  ena[489] = HAVE_reload_outhi;
  ena[490] = HAVE_reload_outdf;
  ena[491] = HAVE_cbranchqi4;
  ena[492] = HAVE_cbranchsi4;
  ena[493] = HAVE_cbranchdi4;
  ena[494] = HAVE_cbranchsf4;
  ena[495] = HAVE_cbranchdf4;
  ena[496] = HAVE_movsicc;
  ena[497] = HAVE_movhfcc;
  ena[498] = HAVE_movsfcc;
  ena[499] = HAVE_movdfcc;
  ena[500] = HAVE_cstoresi4;
  ena[501] = HAVE_cstoredi4;
  ena[502] = HAVE_cstorehf4;
  ena[503] = HAVE_cstoresf4;
  ena[504] = HAVE_cstoredf4;
  ena[505] = HAVE_addvsi4;
  ena[506] = HAVE_addvdi4;
  ena[507] = HAVE_subvsi4;
  ena[508] = HAVE_subvdi4;
  ena[509] = HAVE_uaddvsi4;
  ena[510] = HAVE_uaddvdi4;
  ena[511] = HAVE_usubvsi4;
  ena[512] = HAVE_usubvdi4;
  ena[513] = HAVE_negvsi3;
  ena[514] = HAVE_negvdi3;
  ena[515] = HAVE_smulsi3_highpart;
  ena[516] = HAVE_smulv4hi3_highpart;
  ena[517] = HAVE_umulsi3_highpart;
  ena[518] = HAVE_umulv4hi3_highpart;
  ena[519] = HAVE_movmemqi;
  ena[520] = HAVE_setmemsi;
  ena[521] = HAVE_fmahf4;
  ena[522] = HAVE_fmasf4;
  ena[523] = HAVE_fmadf4;
  ena[524] = HAVE_fmav4hf4;
  ena[525] = HAVE_fmav2sf4;
  ena[526] = HAVE_fmav8hf4;
  ena[527] = HAVE_fmav4sf4;
  ena[528] = HAVE_rintsf2;
  ena[529] = HAVE_rintdf2;
  ena[530] = HAVE_roundsf2;
  ena[531] = HAVE_rounddf2;
  ena[532] = HAVE_floorsf2;
  ena[533] = HAVE_floordf2;
  ena[534] = HAVE_ceilsf2;
  ena[535] = HAVE_ceildf2;
  ena[536] = HAVE_btruncsf2;
  ena[537] = HAVE_btruncdf2;
  ena[538] = HAVE_nearbyintsf2;
  ena[539] = HAVE_nearbyintdf2;
  ena[540] = HAVE_copysignsf3;
  ena[541] = HAVE_copysigndf3;
  ena[542] = HAVE_fmaxsf3;
  ena[543] = HAVE_fmaxdf3;
  ena[544] = HAVE_fmaxv2sf3;
  ena[545] = HAVE_fmaxv4sf3;
  ena[546] = HAVE_fminsf3;
  ena[547] = HAVE_fmindf3;
  ena[548] = HAVE_fminv2sf3;
  ena[549] = HAVE_fminv4sf3;
  ena[550] = HAVE_reduc_smax_scal_v8qi;
  ena[551] = HAVE_reduc_smax_scal_v4hi;
  ena[552] = HAVE_reduc_smax_scal_v2si;
  ena[553] = HAVE_reduc_smax_scal_v16qi;
  ena[554] = HAVE_reduc_smax_scal_v8hi;
  ena[555] = HAVE_reduc_smax_scal_v4si;
  ena[556] = HAVE_reduc_smax_scal_v2sf;
  ena[557] = HAVE_reduc_smax_scal_v4sf;
  ena[558] = HAVE_reduc_smin_scal_v8qi;
  ena[559] = HAVE_reduc_smin_scal_v4hi;
  ena[560] = HAVE_reduc_smin_scal_v2si;
  ena[561] = HAVE_reduc_smin_scal_v16qi;
  ena[562] = HAVE_reduc_smin_scal_v8hi;
  ena[563] = HAVE_reduc_smin_scal_v4si;
  ena[564] = HAVE_reduc_smin_scal_v2sf;
  ena[565] = HAVE_reduc_smin_scal_v4sf;
  ena[566] = HAVE_reduc_plus_scal_v8qi;
  ena[567] = HAVE_reduc_plus_scal_v4hi;
  ena[568] = HAVE_reduc_plus_scal_v2si;
  ena[569] = HAVE_reduc_plus_scal_v16qi;
  ena[570] = HAVE_reduc_plus_scal_v8hi;
  ena[571] = HAVE_reduc_plus_scal_v4si;
  ena[572] = HAVE_reduc_plus_scal_v2di;
  ena[573] = HAVE_reduc_plus_scal_v2sf;
  ena[574] = HAVE_reduc_plus_scal_v4sf;
  ena[575] = HAVE_reduc_umax_scal_v8qi;
  ena[576] = HAVE_reduc_umax_scal_v4hi;
  ena[577] = HAVE_reduc_umax_scal_v2si;
  ena[578] = HAVE_reduc_umax_scal_v16qi;
  ena[579] = HAVE_reduc_umax_scal_v8hi;
  ena[580] = HAVE_reduc_umax_scal_v4si;
  ena[581] = HAVE_reduc_umin_scal_v8qi;
  ena[582] = HAVE_reduc_umin_scal_v4hi;
  ena[583] = HAVE_reduc_umin_scal_v2si;
  ena[584] = HAVE_reduc_umin_scal_v16qi;
  ena[585] = HAVE_reduc_umin_scal_v8hi;
  ena[586] = HAVE_reduc_umin_scal_v4si;
  ena[587] = HAVE_sdot_prodv8qi;
  ena[588] = HAVE_sdot_prodv16qi;
  ena[589] = HAVE_widen_ssumv8qi3;
  ena[590] = HAVE_widen_ssumv4hi3;
  ena[591] = HAVE_widen_ssumv2si3;
  ena[592] = HAVE_widen_ssumv16qi3;
  ena[593] = HAVE_widen_ssumv8hi3;
  ena[594] = HAVE_widen_ssumv4si3;
  ena[595] = HAVE_udot_prodv8qi;
  ena[596] = HAVE_udot_prodv16qi;
  ena[597] = HAVE_widen_usumv8qi3;
  ena[598] = HAVE_widen_usumv4hi3;
  ena[599] = HAVE_widen_usumv2si3;
  ena[600] = HAVE_widen_usumv16qi3;
  ena[601] = HAVE_widen_usumv8hi3;
  ena[602] = HAVE_widen_usumv4si3;
  ena[603] = HAVE_vec_pack_trunc_di;
  ena[604] = HAVE_vec_pack_trunc_v4hi;
  ena[605] = HAVE_vec_pack_trunc_v2si;
  ena[606] = HAVE_vec_pack_trunc_v8hi;
  ena[607] = HAVE_vec_pack_trunc_v4si;
  ena[608] = HAVE_vec_pack_trunc_v2di;
  ena[609] = HAVE_vec_permv8qi;
  ena[610] = HAVE_vec_permv16qi;
  ena[611] = HAVE_vec_setv8qi;
  ena[612] = HAVE_vec_setv4hi;
  ena[613] = HAVE_vec_setv2si;
  ena[614] = HAVE_vec_setv16qi;
  ena[615] = HAVE_vec_setv8hi;
  ena[616] = HAVE_vec_setv4si;
  ena[617] = HAVE_vec_setv2di;
  ena[618] = HAVE_vec_setv4hf;
  ena[619] = HAVE_vec_setv2sf;
  ena[620] = HAVE_vec_setv8hf;
  ena[621] = HAVE_vec_setv4sf;
  ena[622] = HAVE_vec_unpacks_hi_v8qi;
  ena[623] = HAVE_vec_unpacks_hi_v4hi;
  ena[624] = HAVE_vec_unpacks_hi_v2si;
  ena[625] = HAVE_vec_unpacks_hi_v16qi;
  ena[626] = HAVE_vec_unpacks_hi_v8hi;
  ena[627] = HAVE_vec_unpacks_hi_v4si;
  ena[628] = HAVE_vec_unpacks_lo_v8qi;
  ena[629] = HAVE_vec_unpacks_lo_v4hi;
  ena[630] = HAVE_vec_unpacks_lo_v2si;
  ena[631] = HAVE_vec_unpacks_lo_v16qi;
  ena[632] = HAVE_vec_unpacks_lo_v8hi;
  ena[633] = HAVE_vec_unpacks_lo_v4si;
  ena[634] = HAVE_vec_unpacku_hi_v8qi;
  ena[635] = HAVE_vec_unpacku_hi_v4hi;
  ena[636] = HAVE_vec_unpacku_hi_v2si;
  ena[637] = HAVE_vec_unpacku_hi_v16qi;
  ena[638] = HAVE_vec_unpacku_hi_v8hi;
  ena[639] = HAVE_vec_unpacku_hi_v4si;
  ena[640] = HAVE_vec_unpacku_lo_v8qi;
  ena[641] = HAVE_vec_unpacku_lo_v4hi;
  ena[642] = HAVE_vec_unpacku_lo_v2si;
  ena[643] = HAVE_vec_unpacku_lo_v16qi;
  ena[644] = HAVE_vec_unpacku_lo_v8hi;
  ena[645] = HAVE_vec_unpacku_lo_v4si;
  ena[646] = HAVE_vec_widen_smult_hi_v8qi;
  ena[647] = HAVE_vec_widen_smult_hi_v4hi;
  ena[648] = HAVE_vec_widen_smult_hi_v2si;
  ena[649] = HAVE_vec_widen_smult_hi_v16qi;
  ena[650] = HAVE_vec_widen_smult_hi_v8hi;
  ena[651] = HAVE_vec_widen_smult_hi_v4si;
  ena[652] = HAVE_vec_widen_smult_lo_v8qi;
  ena[653] = HAVE_vec_widen_smult_lo_v4hi;
  ena[654] = HAVE_vec_widen_smult_lo_v2si;
  ena[655] = HAVE_vec_widen_smult_lo_v16qi;
  ena[656] = HAVE_vec_widen_smult_lo_v8hi;
  ena[657] = HAVE_vec_widen_smult_lo_v4si;
  ena[658] = HAVE_vec_widen_sshiftl_hi_v8qi;
  ena[659] = HAVE_vec_widen_sshiftl_hi_v4hi;
  ena[660] = HAVE_vec_widen_sshiftl_hi_v2si;
  ena[661] = HAVE_vec_widen_sshiftl_hi_v16qi;
  ena[662] = HAVE_vec_widen_sshiftl_hi_v8hi;
  ena[663] = HAVE_vec_widen_sshiftl_hi_v4si;
  ena[664] = HAVE_vec_widen_sshiftl_lo_v8qi;
  ena[665] = HAVE_vec_widen_sshiftl_lo_v4hi;
  ena[666] = HAVE_vec_widen_sshiftl_lo_v2si;
  ena[667] = HAVE_vec_widen_sshiftl_lo_v16qi;
  ena[668] = HAVE_vec_widen_sshiftl_lo_v8hi;
  ena[669] = HAVE_vec_widen_sshiftl_lo_v4si;
  ena[670] = HAVE_vec_widen_umult_hi_v8qi;
  ena[671] = HAVE_vec_widen_umult_hi_v4hi;
  ena[672] = HAVE_vec_widen_umult_hi_v2si;
  ena[673] = HAVE_vec_widen_umult_hi_v16qi;
  ena[674] = HAVE_vec_widen_umult_hi_v8hi;
  ena[675] = HAVE_vec_widen_umult_hi_v4si;
  ena[676] = HAVE_vec_widen_umult_lo_v8qi;
  ena[677] = HAVE_vec_widen_umult_lo_v4hi;
  ena[678] = HAVE_vec_widen_umult_lo_v2si;
  ena[679] = HAVE_vec_widen_umult_lo_v16qi;
  ena[680] = HAVE_vec_widen_umult_lo_v8hi;
  ena[681] = HAVE_vec_widen_umult_lo_v4si;
  ena[682] = HAVE_vec_widen_ushiftl_hi_v8qi;
  ena[683] = HAVE_vec_widen_ushiftl_hi_v4hi;
  ena[684] = HAVE_vec_widen_ushiftl_hi_v2si;
  ena[685] = HAVE_vec_widen_ushiftl_hi_v16qi;
  ena[686] = HAVE_vec_widen_ushiftl_hi_v8hi;
  ena[687] = HAVE_vec_widen_ushiftl_hi_v4si;
  ena[688] = HAVE_vec_widen_ushiftl_lo_v8qi;
  ena[689] = HAVE_vec_widen_ushiftl_lo_v4hi;
  ena[690] = HAVE_vec_widen_ushiftl_lo_v2si;
  ena[691] = HAVE_vec_widen_ushiftl_lo_v16qi;
  ena[692] = HAVE_vec_widen_ushiftl_lo_v8hi;
  ena[693] = HAVE_vec_widen_ushiftl_lo_v4si;
  ena[694] = HAVE_atomic_add_fetchqi;
  ena[695] = HAVE_atomic_add_fetchhi;
  ena[696] = HAVE_atomic_add_fetchsi;
  ena[697] = HAVE_atomic_add_fetchdi;
  ena[698] = HAVE_atomic_addqi;
  ena[699] = HAVE_atomic_addhi;
  ena[700] = HAVE_atomic_addsi;
  ena[701] = HAVE_atomic_adddi;
  ena[702] = HAVE_atomic_and_fetchqi;
  ena[703] = HAVE_atomic_and_fetchhi;
  ena[704] = HAVE_atomic_and_fetchsi;
  ena[705] = HAVE_atomic_and_fetchdi;
  ena[706] = HAVE_atomic_andqi;
  ena[707] = HAVE_atomic_andhi;
  ena[708] = HAVE_atomic_andsi;
  ena[709] = HAVE_atomic_anddi;
  ena[710] = HAVE_atomic_compare_and_swapqi;
  ena[711] = HAVE_atomic_compare_and_swaphi;
  ena[712] = HAVE_atomic_compare_and_swapsi;
  ena[713] = HAVE_atomic_compare_and_swapdi;
  ena[714] = HAVE_atomic_exchangeqi;
  ena[715] = HAVE_atomic_exchangehi;
  ena[716] = HAVE_atomic_exchangesi;
  ena[717] = HAVE_atomic_exchangedi;
  ena[718] = HAVE_atomic_fetch_addqi;
  ena[719] = HAVE_atomic_fetch_addhi;
  ena[720] = HAVE_atomic_fetch_addsi;
  ena[721] = HAVE_atomic_fetch_adddi;
  ena[722] = HAVE_atomic_fetch_andqi;
  ena[723] = HAVE_atomic_fetch_andhi;
  ena[724] = HAVE_atomic_fetch_andsi;
  ena[725] = HAVE_atomic_fetch_anddi;
  ena[726] = HAVE_atomic_fetch_nandqi;
  ena[727] = HAVE_atomic_fetch_nandhi;
  ena[728] = HAVE_atomic_fetch_nandsi;
  ena[729] = HAVE_atomic_fetch_nanddi;
  ena[730] = HAVE_atomic_fetch_orqi;
  ena[731] = HAVE_atomic_fetch_orhi;
  ena[732] = HAVE_atomic_fetch_orsi;
  ena[733] = HAVE_atomic_fetch_ordi;
  ena[734] = HAVE_atomic_fetch_subqi;
  ena[735] = HAVE_atomic_fetch_subhi;
  ena[736] = HAVE_atomic_fetch_subsi;
  ena[737] = HAVE_atomic_fetch_subdi;
  ena[738] = HAVE_atomic_fetch_xorqi;
  ena[739] = HAVE_atomic_fetch_xorhi;
  ena[740] = HAVE_atomic_fetch_xorsi;
  ena[741] = HAVE_atomic_fetch_xordi;
  ena[742] = HAVE_atomic_loadqi;
  ena[743] = HAVE_atomic_loadhi;
  ena[744] = HAVE_atomic_loadsi;
  ena[745] = HAVE_atomic_loaddi;
  ena[746] = HAVE_atomic_nand_fetchqi;
  ena[747] = HAVE_atomic_nand_fetchhi;
  ena[748] = HAVE_atomic_nand_fetchsi;
  ena[749] = HAVE_atomic_nand_fetchdi;
  ena[750] = HAVE_atomic_nandqi;
  ena[751] = HAVE_atomic_nandhi;
  ena[752] = HAVE_atomic_nandsi;
  ena[753] = HAVE_atomic_nanddi;
  ena[754] = HAVE_atomic_or_fetchqi;
  ena[755] = HAVE_atomic_or_fetchhi;
  ena[756] = HAVE_atomic_or_fetchsi;
  ena[757] = HAVE_atomic_or_fetchdi;
  ena[758] = HAVE_atomic_orqi;
  ena[759] = HAVE_atomic_orhi;
  ena[760] = HAVE_atomic_orsi;
  ena[761] = HAVE_atomic_ordi;
  ena[762] = HAVE_atomic_storeqi;
  ena[763] = HAVE_atomic_storehi;
  ena[764] = HAVE_atomic_storesi;
  ena[765] = HAVE_atomic_sub_fetchqi;
  ena[766] = HAVE_atomic_sub_fetchhi;
  ena[767] = HAVE_atomic_sub_fetchsi;
  ena[768] = HAVE_atomic_sub_fetchdi;
  ena[769] = HAVE_atomic_subqi;
  ena[770] = HAVE_atomic_subhi;
  ena[771] = HAVE_atomic_subsi;
  ena[772] = HAVE_atomic_subdi;
  ena[773] = HAVE_atomic_xor_fetchqi;
  ena[774] = HAVE_atomic_xor_fetchhi;
  ena[775] = HAVE_atomic_xor_fetchsi;
  ena[776] = HAVE_atomic_xor_fetchdi;
  ena[777] = HAVE_atomic_xorqi;
  ena[778] = HAVE_atomic_xorhi;
  ena[779] = HAVE_atomic_xorsi;
  ena[780] = HAVE_atomic_xordi;
  ena[781] = HAVE_get_thread_pointersi;
}

static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  VEC_DUPLICATE,
  VEC_SERIES,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  vec_duplicate_optab,
  vec_series_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};


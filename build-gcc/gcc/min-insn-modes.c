/* Generated automatically from machmode.def and config/arm/arm-modes.def
   by genmodes.  */

#include "bconfig.h"
#include "system.h"
#include "coretypes.h"

const char *const mode_name[NUM_MACHINE_MODES] =
{
  "VOID",
  "BLK",
  "CC",
  "CC_NOOV",
  "CC_Z",
  "CC_CZ",
  "CC_NCV",
  "CC_SWP",
  "CCFP",
  "CCFPE",
  "CC_DNE",
  "CC_DEQ",
  "CC_DLE",
  "CC_DLT",
  "CC_DGE",
  "CC_DGT",
  "CC_DLEU",
  "CC_DLTU",
  "CC_DGEU",
  "CC_DGTU",
  "CC_C",
  "CC_N",
  "CC_V",
  "BI",
  "QI",
  "HI",
  "SI",
  "DI",
  "TI",
  "EI",
  "OI",
  "CI",
  "XI",
  "QQ",
  "HQ",
  "SQ",
  "DQ",
  "TQ",
  "UQQ",
  "UHQ",
  "USQ",
  "UDQ",
  "UTQ",
  "HA",
  "SA",
  "DA",
  "TA",
  "UHA",
  "USA",
  "UDA",
  "UTA",
  "HF",
  "SF",
  "DF",
  "SD",
  "DD",
  "TD",
  "CQI",
  "CHI",
  "CSI",
  "CDI",
  "CTI",
  "CEI",
  "COI",
  "CCI",
  "CXI",
  "HC",
  "SC",
  "DC",
  "V4QI",
  "V2HI",
  "V8QI",
  "V4HI",
  "V2SI",
  "V16QI",
  "V8HI",
  "V4SI",
  "V2DI",
  "V4QQ",
  "V2HQ",
  "V4UQQ",
  "V2UHQ",
  "V2HA",
  "V2UHA",
  "V2HF",
  "V4HF",
  "V2SF",
  "V8HF",
  "V4SF",
  "V2DF",
};

const unsigned char mode_class[NUM_MACHINE_MODES] =
{
  MODE_RANDOM,             /* VOID */
  MODE_RANDOM,             /* BLK */
  MODE_CC,                 /* CC */
  MODE_CC,                 /* CC_NOOV */
  MODE_CC,                 /* CC_Z */
  MODE_CC,                 /* CC_CZ */
  MODE_CC,                 /* CC_NCV */
  MODE_CC,                 /* CC_SWP */
  MODE_CC,                 /* CCFP */
  MODE_CC,                 /* CCFPE */
  MODE_CC,                 /* CC_DNE */
  MODE_CC,                 /* CC_DEQ */
  MODE_CC,                 /* CC_DLE */
  MODE_CC,                 /* CC_DLT */
  MODE_CC,                 /* CC_DGE */
  MODE_CC,                 /* CC_DGT */
  MODE_CC,                 /* CC_DLEU */
  MODE_CC,                 /* CC_DLTU */
  MODE_CC,                 /* CC_DGEU */
  MODE_CC,                 /* CC_DGTU */
  MODE_CC,                 /* CC_C */
  MODE_CC,                 /* CC_N */
  MODE_CC,                 /* CC_V */
  MODE_INT,                /* BI */
  MODE_INT,                /* QI */
  MODE_INT,                /* HI */
  MODE_INT,                /* SI */
  MODE_INT,                /* DI */
  MODE_INT,                /* TI */
  MODE_INT,                /* EI */
  MODE_INT,                /* OI */
  MODE_INT,                /* CI */
  MODE_INT,                /* XI */
  MODE_FRACT,              /* QQ */
  MODE_FRACT,              /* HQ */
  MODE_FRACT,              /* SQ */
  MODE_FRACT,              /* DQ */
  MODE_FRACT,              /* TQ */
  MODE_UFRACT,             /* UQQ */
  MODE_UFRACT,             /* UHQ */
  MODE_UFRACT,             /* USQ */
  MODE_UFRACT,             /* UDQ */
  MODE_UFRACT,             /* UTQ */
  MODE_ACCUM,              /* HA */
  MODE_ACCUM,              /* SA */
  MODE_ACCUM,              /* DA */
  MODE_ACCUM,              /* TA */
  MODE_UACCUM,             /* UHA */
  MODE_UACCUM,             /* USA */
  MODE_UACCUM,             /* UDA */
  MODE_UACCUM,             /* UTA */
  MODE_FLOAT,              /* HF */
  MODE_FLOAT,              /* SF */
  MODE_FLOAT,              /* DF */
  MODE_DECIMAL_FLOAT,      /* SD */
  MODE_DECIMAL_FLOAT,      /* DD */
  MODE_DECIMAL_FLOAT,      /* TD */
  MODE_COMPLEX_INT,        /* CQI */
  MODE_COMPLEX_INT,        /* CHI */
  MODE_COMPLEX_INT,        /* CSI */
  MODE_COMPLEX_INT,        /* CDI */
  MODE_COMPLEX_INT,        /* CTI */
  MODE_COMPLEX_INT,        /* CEI */
  MODE_COMPLEX_INT,        /* COI */
  MODE_COMPLEX_INT,        /* CCI */
  MODE_COMPLEX_INT,        /* CXI */
  MODE_COMPLEX_FLOAT,      /* HC */
  MODE_COMPLEX_FLOAT,      /* SC */
  MODE_COMPLEX_FLOAT,      /* DC */
  MODE_VECTOR_INT,         /* V4QI */
  MODE_VECTOR_INT,         /* V2HI */
  MODE_VECTOR_INT,         /* V8QI */
  MODE_VECTOR_INT,         /* V4HI */
  MODE_VECTOR_INT,         /* V2SI */
  MODE_VECTOR_INT,         /* V16QI */
  MODE_VECTOR_INT,         /* V8HI */
  MODE_VECTOR_INT,         /* V4SI */
  MODE_VECTOR_INT,         /* V2DI */
  MODE_VECTOR_FRACT,       /* V4QQ */
  MODE_VECTOR_FRACT,       /* V2HQ */
  MODE_VECTOR_UFRACT,      /* V4UQQ */
  MODE_VECTOR_UFRACT,      /* V2UHQ */
  MODE_VECTOR_ACCUM,       /* V2HA */
  MODE_VECTOR_UACCUM,      /* V2UHA */
  MODE_VECTOR_FLOAT,       /* V2HF */
  MODE_VECTOR_FLOAT,       /* V4HF */
  MODE_VECTOR_FLOAT,       /* V2SF */
  MODE_VECTOR_FLOAT,       /* V8HF */
  MODE_VECTOR_FLOAT,       /* V4SF */
  MODE_VECTOR_FLOAT,       /* V2DF */
};

const poly_uint16_pod mode_nunits[NUM_MACHINE_MODES] = 
{
  { 0 },                   /* VOID */
  { 0 },                   /* BLK */
  { 1 },                   /* CC */
  { 1 },                   /* CC_NOOV */
  { 1 },                   /* CC_Z */
  { 1 },                   /* CC_CZ */
  { 1 },                   /* CC_NCV */
  { 1 },                   /* CC_SWP */
  { 1 },                   /* CCFP */
  { 1 },                   /* CCFPE */
  { 1 },                   /* CC_DNE */
  { 1 },                   /* CC_DEQ */
  { 1 },                   /* CC_DLE */
  { 1 },                   /* CC_DLT */
  { 1 },                   /* CC_DGE */
  { 1 },                   /* CC_DGT */
  { 1 },                   /* CC_DLEU */
  { 1 },                   /* CC_DLTU */
  { 1 },                   /* CC_DGEU */
  { 1 },                   /* CC_DGTU */
  { 1 },                   /* CC_C */
  { 1 },                   /* CC_N */
  { 1 },                   /* CC_V */
  { 1 },                   /* BI */
  { 1 },                   /* QI */
  { 1 },                   /* HI */
  { 1 },                   /* SI */
  { 1 },                   /* DI */
  { 1 },                   /* TI */
  { 1 },                   /* EI */
  { 1 },                   /* OI */
  { 1 },                   /* CI */
  { 1 },                   /* XI */
  { 1 },                   /* QQ */
  { 1 },                   /* HQ */
  { 1 },                   /* SQ */
  { 1 },                   /* DQ */
  { 1 },                   /* TQ */
  { 1 },                   /* UQQ */
  { 1 },                   /* UHQ */
  { 1 },                   /* USQ */
  { 1 },                   /* UDQ */
  { 1 },                   /* UTQ */
  { 1 },                   /* HA */
  { 1 },                   /* SA */
  { 1 },                   /* DA */
  { 1 },                   /* TA */
  { 1 },                   /* UHA */
  { 1 },                   /* USA */
  { 1 },                   /* UDA */
  { 1 },                   /* UTA */
  { 1 },                   /* HF */
  { 1 },                   /* SF */
  { 1 },                   /* DF */
  { 1 },                   /* SD */
  { 1 },                   /* DD */
  { 1 },                   /* TD */
  { 2 },                   /* CQI */
  { 2 },                   /* CHI */
  { 2 },                   /* CSI */
  { 2 },                   /* CDI */
  { 2 },                   /* CTI */
  { 2 },                   /* CEI */
  { 2 },                   /* COI */
  { 2 },                   /* CCI */
  { 2 },                   /* CXI */
  { 2 },                   /* HC */
  { 2 },                   /* SC */
  { 2 },                   /* DC */
  { 4 },                   /* V4QI */
  { 2 },                   /* V2HI */
  { 8 },                   /* V8QI */
  { 4 },                   /* V4HI */
  { 2 },                   /* V2SI */
  { 16 },                  /* V16QI */
  { 8 },                   /* V8HI */
  { 4 },                   /* V4SI */
  { 2 },                   /* V2DI */
  { 4 },                   /* V4QQ */
  { 2 },                   /* V2HQ */
  { 4 },                   /* V4UQQ */
  { 2 },                   /* V2UHQ */
  { 2 },                   /* V2HA */
  { 2 },                   /* V2UHA */
  { 2 },                   /* V2HF */
  { 4 },                   /* V4HF */
  { 2 },                   /* V2SF */
  { 8 },                   /* V8HF */
  { 4 },                   /* V4SF */
  { 2 },                   /* V2DF */
};

const unsigned char mode_wider[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_VOIDmode,              /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* CC_NOOV */
  E_VOIDmode,              /* CC_Z */
  E_VOIDmode,              /* CC_CZ */
  E_VOIDmode,              /* CC_NCV */
  E_VOIDmode,              /* CC_SWP */
  E_VOIDmode,              /* CCFP */
  E_VOIDmode,              /* CCFPE */
  E_VOIDmode,              /* CC_DNE */
  E_VOIDmode,              /* CC_DEQ */
  E_VOIDmode,              /* CC_DLE */
  E_VOIDmode,              /* CC_DLT */
  E_VOIDmode,              /* CC_DGE */
  E_VOIDmode,              /* CC_DGT */
  E_VOIDmode,              /* CC_DLEU */
  E_VOIDmode,              /* CC_DLTU */
  E_VOIDmode,              /* CC_DGEU */
  E_VOIDmode,              /* CC_DGTU */
  E_VOIDmode,              /* CC_C */
  E_VOIDmode,              /* CC_N */
  E_VOIDmode,              /* CC_V */
  E_QImode,                /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_EImode,                /* TI */
  E_OImode,                /* EI */
  E_CImode,                /* OI */
  E_XImode,                /* CI */
  E_VOIDmode,              /* XI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_SFmode,                /* HF */
  E_DFmode,                /* SF */
  E_VOIDmode,              /* DF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_CHImode,               /* CQI */
  E_CSImode,               /* CHI */
  E_CDImode,               /* CSI */
  E_CTImode,               /* CDI */
  E_CEImode,               /* CTI */
  E_COImode,               /* CEI */
  E_CCImode,               /* COI */
  E_CXImode,               /* CCI */
  E_VOIDmode,              /* CXI */
  E_SCmode,                /* HC */
  E_DCmode,                /* SC */
  E_VOIDmode,              /* DC */
  E_V2HImode,              /* V4QI */
  E_V8QImode,              /* V2HI */
  E_V4HImode,              /* V8QI */
  E_V2SImode,              /* V4HI */
  E_V16QImode,             /* V2SI */
  E_V8HImode,              /* V16QI */
  E_V4SImode,              /* V8HI */
  E_V2DImode,              /* V4SI */
  E_VOIDmode,              /* V2DI */
  E_V2HQmode,              /* V4QQ */
  E_VOIDmode,              /* V2HQ */
  E_V2UHQmode,             /* V4UQQ */
  E_VOIDmode,              /* V2UHQ */
  E_VOIDmode,              /* V2HA */
  E_VOIDmode,              /* V2UHA */
  E_V4HFmode,              /* V2HF */
  E_V2SFmode,              /* V4HF */
  E_V8HFmode,              /* V2SF */
  E_V4SFmode,              /* V8HF */
  E_V2DFmode,              /* V4SF */
  E_VOIDmode,              /* V2DF */
};

const unsigned char mode_2xwider[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_BLKmode,               /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* CC_NOOV */
  E_VOIDmode,              /* CC_Z */
  E_VOIDmode,              /* CC_CZ */
  E_VOIDmode,              /* CC_NCV */
  E_VOIDmode,              /* CC_SWP */
  E_VOIDmode,              /* CCFP */
  E_VOIDmode,              /* CCFPE */
  E_VOIDmode,              /* CC_DNE */
  E_VOIDmode,              /* CC_DEQ */
  E_VOIDmode,              /* CC_DLE */
  E_VOIDmode,              /* CC_DLT */
  E_VOIDmode,              /* CC_DGE */
  E_VOIDmode,              /* CC_DGT */
  E_VOIDmode,              /* CC_DLEU */
  E_VOIDmode,              /* CC_DLTU */
  E_VOIDmode,              /* CC_DGEU */
  E_VOIDmode,              /* CC_DGTU */
  E_VOIDmode,              /* CC_C */
  E_VOIDmode,              /* CC_N */
  E_VOIDmode,              /* CC_V */
  E_VOIDmode,              /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_OImode,                /* TI */
  E_CImode,                /* EI */
  E_XImode,                /* OI */
  E_VOIDmode,              /* CI */
  E_VOIDmode,              /* XI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_SFmode,                /* HF */
  E_DFmode,                /* SF */
  E_VOIDmode,              /* DF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_CHImode,               /* CQI */
  E_CSImode,               /* CHI */
  E_CDImode,               /* CSI */
  E_CTImode,               /* CDI */
  E_COImode,               /* CTI */
  E_CCImode,               /* CEI */
  E_CXImode,               /* COI */
  E_VOIDmode,              /* CCI */
  E_VOIDmode,              /* CXI */
  E_SCmode,                /* HC */
  E_DCmode,                /* SC */
  E_VOIDmode,              /* DC */
  E_V8QImode,              /* V4QI */
  E_V4HImode,              /* V2HI */
  E_V16QImode,             /* V8QI */
  E_V8HImode,              /* V4HI */
  E_V4SImode,              /* V2SI */
  E_VOIDmode,              /* V16QI */
  E_VOIDmode,              /* V8HI */
  E_VOIDmode,              /* V4SI */
  E_VOIDmode,              /* V2DI */
  E_VOIDmode,              /* V4QQ */
  E_VOIDmode,              /* V2HQ */
  E_VOIDmode,              /* V4UQQ */
  E_VOIDmode,              /* V2UHQ */
  E_VOIDmode,              /* V2HA */
  E_VOIDmode,              /* V2UHA */
  E_V4HFmode,              /* V2HF */
  E_V8HFmode,              /* V4HF */
  E_V4SFmode,              /* V2SF */
  E_VOIDmode,              /* V8HF */
  E_VOIDmode,              /* V4SF */
  E_VOIDmode,              /* V2DF */
};

const unsigned char mode_inner[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_BLKmode,               /* BLK */
  E_CCmode,                /* CC */
  E_CC_NOOVmode,           /* CC_NOOV */
  E_CC_Zmode,              /* CC_Z */
  E_CC_CZmode,             /* CC_CZ */
  E_CC_NCVmode,            /* CC_NCV */
  E_CC_SWPmode,            /* CC_SWP */
  E_CCFPmode,              /* CCFP */
  E_CCFPEmode,             /* CCFPE */
  E_CC_DNEmode,            /* CC_DNE */
  E_CC_DEQmode,            /* CC_DEQ */
  E_CC_DLEmode,            /* CC_DLE */
  E_CC_DLTmode,            /* CC_DLT */
  E_CC_DGEmode,            /* CC_DGE */
  E_CC_DGTmode,            /* CC_DGT */
  E_CC_DLEUmode,           /* CC_DLEU */
  E_CC_DLTUmode,           /* CC_DLTU */
  E_CC_DGEUmode,           /* CC_DGEU */
  E_CC_DGTUmode,           /* CC_DGTU */
  E_CC_Cmode,              /* CC_C */
  E_CC_Nmode,              /* CC_N */
  E_CC_Vmode,              /* CC_V */
  E_BImode,                /* BI */
  E_QImode,                /* QI */
  E_HImode,                /* HI */
  E_SImode,                /* SI */
  E_DImode,                /* DI */
  E_TImode,                /* TI */
  E_EImode,                /* EI */
  E_OImode,                /* OI */
  E_CImode,                /* CI */
  E_XImode,                /* XI */
  E_QQmode,                /* QQ */
  E_HQmode,                /* HQ */
  E_SQmode,                /* SQ */
  E_DQmode,                /* DQ */
  E_TQmode,                /* TQ */
  E_UQQmode,               /* UQQ */
  E_UHQmode,               /* UHQ */
  E_USQmode,               /* USQ */
  E_UDQmode,               /* UDQ */
  E_UTQmode,               /* UTQ */
  E_HAmode,                /* HA */
  E_SAmode,                /* SA */
  E_DAmode,                /* DA */
  E_TAmode,                /* TA */
  E_UHAmode,               /* UHA */
  E_USAmode,               /* USA */
  E_UDAmode,               /* UDA */
  E_UTAmode,               /* UTA */
  E_HFmode,                /* HF */
  E_SFmode,                /* SF */
  E_DFmode,                /* DF */
  E_SDmode,                /* SD */
  E_DDmode,                /* DD */
  E_TDmode,                /* TD */
  E_QImode,                /* CQI */
  E_HImode,                /* CHI */
  E_SImode,                /* CSI */
  E_DImode,                /* CDI */
  E_TImode,                /* CTI */
  E_EImode,                /* CEI */
  E_OImode,                /* COI */
  E_CImode,                /* CCI */
  E_XImode,                /* CXI */
  E_HFmode,                /* HC */
  E_SFmode,                /* SC */
  E_DFmode,                /* DC */
  E_QImode,                /* V4QI */
  E_HImode,                /* V2HI */
  E_QImode,                /* V8QI */
  E_HImode,                /* V4HI */
  E_SImode,                /* V2SI */
  E_QImode,                /* V16QI */
  E_HImode,                /* V8HI */
  E_SImode,                /* V4SI */
  E_DImode,                /* V2DI */
  E_QQmode,                /* V4QQ */
  E_HQmode,                /* V2HQ */
  E_UQQmode,               /* V4UQQ */
  E_UHQmode,               /* V2UHQ */
  E_HAmode,                /* V2HA */
  E_UHAmode,               /* V2UHA */
  E_HFmode,                /* V2HF */
  E_HFmode,                /* V4HF */
  E_SFmode,                /* V2SF */
  E_HFmode,                /* V8HF */
  E_SFmode,                /* V4SF */
  E_DFmode,                /* V2DF */
};

const unsigned char class_narrowest_mode[MAX_MODE_CLASS] =
{
  MIN_MODE_RANDOM,         /* VOID */
  MIN_MODE_CC,             /* CC */
  MIN_MODE_INT,            /* QI */
  MIN_MODE_PARTIAL_INT,    /* VOID */
  MIN_MODE_POINTER_BOUNDS, /* VOID */
  MIN_MODE_FRACT,          /* QQ */
  MIN_MODE_UFRACT,         /* UQQ */
  MIN_MODE_ACCUM,          /* HA */
  MIN_MODE_UACCUM,         /* UHA */
  MIN_MODE_FLOAT,          /* HF */
  MIN_MODE_DECIMAL_FLOAT,  /* SD */
  MIN_MODE_COMPLEX_INT,    /* CQI */
  MIN_MODE_COMPLEX_FLOAT,  /* HC */
  MIN_MODE_VECTOR_BOOL,    /* VOID */
  MIN_MODE_VECTOR_INT,     /* V4QI */
  MIN_MODE_VECTOR_FRACT,   /* V4QQ */
  MIN_MODE_VECTOR_UFRACT,  /* V4UQQ */
  MIN_MODE_VECTOR_ACCUM,   /* V2HA */
  MIN_MODE_VECTOR_UACCUM,  /* V2UHA */
  MIN_MODE_VECTOR_FLOAT,   /* V2HF */
};

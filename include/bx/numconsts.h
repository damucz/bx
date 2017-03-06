#ifndef BX_H_NUM_CONSTS
#define BX_H_NUM_CONSTS

#include "macros.h"

#ifdef BX_COMPILER_S3E

#   ifdef _MSC_VER
// 7.18.4.1 Macros for minimum-width integer constants

#       define INT8_C(val)  val##i8
#       define INT16_C(val) val##i16
#       define INT32_C(val) val##i32
#       define INT64_C(val) val##i64

#       define UINT8_C(val)  val##ui8
#       define UINT16_C(val) val##ui16
#       define UINT32_C(val) val##ui32
//#       define UINT64_C(val) val##ui64
#       define UINT64_C(val) val##ULL

#   else

#       define INT8_C(val)  val
#       define INT16_C(val) val
#       define INT32_C(val) val
#       define INT64_C(val) val##LL

#       define UINT8_C(val)  val
#       define UINT16_C(val) val
#       define UINT32_C(val) val
#       define UINT64_C(val) val##ULL

#   endif

#endif

#endif

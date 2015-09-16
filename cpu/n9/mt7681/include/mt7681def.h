#ifndef __MT7681DEF_H__
#define __MT7681DEF_H__
#include "types.h"

#define CCIF
#define CLIF

typedef int8     int8_t;
typedef int16    int16_t;
typedef int32    int32_t;
typedef int64    int64_t;
typedef uint8    uint8_t;
typedef uint16   uint16_t;
typedef uint32   uint32_t;
typedef uint64   uint64_t;

#define offsetof(TYPE, MEMBER) __builtin_offsetof (TYPE, MEMBER)

#endif /* __MT7681DEF_H__ */

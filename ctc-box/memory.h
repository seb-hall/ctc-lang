#include <stdint.h>
#include <unordered_map>
#include <unordered_set>

typedef void*               id;

typedef char                u8;

typedef short int           i16;
typedef short unsigned int  u16;
typedef int                 i32;
typedef long int            i64;
typedef unsigned int        u32;
typedef unsigned long int   u64;

typedef float               f32;
typedef double              f64;

enum floatType {
    FLOAT32,
    FLOAT64
};

enum integerType {
    INT8,
    UINT8,
    INT16,
    UINT16,
    INT32,
    UINT32,
    INT64,
    UINT64
};


std::unordered_map<id, integerType> integerValues;
std::unordered_map<id, floatType> floatValues;
std::unordered_set<id> boolValues;
std::unordered_set<id> stringValues;

id storeI32(i32 variable);  //  stores new i32 and returns address

i32 fetchI32(id address);   //  gets i32 from address - is this necessary

void freeInt(id address);   //  frees memory at given location, removing from maps and sets



i16 fetchI16(id address);
u16 fetchU16(id address);


u32 fetchU32(id address);

i64 fetchI64(id address);
u64 fetchU64(id address);






#include <stdint.h>

#include <string>
#include <vector>
#include <map>

typedef short int           id;

typedef int                 I4;
typedef long int            I8;
typedef unsigned int        U4;
typedef unsigned long int   U8;

typedef float               F4;
typedef double              F8;

typedef bool                Bool;
typedef std::vector<char>   String;

std::map<id, I4> integerStore;
std::map<id, U4> unsignedStore;
std::map<id, I8> longIntegerStore;
std::map<id, U8> longUnsignedStore;

std::map<id, F4> floatStore;
std::map<id, F8> doubleStore;

std::map<id, Bool> boolStore;
std::map<id, String> stringStore;

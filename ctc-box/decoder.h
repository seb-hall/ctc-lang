//  decoder.h
//  decoder returns an instance of 

#include <vector>
#include <string>

#define BEGIN 0
#define CONST 1
#define LOAD  2
#define STORE 3

#define INADD 
#define UIADD

#define FLADD


struct ctcModule {


};

ctcModule Decode(std::vector<char> source);

const char* working = R"(


00 00 00 // line 1, 0 parameter bits, BEGIN
01 04 01 A3 16 12 1D// line 1, 4 parameter bits, CONST 32 bits
w



)";
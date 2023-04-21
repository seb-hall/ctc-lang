//  structuriser.h     written by sebhall in April 2023
//
//  these functions interpret a string of tokens and produce
//  a coherent structure that can be passed into the memoriser
//  and coder

#include <string>
#include <vector>
#include <map>

#include "tokeniser.h"



struct MemoryComponent;
struct ExecutionComponent;

struct Structure {
    std::vector<MemoryComponent> memories;
    std::vector<ExecutionComponent> executions;
};

class Object {
    int memorySize;
    std::string type;
}

class ClassModel {
    std::vector<Object> members;
}

Structure Structurise(std::vector<Token> tokens);
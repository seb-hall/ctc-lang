//  tokeniser.h     written by sebhall in April 2023
//
//  this file contains functions and types for tokenising
//  CTC code. This means simply generating a list of tokens
//  that can be interpreted by the structuriser.

#include <string>
#include <vector>
#include <map>

std::vector<std::string> keywords {
    "class",
    "if",

};

enum TokenType {
    keyword, // class, if etc

    endMarker, // ;
    openBrace, // {
    closeBrace, // }
    openBracket, // (
    closeBracket, // )
    assignment, // =, +=, etc 
    operation, // + * / etc
    boolean, // && etc
    
    baseType, // int, bool, char, unsigned int
    pointer, // *

    type, // user defined type
    name // name of things

};

struct Token {
    std::string stringValue;
    TokenType type;
};

//  master tokenise function
std::vector<std::string> Tokenise(std::string line);

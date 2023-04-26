//  main.cpp for ctc-box
//  written by sebhall in April 2023

#include <stdio.h>


int main(int argc, char* argv[]) {

    printf("CTC-Box Version 1\n");
    printf("Seb Hall, 2023\n");

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    
    return 0;
}
#include <stdio.h>

int main(int argc, char* argv[]) {

    printf("CTCC Version 1\n");
    printf("Seb Hall, 2023\n");

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    
    return 0;
}
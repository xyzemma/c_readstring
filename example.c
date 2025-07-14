#include<stdio.h>
#include<stdlib.h>
#include "readstr.h"

int main() {
    printf("Input word: ");
    char* str = read_string();
    printf("%s\n",str);
    free(str);
    return 0;
}


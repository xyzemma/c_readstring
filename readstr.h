#ifndef READSTR_H_
#define READSTR_H_
#include <cmath>
#include<stdlib.h>
#include<stdio.h>

char* read_string() {
    int buf = sizeof(char);
    int size = 0;
    int i = 0;
    char nullchar = '\0';
    char *string = (char *)malloc(buf);
    if(string == NULL) {
        printf("Could not read string");
        return &nullchar;
    }
    while(1) {
        char c = getchar();
        if(c==EOF||c=='\n') {
            break;
        }
        if(size == buf) {
            buf += sizeof(char);
            char *string = (char *)realloc(string, buf);
        }
        string[i] = c;
        i += 1;
    }
    if(string == NULL) {
        printf("Could not read string");
        return &nullchar;
    }
    return string;
}

#endif

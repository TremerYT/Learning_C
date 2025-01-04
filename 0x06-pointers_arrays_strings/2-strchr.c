#include "main.h"
#include <stdlib.h>

char *_strchr(char *s, char c){
    while(*s){
        if (*s == c){
            return s;
        }
        s++;
    }
    return 0;
}
#include "main.h"

char *_strpbrk(char *s, char *accept){
    int i;
    
    while (*s){
        i = 0;
        while(accept[i] != '\0'){
            if (*s == accept[i]){
                return s;
            }
            i++;
        }
        s++;
    }

    return 0;
}
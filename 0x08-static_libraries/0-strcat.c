#include "main.h"

char *_strcat(char *dest, char *src){
    int i, len1, len2;

    len1 = strlen(dest);
    len2 = strlen(src);

    for (i = 0; i < len2; i++){
        dest[len1 + i] = src[i];
    }
    dest[len1 + i] = '\0';
    return dest;
}
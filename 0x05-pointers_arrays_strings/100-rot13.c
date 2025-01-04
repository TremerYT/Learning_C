#include "main.h"

char *rot13(char *str){
    int i, j;

    char s1[] = "ABCDEFGHIJKLMabcdefghijklm";
    char s2[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

    for(i = 0; str[i] != '\0'; i++){
        for(j = 0; s1[j] != '\0'; j++){
            if (str[i] == s1[j]){
                str[i] = s2[j];
            } else if(str[i] == s2[j]){
                str[i] = s1[j];
            }
        }
    }

    return str;
}
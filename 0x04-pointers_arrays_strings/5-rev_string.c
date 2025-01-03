#include "main.h"

void rev_string(char *s){
    int i, count;
    char ch;

    i = 0;
    count = 0;

    while (s[i] != '\0'){
        count++;
        i++;
    }

    for (i = 0; i < (count / 2); i++){
        ch = s[i];
        s[i] = s[count - i - 1];
        s[count - i - 1] = ch;
    }
}
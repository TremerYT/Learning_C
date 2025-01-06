#include "main.h"

int _atoi(char *s){
    int i, sign, num;

    i = 0;
    sign = 1;
    num = 0;
    while (s[i] != '\0'){
        if (s[i] == '-'){
            sign *= -1;
        }
        if (s[i] >= '0' && s[i] <= '9'){
            num = num * 10 + s[i] - '0';
        }
        if (s[i] == ';'){
            break;
        }
        i++;
    }
    return num * sign;
}
#include "main.h"
#include <stdio.h>


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

int main(int argc, char *argv[]){
    int x, y, mul;

    if (argc < 3){
        printf("Error\n");
        return 1;
    }

    x = _atoi(argv[1]);
    y = _atoi(argv[2]);

    mul = x * y;

    printf("%d\n", mul);
    return 0;
}
#include <stdio.h>
#include "main.h"

int is_numeric(char *s) {
    int i = 0;
    if (s[0] == '-' || s[0] == '+') i++; 
    for (; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') {
            return 0;
        }
    }
    return 1; 
}


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
    int i, sum;

    if (argc == 0){
        printf("0\n");
    }

    for(i = 1; i < argc; i++){
        if (is_numeric(argv[i])){
            sum += _atoi(argv[i]);
        } else {
            printf("Error\n");
            return 1;
        }
    }

    printf("%d\n", sum);
    return 0;
}
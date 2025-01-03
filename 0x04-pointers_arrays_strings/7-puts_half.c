#include "main.h"

void puts_half(char *str){
    int i, n, length_of_the_string;

    i = 0;
    length_of_the_string = 0;

    while (str[i] != '\0'){
        length_of_the_string++;
        i++;
    }

    if (length_of_the_string % 2 != 0){
        n = (length_of_the_string - 1) / 2;
    } else {
        n = length_of_the_string / 2;
    }

    for (i = n; str[i] != '\0'; i++){
        _putchar(str[i]);
    }
    _putchar('\n');
}
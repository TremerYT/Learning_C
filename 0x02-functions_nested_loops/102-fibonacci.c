#include "main.h"

int main(){
    unsigned int i, j, next;
    int count;

    i = 1;
    j = 2;

    printf("%lu, %lu", i, j);

    for(count = 2; count <= 50; count++){
        next = i + j;
        printf(", %lu", next);
        i = j;
        j = next;
    }
    printf("\n");
    return 0;
}
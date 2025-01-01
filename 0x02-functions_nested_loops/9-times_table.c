#include "main.h"

void times_table(void){
    int i, j, mul;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            mul = i *  j;
            if (j == 0){
                printf("%d", mul);
            }
            else{
                printf(", %2d", mul);
            }
        }
        printf("\n");
    }
}
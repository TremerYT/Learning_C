#include "main.h"

void print_times_table(int n)
{
    int i, j, mul;

    if (n > 15 || n < 0){
        return;
    }

    for(i = 0; i <= n; i++){
        for(j = 0; j <= n; j++){
            mul = i * j;
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
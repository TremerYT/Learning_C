#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    char password[12];

    srand(time(0));

    for (i = 0; i < 11; i++)
    {
        password[i] = rand() % 94 + 33; 
    }
    password[11] = '\0'; 

    printf("Generated password: %s\n", password);

    return 0;
}
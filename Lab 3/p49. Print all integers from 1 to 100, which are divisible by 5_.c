#include <stdio.h>

void main() 
{
    int i;
    printf("Numbers from 1 to 100 divisible by 5:\n");

    for (i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }
}
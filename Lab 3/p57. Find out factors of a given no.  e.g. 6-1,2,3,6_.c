#include <stdio.h>
void main()
 {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {   // If divisible, it's a factor
            printf("%d ", i);
        }
    }
}
#include <stdio.h>
int main()
{
    int a , b , c;
    printf("enter the number 1 . \n");
    scanf("%d",&a );
    
    printf("enter the number 2 to be multiplied with number 1 . \n");
    scanf("%d",&b );
    
    c=a*b;
    
    printf("The result of %d * %d = %d", a , b, c);

    
    return 0;
}

/*
OUTCOME

enter the number 1 . 
44
enter the number 2 to be multiplied with number 1 . 
4
The result of 44 * 4 = 176 */
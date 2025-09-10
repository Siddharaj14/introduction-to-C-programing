#include <stdio.h>
int main()
{
    int a , b , c;
    printf("enter the number 1 . \n");
    scanf("%d",&a );
    
    printf("enter the number 2 divide number 1 . \n");
    scanf("%d",&b );
    
    c=a/b;
    
    printf("The result of %d / %d = %d", a , b, c);

    
    return 0;
}


/*
Outcome

enter the number 1 . 
4
enter the number 2 divide number 1 . 
2
The result of 4 / 2 = 2 */
// code for converting minutes into hours
#include <stdio.h>

int main()
{
    float a , b ;
    printf("enter the number of minutes. \n");
    scanf("%f", &a );
    b=a/60;

    printf("%.2f minutes is equal to %.2f hours", a , b);

    
    return 0;
}

/*
Output

enter the number of minutes. 
780
780.00 minutes is equal to 13.00 hours
*/

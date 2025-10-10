#include<stdio.h>
void main()
{
    int num1, num2, add, sub, mul;
    float div;

    printf("Enter two integers\n");
    scanf("%d%d", &num1, &num2);

    add = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = num1/ (float)num2;

    printf("Sum = %d\n",add);
    printf("sub = %d\n",sub);
    printf("mul = %d\n",mul);
    printf("div = %.2f\n",div);



}

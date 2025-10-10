#include<stdio.h>
void sub()
{
    int a,b,sub=0;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    sub = a-b;
    printf("sub is =%d\n",sub);
}
void main()
{

    sub();
}

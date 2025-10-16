#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter a :");
scanf("%d\n",&a);
printf("Enter b :");
scanf("%d\n",&b);
printf("Enter c :");
scanf("%d\n",&c);

if(a>=b && a>=c)
printf("Largest value =%d\n",a);
else if(b>=a && b>=c)
printf("Largest value =%d\n",b);
else if(c>=a && c>=b)
printf("Largest value =%d\n",c);

if(a<=b && a<=c)
printf("smallest value =%d\n",a);
else if(b<=a && b<=c)
printf("smallest value =%d\n",b);
else if(c<=a && c<=b)
printf("smallest value =%d\n",c);
}
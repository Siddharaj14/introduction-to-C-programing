#include<stdio.h>
void main()
{
int i,n;
long f=1;
printf("Enter n :");
scanf("%d\n",&n);

for(int i=1;i<=n;i++)
{
f=f*i;
}
printf("Factorial of %d = %dn",n,f);
}
#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("Enter n :");
scanf("%d\n",&n);

for(int i=1;i<=n;i++)
{
if(i%2==0)
{
printf("%d",i);
sum=sum+i;
}
}
printf("Sum of Even numbers are %d = %d,n,sum");
}
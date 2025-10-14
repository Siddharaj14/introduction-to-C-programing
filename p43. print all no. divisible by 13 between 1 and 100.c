#include<stdio.h>
void main()
{
int sum=0;
int i;

for(int i=1;i<=100;i++)
{
if(i%13==0)
{
sum=sum+i;
}
}
printf("The sum of numbers divisible by 13 are %d\n,sum");
}
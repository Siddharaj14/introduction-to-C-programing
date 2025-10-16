#include<stdio.h>
void main()
{
int i,n;
float num,sum=0.0,mean;

printf("Enter number");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
printf("Enter value %d :",i);
scanf("%d",&num);
sum=sum+i;
}
mean=sum/n;
printf("Sum of values = %2f\n",sum);
printf("Mean of values = %2f\n",mean);
}
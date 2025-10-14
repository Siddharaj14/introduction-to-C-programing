#include<stdio.h>
void main()
{
int num;
int sum=0;
float mean;
printf("Enter 10 integers :");

for(int i=1;i<=10;i++)
{
printf("Enter value %d :",i);
scanf("%d",&num);
sum=sum+num;
}
mean=(float)sum/10.0;
printf("Sum of 10 values :%d\n",sum);
printf("Mean of 10 values :%2f\n",mean);
}
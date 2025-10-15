#include<stdio.h>
void main()
{
int n;
printf("Enter n :");
scanf("%d",&n);

if(n%7==0){
printf("%d is divible by 7\n",n);
}
else{
printf("%d is not divisible by 7\n",n);
}
}
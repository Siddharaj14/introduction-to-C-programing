#include<stdio.h>
void main()
{
float gross,allowance,deduction,net;

printf("Enter gross salary :");
scanf("%f\n",&gross);

if(gross>10000){
allowance = gross*0.10;
deduction = gross*0.03;
}
else if(gross>5000){
allowance = gross*0.05;
deduction = gross*0.01;
}
net = gross + allowance - deduction ;

printf("gross salary : %2f\n",gross);
printf("allowance : %2f\n",allowance);
printf("deduction : %2f\n",deduction);
printf("net salary : %2f\n",net);
}

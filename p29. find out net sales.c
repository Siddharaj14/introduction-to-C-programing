#include<stdio.h>
void main()
{
float gross,discount,net;

printf("Enter gross sales :");
scanf("%f",&gross);

if(gross>20000){
discount = gross*0.15;
}
else if(gross>10000){
discount = gross*0.10;
}
else{
discount = gross*0.05;
}
net = gross - discount;
printf("gross sales : %2f\n",gross);
printf("discount : %2f\n",discount);
printf("net sales : %2f\n",net);
}
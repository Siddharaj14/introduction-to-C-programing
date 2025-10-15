#include<stdio.h>
void main()
{
int m1,m2,m3,total;
float avg;

printf("Enter marks of three subjects :");
scanf("%d%d%d",&m1,&m2,&m3);

if(m1<35 || m2<35 || m3<35)
{
printf("Result : fail");
}
else{
total = m1+m2+m3;
avg = total/3;
}
printf("total marks = %d\n",total);
printf("average = %2f\n",avg);

if(avg>=70){
printf("Result : Distinction\n");
}
else if(avg>=60){
printf("Result : First class\n");
}
else if(avg>=50){
printf("Result : Second class\n");
}
else if(avg>=35){
printf("Result : Third class\n");
}
else{
printf("Result : Fail\n");
}
}
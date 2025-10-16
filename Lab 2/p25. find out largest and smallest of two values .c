#include<stdio.h>
void main()
{
int a,b;
printf("Enter a :");
scanf("%d",&a);
printf("Enter b :");
scanf("%d",&b);

if(a>b){
printf("Largest value = %d\n",a);
printf("Smallest value = %d\n",b);
}
else if(b>a){
printf("Largest value = %d\n",b);
printf("Smallest value = %d\n",a);
}
else{
printf("Both numbers are equal : %d\n",a,b);
}
}
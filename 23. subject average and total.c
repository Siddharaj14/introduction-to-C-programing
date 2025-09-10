//23. Calculate average of three subjects along with their total  
#include <stdio.h>
int main()
{ float a,b,c,m ,t;

   
     printf("Enter the marks of subject 1 out of 100\n:  ");
    scanf("%f",&a);
     printf("Enter the marks of subject 2 out of 100\n:  ");
    scanf("%f",&b);
     printf("Enter the marks of subject 3 out of 100\n:  ");
    scanf("%f",&c);
   t=a+b+c; 
   m =t/3;
  
    printf("The total of three subjects is %.2f",t);
    printf("\nThe average of three subjects is %.2f",m);
    return 0;
    
}
/*
output Enter the marks of subject 1 out of 100
:  50
Enter the marks of subject 2 out of 100
:  0
Enter the marks of subject 3 out of 100
:  41
The total of three subjects is 91.00
The average of three subjects is 30.33
*/
//21. Calculate net salary  where net salary = gross salary + allowance – deduction. Allowances are 10% while deductions are 3% of gross salary.
 
#include <stdio.h>
int main()
{ float g,n,a,d;

    printf("Enter the gross salary:  ");
    scanf("%f",&g);
    
    a= 0.1*g;
    d= 0.03*g;
    n= g +a - d;
    
    printf("The net salary is %.2f + %.2f (allowances) - %.2f (deductions) = %.2f ",g,a,d,n);
   
    return 0;
    
}/*

output

Enter the gross salary:  8000
The net salary is 8000.00+ 800.00(allowances)- 240.00(deductions)=8560.00 

*/

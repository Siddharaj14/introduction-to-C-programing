//22. Calculate net sales where net sales = gross sales – 10% discount of gross sales.  
#include <stdio.h>
int main()
{ float g,n,d;

    printf("Enter the gross sales:  ");
    scanf("%f",&g);
    
    d= 0.1*g;
  
    n= g - d;
    
    printf("The net sales is %.2f- %.2f(discounts)=%.2f ",g,d,n);
   
    return 0;
    
}
/*
output

Enter the gross sales:  10000
The net sales is 10000.00- 1000.00(discounts)=9000.00 
*/
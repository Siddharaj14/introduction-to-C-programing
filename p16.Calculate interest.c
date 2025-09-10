//16.Calculate interest where I = PRN/100.
#include <stdio.h>

int main() {
    float i,p,r,n;

   
    printf("Enter Principal amount in Rs : ");
    scanf("%f", &p);
    printf("Enter the interest rate in % :");
    scanf("%f", &r);  
    printf("Enter the number of years: ");
    scanf("%f", &n);
    i=p*r*n/100;
    
    

    printf("Interest is: %.2f\n", i);

    return 0; // Indicate successful program execution
}
/*
output
Enter Principal amount in Rs : 50000
Enter the interest rate in % :5
Enter the number of years: 10
Interest is: 25000.00

*/
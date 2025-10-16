//20. Calculate area of a triangle. A = H*L/2
#include <stdio.h>
int main()
{ float h,l,a;

    printf("Enter the height of the triangle:  ");
    scanf("%f",&h);
    
    printf("Enter the base length of the triangle:  ");
    scanf("%f",&l);
    
    a=  h*l/2;
    
    printf("The Area of triangle is %.2f units",a);
   
    return 0;
    
}
 /*
output

Enter the height of the triangle:  10
Enter the base length of the triangle:  20
The Area of triangle is 100.00 units

*/
//19. Calculate area of a circle. A = 22/7 * R * R 
#include <stdio.h>
int main()
{ float r,a;

    printf("Enter the radius of the circle:  ");
    scanf("%f",&r);
    
    a=  3.14*r*r;
    
    printf("The Area is %.2f units",a);
   
    return 0;
    
}
/*
output

Enter the radius of the circle:  5
The Area is 78.50 units
*/
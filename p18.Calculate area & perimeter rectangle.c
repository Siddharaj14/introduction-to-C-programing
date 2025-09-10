//18. Calculate area & perimeter of a rectangle. A = L*B, P = 2 (L+B)
#include <stdio.h>
int main()
{ int l,b,a,p;

    printf("Enter the length of side of the rectangle:  ");
    scanf("%d",&l);
    printf("Enter the breadth of side of the rectangle:  ");
    scanf("%d",&b);
    p=2* (b+l);
    a=l*b;
    
    printf("The Area is %d and perimeter is %d of the given rectangle ",a,p);
   
    return 0;
    
}
/*
output

Enter the length of side of the rectangle:  50
Enter the breadth of side of the rectangle:  100
The Area is 5000 and perimeter is 300 of the given rectangle 
*/
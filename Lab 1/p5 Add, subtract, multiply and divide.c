//Add, subtract, multiply and divide two numbers.
#include <stdio.h>
int main()
{
    int a,b ,c;
    printf("Addition \n");
    printf("Enter the number 1 to add .\n" );
    scanf("%d",&a);
    printf("Enter the number 2 to add.\n");
    scanf("%d", &b);
    c=a+b;
    printf("The result of %d +%d = %d \n\n\n", a , b ,c );
    
    printf("Subtraction: \n\n");
    printf("Enter the number1 .\n" );
    scanf("%d",&a);
    printf("Enter the number 2 to subtract.\n");
    scanf("%d", &b);
    c=a-b;
    printf("The result of %d - %d = %d", a , b ,c );
    
    printf("\n\n\n Multiplication \n\n");

    printf("Enter the number 1\n");
    scanf("%d",&a);
    printf("Enter the number 2 to multiply \n");
    scanf("%d",&b);
    c=a*b;
    printf("The product of %d * %d= %d",a,b,c);
    
     printf("\n\n\n Division \n\n");

    printf("Enter the number 1\n");
    scanf("%d",&a);
    printf("Enter the number 2 to divide \n");
    scanf("%d",&b);
    c=a/b;
    printf("The product of %d / %d= %d",a,b,c);
    
    
    return 0;
}

/*

Output 

Addition 
Enter the number 1 to add .
77
Enter the number 2 to add.
88
The result of 77 +88 = 165 


Subtraction: 

Enter the number1 .
82
Enter the number 2 to subtract.
12
The result of 82 - 12 = 70


 Multiplication 

Enter the number 1
55
Enter the number 2 to multiply 
77
The product of 55 * 77= 4235


 Division 

Enter the number 1
44
Enter the number 2 to divide 
22
The product of 44 / 22= 2  */
#include<stdio.h>
#include<math.h>
int power(int a, int b);
int main()
{
    int a,b,raised_value;

    printf("Enter a :");
    scanf("%d",&a);

    printf("Enter b :");
    scanf("%d",&b);

    raised_value = power(a,b);

    printf("result: %d",raised_value);
}

int power(int a,int     b)
{
    int x;
    x = pow(a,b);

    return x;
}

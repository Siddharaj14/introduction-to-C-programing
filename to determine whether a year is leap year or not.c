#include<stdio.h>
int main()
{
    int i;
    printf("Enter i :");
    scanf("%d",&i);

    if(i%4==0 || i%400==0)
    {
        printf("Year is leap year");

    }
    else
    {
        printf("Year is not a leap year");
    }
}

#include<stdio.h>
void main()
{
    int i,n,rev=0,m;
    printf("enter the number");
    scanf("%d",&n);
    m=n;

    while(n>0)
    {
        i=n%10;
        rev=rev*10+i;
        n=n/10;
    }
    if(m==rev)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}

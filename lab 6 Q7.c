#include<stdio.h>
int main()
{
    char str[20];
    char rev[20];
    int i,j,k;

    printf("Enter String\n");
    scanf("%s", str);

    //logic for string length
    for(i=0; str[i]!='\0'; i++);

   {
    printf("Length of string is %s=%d\n",str,i);

    //logic for reversing the string

   }

    for(j=0,k=i-1;k>=0;j++,k--)
    {
        rev[j]=str[k];
        printf("%c = %s\n",rev[j],rev);
    }
    rev[j]='\0';
    printf("\n %s= String is %s,str,rev");

}

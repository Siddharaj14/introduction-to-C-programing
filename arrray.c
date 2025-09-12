#include<stdio.h>
void main()
{
    int a[10],i,j,temp;
    printf("Enter Array Elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    //ARRAY ELEMENT DISPLAY
    for(i=0;i<10;i++)
    {
        printf("Elements is %d\n",a[i]);
    }
    //ACENDING ORDER
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("Elements is %d\n",a[i]);
    }
}


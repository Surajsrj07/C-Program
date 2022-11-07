

#include<stdio.h>

int main()
{
    int a;
    printf("\nEnter the value of a: ");
    scanf("%d",&a);

    if(a<0)
    {
        printf("\n%d is a negative value",a);
    }

    else if(a==0)
    {
        printf("\ngiven value is %d",a);
    }

    else if(a>0)
    {
        printf("\n%d is a Positive value",a);
    }

    return 0;
}
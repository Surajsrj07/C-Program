//One dimensional Array

#include<stdio.h>

int main()
{
    int i,a[100],n;
    printf("\nEnter the limits : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the Number : ");
        scanf("%d",&a[i]);
    }

     for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}
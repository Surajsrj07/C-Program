//Program to print greatest of n numbers in an Array


#include<stdio.h>

int main()
{
    int i,n,t,a[100];

    printf("\n Enter the Limit : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the value : ");
        scanf("%d",&a[i]);
    }

    t=a[0];  

    for(i=1;i<n;i++)
    {
        if(t<a[i])
        t=a[i];
    }

    printf("\nThe greatest of n number is : %d",t);

    return 0;
}
   


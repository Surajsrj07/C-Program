//Program to find total no of even and odd numbers in an Array

#include<stdio.h>

int main()
{
    int a[100],i,n,e=0,o=0;
    printf("\nEnter the Limits : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the value : ");
        scanf("%d",&a[i]);
        a[i]%2==0?e++:o++;  //conditional operator 
    // if(a[i]%2==0)
    // {
    //     e++;
    // }

    // else{
    //     o++;
    // }
    }

    printf("\n Total no of even : %d",e);
    printf("\n Total no of odd  : %d",o);

    return 0;
}
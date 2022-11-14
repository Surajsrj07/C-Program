//C program to display Fibonacci Series

// 0 1 1 2 3 5

#include<stdio.h>

int main()
{
    int i,n,a=-1,b=1,c;
    printf("\nEnter the Limit : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        c=a+b; //0 1 1 2 3 5
        a=b;  //1 0 1
        b=c;  //0 1 1

        printf("\n%d",c);

    }

    return 0;
}
//Return with Argument Function in C


#include<stdio.h>

int add(int,int);

int main()
{
    int a,b;
    printf("\nEnter the value of A & B : ");
    scanf("%d%d",&a,&b);
    a=add(a, b);
    printf("\n Total : %d",a);
    return 0;
}

int add(int x,int y)
{
    return x+y;
}
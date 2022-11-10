//Return without Argument Function in C


#include<stdio.h>

int add();

int main()
{
    int a;
    a =add();
    printf("\nTotal : %d",a);
    return 0;
}

int add()
{
    int a,b;
    printf("\nEnter the value of A & B : ");
    scanf("%d%d",&a,&b);
    return a+b;
}
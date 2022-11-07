//conditional statement ?:


#include<stdio.h>

int main()
{
    int a,b,c;
    printf("\n Enter the value of A and B : \n");
    scanf("%d%d",&a,&b);

    c=a>b?a:b;
    printf("\nGreatest Number is : %d",c);

    return 0;
}


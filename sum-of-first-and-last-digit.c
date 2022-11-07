//If a four digit number is input through the keyboard,
//write a program to obtain the sum of first and last digit number.

#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,result;
    printf("\nEnter the four digit number : ");
    scanf("%d",&a); //1234
    
    b=a/10; //123
    c=a%10; //4

    d=b/10; //12
    e=b%10; //3

    f=d/10; //1
    g=d%10; //2

    result=f + c;

    printf("\nSum of first & last digit is : %d",result);
    return 0;


}
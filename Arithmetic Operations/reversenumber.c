//If a five digit number is input through the keyboard,write a program to reverse a number

#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,result;
    printf("\nEnter five digit number : ");
    scanf("%d",&a);  //12345

    b=a/10;
    c=a%10; //5

    d=b/10;
    e=b%10; //4

    f=d/10;
    g=d%10; //3

    h=f/10; //1
    i=f%10; //2

    result = (c*10000)+(e*1000)+(g*100)+ (h*10) +(i*1);

    printf("\nReverse of five digit no %d is : %d",a,result);

}
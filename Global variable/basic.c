//Global variable


#include<stdio.h>

void display();  //fn declaration

int a=10;   //declared varaible outside of function,so called as global variable

int main()
{
    printf("\nValue of A :%d",a);
    display();   //fn calling
    return 0;
}


void display()    //fn definition
{
    a++;
    printf("\nvalue of A :%d",a);
}
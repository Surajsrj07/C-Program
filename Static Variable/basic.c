//STATIC variable



#include<stdio.h>

void display();

int main()
{
    display();
    display();
    display();
    return 0;
}


void display()
{
    static int a=1;  //it is stored in static memory loacation
    a++;
    printf("\nA : %d",a);
}

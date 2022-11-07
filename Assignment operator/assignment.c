



#include<stdio.h>

int main()
{
    int a=10,b=5;

    a+=20;
    printf("\n a value of a+= : %d",a); //30

    a-=10;
    printf("\n a value of a-= : %d",a); //20

    a*=5;
    printf("\n a value of a*= : %d",a); //100

    a/=15;
    printf("\n a value of a/= : %d",a); //6


    a%=6;
    printf("\n a value of a%= : %d",a); //0
    
    return 0;
}
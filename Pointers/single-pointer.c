//Single Pointer


#include<stdio.h>

int main()
{
    int a=10 ,*p;
    p = &a;

    printf("\n Value of a   : %d",a);
    printf("\n Address of a : %d",&a);
    printf("\n Value of p   : %d",p);
    printf("\n Address of p : %d",&p);

    printf("\n P Dereferencing: %d",*p);


return 0;

}
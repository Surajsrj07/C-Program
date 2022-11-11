//Double Pointer


#include<stdio.h>

int main()
{
    int a=10 ,*p;
    int **q;
    p = &a;  //address of a

    printf("\n Value of a   : %d",a);
    printf("\n Address of a : %d",&a);
    printf("\n Value of p   : %d",p);
    printf("\n Address of p : %d",&p);

    printf("\n P Dereferencing: %d",*p);
    printf("\n----------------------------------");

    q=&p;
    printf("\n Value of p   : %d",p);
    printf("\n Address of p : %d",&p);
    printf("\n Value of q   : %d",q);
    printf("\n Address of q : %d",&q);

    printf("\n **Q Dereferencing: %d",**q);

return 0;

}
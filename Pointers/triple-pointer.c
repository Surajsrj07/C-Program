//Triple Pointer


#include<stdio.h>

int main()
{
    int a=10,*p;
    int **q;
    int ***r;  //Triple pointer
    p=&a;

    printf("\n Value of a   : %d ",a);
    printf("\n Address of a : %d ",&a);
    printf("\n Value of p   : %d ",p);
    printf("\n Address of p : %d ",&p);
    printf("\n p Dereferencing : %d ",*p);

    printf("\n ------------------------------------");


    q=&p;

    printf("\n Value of p   : %d ",p);
    printf("\n Address of p : %d ",&p);
    printf("\n Value of q   : %d ",q);
    printf("\n Address of q : %d ",&q);
    printf("\n **q Dereferencing : %d ",**q);

    printf("\n ------------------------------------");

    r=&q;
    printf("\n Value of q   : %d ",q);
    printf("\n Address of q : %d ",&q);
    printf("\n Value of r   : %d ",r);
    printf("\n Address of r : %d ",&r);
    printf("\n **r Dereferencing : %d ",***r);

    printf("\n ------------------------------------");


return 0;
}
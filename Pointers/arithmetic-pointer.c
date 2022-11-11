


#include<stdio.h>

int main()

{
    int a=10;
    int *p,*r;
    p=&a;
    r=p+1;

    printf("\nSize of an Integer a : %d",sizeof(a));
    printf("\nValue of p          : %d",p);
    printf("\nValue of r          : %d",r);
    
    
return 0;
}
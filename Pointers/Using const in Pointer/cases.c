

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[3]={'a','b','c'};
    const char *p=a;

    printf("\n *p : %c",*p);
    //*p=x;
    p++;
    printf("\n *p : %c",*p);

    return 0;

}
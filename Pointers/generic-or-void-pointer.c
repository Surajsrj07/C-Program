//Generic or Void Pointer in c


#include<stdio.h>

int main()
{
    int a[] ={10,20,30,40,50};
    void *p;
    p=&a;

    //printf("\nThe value of *P : %d",*p);
    printf("\n *p : %d",*(int *)p);

    return 0;
}
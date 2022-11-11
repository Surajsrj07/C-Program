//Array values with pointer in C

#include<stdio.h>

int main()
{
    int a[] ={10,20,30,40,50};
    /*
     a =      {  10 ,      20,       30,       40,      50   }
     address={6422280 , 6422284 , 6422288 , 6422292 , 6422296}
     
    */
    int *p;

    p=&a;

    printf("\nSize of Integer  : %d",sizeof(int));//4
    printf("\nSize of A        : %d",sizeof(a));//20
    printf("\nLength of A      : %d",sizeof(a)/sizeof(int));//5

    printf("\naddress of a  : %d",&a);//6422280  address of a
    printf("\naddress  of p   : %d",p); //6422280

    p++;
    printf("\naddress  of p   : %d",p); //6422284 ,now after incrementing address of p is moved to another address
    printf("\ndereference   of p   : %d",*p); //20

    printf("\nValue of *++P : %d",*++p); //30
    printf("\nValue of ++*P : %d",++*p); //31

   
    return 0;

}
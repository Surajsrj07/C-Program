#include<stdio.h>

int main()
{
 
 float bs,da,hra,gs;
 printf("\nEnter your Basic Salary : ");
 scanf("%f",&bs);

 da=bs*0.4;
 hra=bs*0.2;
 gs=bs+da+hra;

 printf("\nBasic salary : %0.2f",bs);
 printf("\nDaily Allowance : %0.2f",da);
 printf("\nHouse rent allowance : %0.2f",hra);
 printf("\nGross salary : %0.2f",gs);
   return 0;
}
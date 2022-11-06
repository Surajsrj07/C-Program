#include <stdio.h>

int main()
{
   int a = 025;  //octal values
   int b =0x41;  //hexadecimal values
   char c = 'G';
   float d =125e2; //multiply by 100
   float e =125e-2; //divided by 100

   printf("%d \n %d \n %c \n %0.2f \n %0.2f",a,b,c,d,e);
    return 0;
}


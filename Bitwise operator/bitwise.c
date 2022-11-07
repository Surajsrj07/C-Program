

#include <stdio.h>

int main()
{
    int a = 10, b = 25, c;                 // binary value of a =1010 ; b =11001
    printf("\n Bitwise AND  : %d", a & b); // 8    AND
    printf("\n Bitwise OR   : %d", a | b);  // 27     OR
    printf("\n Bitwise XOR  : %d", a ^ b); // 19    XOR
    printf("\n Bitwise NOT  : %d", ~b);    //-26     NOT

    a = 16;
    b = a << 2;
    c = b >> 2;

    printf("\n Left shift   : %d", b); //64
    printf("\n Right shift  : %d", c);  //16

    return 0;
}
// Two numbers are input through the keyboard into two locations c and d ,
//  write a program to interchange the contents of c & d

// Swapping two numbers:

#include <stdio.h>

int main()
{
    int c, d, a;
    printf("\nEnter two numbers : ");
    scanf("%d%d", &c, &d);
    printf("\nBefore swapping C: %d d: %d", c, d); // 5 //10

    a = c; // 5
    c = d; // 10
    d = a; // 5
    printf("\nAfter swapping  C: %d d: %d", c, d);

    return 0;
}


// without using third varible;we can swap two numbers
 // input => a=5; b =10;
// a=a+b; //15
// b=a-b; //5
// a=a-b; //10

//output => a=10 ; b=5;

// multiplication method

// a=a*b;
// b=a/b;
// a=a/b;
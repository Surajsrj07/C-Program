// GOTO Statement

//  Print first 10 numbers 

#include <stdio.h>

int main()

{
    int i = 0;
back:
    printf("\n %d", i);
    i++;
    if (i != 10)
    {
        goto back;
    }

    return 0;
}
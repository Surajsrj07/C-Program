

#include <stdio.h>

int main()
{
    int ch;
    printf("\nEnter the value : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("\n ONE");
        break;

    case 2:
        printf("\n TWO");
        break;

    case 3:
        printf("\n THREE");
        break;

    default:
        printf("\n Invalid Number");
        break;
    }

    return 0;
}
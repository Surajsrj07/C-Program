// Write a program to find the given character is vowel or not using switch case.

#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter the character : ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':  // CALLED AS GROUP SWITCHING
        printf("%c is a vowel", ch);
        break;

    default:
        printf("%c is not a vowel ", ch);
        break;
    }

    return 0;
}

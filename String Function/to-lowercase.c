//Write a program to convert string to lowercase letter in c


#include<stdio.h>

int main()
{
    char a[100];
    int i;

    printf("\nEnter the String : ");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)   // 65 - 90 capital letter

        a[i]=a[i]+32;

    }

    puts(a);

    return 0;
}
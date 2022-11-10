// No return without argument function in C

/*
1.Function Declaration
2.Function Definition
3.Function Calling
*/

#include<stdio.h>

void add(); // fn declaration

// void -keywords
// add()-function name

int main()
{
    add();  //function calling
    return 0;
}

void add()  //Function Definition
{
    int a,b,c;
    printf("\nEnter the value of a & b : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n%d",c);
    
}
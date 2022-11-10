// No return with argument function in C

/*
1.Function Declaration
2.Function Definition
3.Function Calling
*/

#include<stdio.h>

void add(int,int); // fn declaration

// void -keywords
// add()-function name

int main()  //function calling
{

    int a ,b;
    printf("\nEnter the value of A & B : ");
    scanf("%d%d",&a,&b);
    add(a,b);  //Actual Parameters
    return 0;
}

//Function Definition
void add(int x, int y)  
{
    int c;
    c=x+y;
    printf("\n%d",c);
    
}


//Local variable   or block scope

#include<stdio.h>

int add()
{
    int a,b; //we cannot access this variable
}

int main()

{
 for(int i=0;i<5;i++)
 {
    printf("\n%d",i);  //block scope -int variable is working inside the block
 }

return 0;
}
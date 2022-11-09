//For LOOP
//SYNTAX:
/*
for(i=0;i<=n;i++);
{
    statement;
}
*/

#include<stdio.h>

int main()
{
    int n,i;
    printf("\nEnter the Limits : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i+=2)
    {
        printf("\n%d",i);
    }
   
   return 0;
}
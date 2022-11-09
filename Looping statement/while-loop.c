//While Loop

//3 steps:
/*Initialisation | condition | Increment*/

/*syntax:

while(condition)
{
    printf();
    i++;
}*/


#include<stdio.h>

int main()

{
    int i=0,n;
    printf("\nEnter the Limit : ");
    scanf("%d",&n);

    while (i<=n)
    {
    printf("\n%d",i);
     i++;
    }
    
    return 0 ;
}


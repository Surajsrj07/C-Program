//DO while loop

//syntax:

/*
do
{
    printf();
    i++;
}
while(condition);

*/

//Getting even numbers

#include<stdio.h>

int main()
{
    int i=0,n;
    printf("\nEnter the Limits :");
    scanf("%d",&n);

    do
    {
       printf("\n %d",i);
       i=i+2;  //i+=2
    } 
    while (i<=n);
   
    return 0;
    

}
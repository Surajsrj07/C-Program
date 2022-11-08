

/*A library charges a fine for every book  returned late.
For first 5 days the fine is 50 paise.
and for 6-10 days  the fine is 1 rupees and 
above 10 days fine is 5 rupees
if you return the book after 30 days ,your menbership will be cancelled.
write a program to accept the number of days the members is to return the book and display the fine 
or the appropriate message*/

#include<stdio.h>

int main()
{
    int days;
    printf("\nEnter the days : ");
    scanf("%d",&days);
    
    if(days>=1 && days<=5)
    {
        printf("\nFine amount is 0.5 Paise");
    }
    else if(days>=6 && days<=10)
    {
        printf("\nFine amount is 1 Rupee");

    }
     else if(days>=11 && days<=29)
    {
        printf("\nFine amount is 5 Rupee");

    }
    else
    {
        printf("\nYour membership will be cancelled");
    }


    return 0;
}
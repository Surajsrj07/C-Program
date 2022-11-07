/*If the total selling price of 15 items and 
the total profit earned on them is input through the keyboard,
write a program to find the cost price of one item.*/
//eg=>selling price =200
//profit earned =50
//cost  price =150/15= rs.10


#include<stdio.h>

int main()
{
    float sp,profit,cp;
    printf("\nEnter the selling price of 15 items :Rs ");
    scanf("%f",&sp);
    printf("\nEnter Total Profit :Rs ");
    scanf("%f",&profit);
    
    cp=(sp-profit)/15;

    printf("\nCost of one Item :Rs%0.2f",cp);

    return 0;

}
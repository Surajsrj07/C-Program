/*
find the total no of currency notes of each denominations 10 ,50 100.If the amount to be
 withdraw is input through the keyboard in hundreds .find the total no of currency notes of each denomination ,
 the cashier will have to give to the withdrawer.
1475=>
100*14 =1400
50*1 =50
10*2 =20
balance =5
*/

#include<stdio.h>

int main()
{
    int amount;
    printf("\nAmount given to withdrawer : ");
    scanf("%d",&amount); //1475
    
    printf("\nDenomination of Hundreds : %d",amount/100); // q = 14 ; r = 75
    printf("\nDenomination of Fifties  : %d",(amount%100)/50); //q = 1 ; r =25
    printf("\nDenomination of ten's    : %d",((amount%100)%50)/10); // q =2 ; r=5
    printf("\nRemaining Amount         : %d",((amount%100)%50)%10); // r=5

    return 0;
}
/*
Write a program for the following output using switch case

MENU CARD:
  1.COFFEE      RS : 15
  2.TEA         RS : 10
  3.JUICE       RS : 25
  4.MILK SHAKE  RS : 50
  5.Puffs       RS : 30
  6.Cool Drinks RS : 20


  ENTER YOUR CHOICE :2

  YOU HAVE SELECTED TEA
  ENTER THE QUANTITY :5
  TOTAL AMOUNT :50

*/

#include <stdio.h>

int main()
{
    int ch,qty,i,net=0;
    items:         //label
    printf("\n\tMenu Card : ");
    printf("\n\t1.COFFEE       RS:15 ");
    printf("\n\t2.TEA          RS:10 ");
    printf("\n\t3.JUICE        RS:25 ");
    printf("\n\t4.MILK SHAKE   RS:50 ");
    printf("\n\t5.PUFFS        RS:30 ");
    printf("\n\t6.COOL DRINKS  RS:20 ");

    printf("\n Enter Your Choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("\nYou have selected Coffee");
        printf("\nEnter the Quantity : ");
        scanf("%d", &qty);
        net=net+(qty*15);
        break;

         case 2:
        printf("\nYou have selected Tea");
        printf("\nEnter the Quantity : ");
        scanf("%d", &qty);
        net=net+(qty*10);
        break;

         case 3:
        printf("\nYou have selected Juice");
        printf("\nEnter the Quantity : ");
        scanf("%d", &qty);
        net=net+(qty*25);
        break;

         case 4:
        printf("\nYou have selected Milk shake");
        printf("\nEnter the Quantity : ");
        scanf("%d", &qty);
        net=net+(qty*50);
        break;

         case 5:
        printf("\nYou have selected Puffs");
        printf("\nEnter the Quantity : ");
        scanf("%d", &qty);
        net=net+(qty*30);
        break;

         case 6:
        printf("\nYou have selected Cool Drinks");
        printf("\nEnter the Quantity : ");
        scanf("%d", &qty);
        net=net+(qty*20);
        break;

    default:
      printf("\n Please choose valid choice ");
        break;
    }

    printf("\nDo you want to continue, PRESS 1 : \n ");
    scanf("%d",&i);
    
    if(i==1)
    {
        goto items;
    }
    
    printf("\n Total Amount : %d",net);
    printf("\nThank you Come again");
  
    return 0;
}
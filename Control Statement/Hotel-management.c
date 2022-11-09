/*
Write a program for the following output using switch case

MENU CARD:
  1.COFFEE      RS : 15
  2.TEA         RS : 10
  3.JUICE       RS : 25
  4.MILK SHAKE  RS : 50

  ENTER YOUR CHOICE :2

  YOU HAVE SELECTED TEA
  ENTER THE QUANTITY :5
  TOTAL AMOUNT :50

*/

#include<stdio.h>

int main()
{
    int ch,qty;
    printf("\n\tMENU CARD : ");
    printf("\n\t\t1.COFFEE      RS.15");
    printf("\n\t\t2.TEA         RS.10");
    printf("\n\t\t3.JUICE       RS.25");
    printf("\n\t\t4.MILK SHAKE  RS.50");
    
    printf("\n\nEnter your choice : ");
    scanf("%d",&ch);
  
  switch (ch)
  {
  case 1:
  printf("\nYou have selected Coffee");
  printf("\nEnter the quantity : ");
  scanf("%d",&qty);
  printf("\nTotal Amount :  %d",(qty*15));
    break;

    case 2:
  printf("\nYou have selected Tea");
  printf("\nEnter the quantity : ");
  scanf("%d",&qty);
  printf("\nTotal Amount :  %d",(qty*10));
    break;

     case 3:
  printf("\nYou have selected Juice");
  printf("\nEnter the quantity : ");
  scanf("%d",&qty);
  printf("\nTotal Amount :  %d",(qty*25));
    break;

     case 4:
  printf("\nYou have selected Milk Shake");
  printf("\nEnter the quantity : ");
  scanf("%d",&qty);
  printf("\nTotal Amount :  %d",(qty*50));
    break;
  
  default:
  {
    printf("\nYou have entered an Invalid Choice ");
  }
    break;
  }


return 0;
}
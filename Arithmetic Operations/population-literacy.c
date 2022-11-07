//In a town, percentage of men is 52.The percentage of total literacy is 48.
//If total percentage of  literate men is 35 of total population,
// write a program to find the total no of illiterate men and women 
// if the total population is 80000,

#include<stdio.h>

int main()
{
    int tot_pop=80000,tot_men,tot_women,tot_lit,lit_men,lit_women,illit_men,illit_women;
    tot_men=(52*tot_pop)/100;
    tot_women=tot_pop-tot_men;
    tot_lit=(48*80000)/100;
    lit_men=(35*80000)/100;
    lit_women=tot_lit-lit_men;
    illit_men=tot_men-lit_men;
    illit_women=tot_women-lit_women;

    printf("\nTotal Population: %d",tot_pop);
    printf("\nTotal Men       : %d",tot_men);
    printf("\nTotal Women     : %d",tot_women);
    printf("\nTotal Literacy  : %d",tot_lit);
    printf("\nLiterate men    : %d",lit_men);
    printf("\nLiterate Women  : %d",lit_women);
    printf("\nIlliterate men  : %d",illit_men);
    printf("\nIllierate Women : %d",illit_women);


    return 0;

}
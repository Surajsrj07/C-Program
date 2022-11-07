//The distance between two cities is input through the keyboard.
//write a program to convert it and print this distance in m,cm,ft,inches


#include<stdio.h>
int main()
{
    float km,m,cm,in,ft;
    printf("\n Enter KM :");
    scanf("%f",&km);

    m=km*1000;
    cm=m*100;
    in=cm/2.54;
    ft=in/12;

    printf("\nKiloMeter : %0.2f",km);
    printf("\nMeter : %0.2f",m);
    printf("\nCentimeter : %0.2f",cm);
    printf("\nInches : %0.2f",in);
    printf("\nFoot : %0.2f",ft);

    return 0;
}
// Temperature of the city in farenheit degrees is input through the keyboard,
// write a program to convert this into centigrate degrees.

#include <stdio.h>

int main()
{
    float farenheit, celsius;
    printf("\nEnter Farenheit : ");
    scanf("%f", &farenheit);

    celsius = (farenheit - 32) * 5 / 9;
    printf("\nTo Celsius : %f", celsius);
}

//[(f-32)*5]/9
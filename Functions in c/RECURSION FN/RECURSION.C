//Recursion fn
//factorial of the number

#include<stdio.h>

int factorial(int i) //5
{
    if(i<=1)
    {
        return 1;
    }
  
    return i*factorial(i-1);  //5*4*3*2*1

}

int main()
{
    printf("Factorial : %d",factorial(5)); //120
    return 0;
}


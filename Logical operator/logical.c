


#include<stdio.h>

int main()
{
  int a=32;  //pass marks >=35 && <=100

  printf("\n Logical AND : %d",a>=35 && a<=100);
  printf("\n Logical OR : %d",a>=35 || a<=100);
  printf("\n Logical NOT : %d",!(a>100));

  return 0;
}
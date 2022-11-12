//using const in char

#include<stdio.h>
#include<stdlib.h>

int main()
{
 /*case 1:
  char a[3]={'a','b','c'};
    const char *p=a;

    printf("\n *p = %c",*p);
    //*p=x;
    p++;
    printf("\n *p = %c",*p);*/


//case 2:
 char a[3]={'a','b','c'};
  char const *p=a;

  printf("\n *p = %c",*p);
  //*p=x;
  p++;
  printf("\n *p = %c",*p);


    return 0;


}



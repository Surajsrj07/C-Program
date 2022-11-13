//Union In C Programming

/*
1.User defined data type
2.Union member share the same memory location
3.Union size is based oi biggest size of data type

*/

#include<stdio.h>


struct udemo
{
    int a;
    char b;
};


union demo
{
  int a;
  char b;

}o;



int main()
{

/*printf("\nSize of Integer : %d",sizeof(int));  //4 bytes
printf("\nSize of Char    : %d",sizeof(char));  //1 byte
printf("\nSize of Union   : %d",sizeof(union demo));  //4 byte
printf("\nSize of Struct   : %d",sizeof(struct udemo));  //8 byte*/

o.a=65;

printf("\nUnion A : %d",o.a); //65
printf("\nUnion B : %c",o.b); //A  -->ascii value


return 0;
}
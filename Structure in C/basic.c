//Structure in C

#include<stdio.h>

struct student
{

    char *name;
    int age;
    float per;
};

int main()
{
    struct student o;
   
   /*
    printf("\nSize of structure : %d ",sizeof(o));
   printf("\nSize of char      : %d ",sizeof(char));  //4
   printf("\nSize of int       : %d ",sizeof(int));   //4
   printf("\nSize of float     : %d ",sizeof(float)); //4

   */
  o.name="Suraj Yeshvanth";
  o.age=28;
  o.per=88.56;

  printf("\nName           :%s",o.name);
  printf("\nAge            :%d",o.age);
  printf("\nPercentage     :%0.2f",o.per);

return 0;
}

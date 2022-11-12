//Array of objects in C

#include<stdio.h>

struct student
{

    char *name;
    int age;
    float per;
};

int main()

{
    struct student o[2];
//object 1
    o[0].name="suraj yeshvanth";
    o[0].age=28;
    o[0].per=75.42;

//object 2
    o[1].name="Harish";
    o[1].age=15;
    o[1].per=71.79;


  printf("\n------------------------------------------");

  printf("\nName           :%s",o[0].name);
  printf("\nAge            :%d",o[0].age);
  printf("\nPercentage     :%0.2f",o[0].per);

  printf("\n------------------------------------------");

  printf("\nName           :%s",o[1].name);
  printf("\nAge            :%d",o[1].age);
  printf("\nPercentage     :%0.2f",o[1].per);

  printf("\n------------------------------------------\n\n");



return 0;
}

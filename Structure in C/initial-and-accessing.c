//Initialization and accessing the member structure in c


#include<stdio.h>


struct student
{

    char *name;
    int age;
    float per;
};

int main()

{
    struct student o={"Suraj Yeshvanth",28,85.88};
   
 

  printf("\nName           :%s",o.name);
  printf("\nAge            :%d",o.age);
  printf("\nPercentage     :%0.2f",o.per);

return 0;
}

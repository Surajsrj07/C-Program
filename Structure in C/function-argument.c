

//Structure as Function arguments 

#include<stdio.h>


struct student
{

    char *name;
    int age;
    float per;
};

void display(struct student o)  //fn argument
{
  printf("\nName           :%s",o.name);
  printf("\nAge            :%d",o.age);
  printf("\nPercentage     :%0.2f",o.per);
}

int main()
{
    struct student o={"suraj yeshvanth",28,88.75};

    display(o);

return 0;
}

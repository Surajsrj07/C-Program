// Access members in structure

#include <stdio.h>

struct student
{

    char *name;
    int age;
    float per;
};

int main()
{
    struct student o={"suraj yeshvanth",28,85.98};
    struct student *ptr=&o;                         //declaring pointer variable
   

   

    printf("\nName           :%s", ptr->name);
    printf("\nAge            :%d", (*ptr).age);
    printf("\nPercentage     :%0.2f", (*ptr).per);

    return 0;
}

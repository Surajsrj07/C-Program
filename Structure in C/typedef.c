// Typedef
// we can name the date type alias

#include <stdio.h>

typedef struct student
{
    char *name;
    int age;
    float per;
} student;

int main()
{
    typedef int Integer; // defining new name to datatype name
    Integer a;
    student o;
    a = 100;
    printf("\n %d", a);




    o.name = "Suraj Yeshvanth";
    o.age = 28;
    o.per = 88.78;

    printf("\nName  : %s", o.name);
    printf("\nAge   : %d", o.age);
    printf("\nPerc  : %f", o.per);

    return 0;
}
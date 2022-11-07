

#include<stdio.h>

int main()
{
    char name[20];
    int age;
    printf("\nEnter your Name : ");
    scanf("%s",name);
    printf("\nEnter your Age : ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("\n %s your age  %d is eligible to vote",name,age);
    }

    else
    {
        printf("\n %s your age %d is not eligible to vote",name,age);
    }

    return 0;
}
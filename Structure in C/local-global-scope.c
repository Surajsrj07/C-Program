//Local & global scope structure in C

#include<stdio.h>

struct student  //global scope
{
    char *name;   
    int age;
    float per; 
};


void total()  
{
    struct mark //local scope
   {
    int m1,m2,m3;
   }s;

   s.m1=50;
   s.m2=60;
   s.m3=50;
  printf("\nmark1  : %d",s.m1);
  printf("\nmark2  : %d",s.m2);
  printf("\nmark3  : %d",s.m3);

    
}

int main()
{
    struct student o;

  o.name="Suraj Yeshvanth";
  o.age=28;
  o.per=88.78;

  printf("\nName  : %s",o.name);
  printf("\nAge   : %d",o.age);
  printf("\nPerc  : %f",o.per);

  total();

 return 0;  

}
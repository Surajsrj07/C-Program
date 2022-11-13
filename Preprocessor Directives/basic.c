//Preprocessor Directives in C

#include<stdio.h>

#define LIMIT 5     //we can name the preprocessor

#define MSG "Suraj Yeshvanth"

#define custom_message(a)\
printf("\n" #a" Welcome to Institution")


int main()
{
   for(int i=0;i<LIMIT;i++)
   {
    printf("\n %d",i);
   }

  printf("\n %s",MSG);

  custom_message("Ram kumar");


  printf("\nFile Name : %s",__FILE__);
  printf("\nTime      : %s",__TIME__);
  printf("\nLINE      : %d",__LINE__);
   
   return 0;
}
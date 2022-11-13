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
   
   return 0;
}
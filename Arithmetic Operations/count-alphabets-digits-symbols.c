//Program to find the no of alphabets ,number and special characters in a string
// "ram"  
// 0 =>"r" - 1 =>"a" -2 =>"m" -3 =>"\0"

#include<stdio.h>

//65 - 90  capital letter
//97 -122  small letter
//48 -57   numbers
int main()
{
  char str[100];
  int i,a=0,n=0,s=0;
  printf("\nEnter the String : ");
  gets(str);

  for(i=0;str[i]!='\0';i++)
  {
    if((str[i]>=65 && str[i]<=90)  || (str[i]>=97 && str[i]<=122))
  
        a++;

    else if(str[i]>=48 && str[i]<=57)
    
        n++;

    else
    
        s++;
    
  }

printf("\nTotal No of alphabets          : %d",a);
printf("\nTotal No of Numbers            : %d",n);
printf("\nTotal No of Special characters : %d",s);

  return 0;
}
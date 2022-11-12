//Malloc pointer  or Memory loaction


#include<stdio.h>
#include<stdlib.h>

int main()
{
   int i,n;
   printf("\n Enter the Limits : ");
   scanf("%d",&n);
      //void * malloc(size_of size)  
         /*Example :
             int *ptr = int* malloc ( 5 * size ( int ) )
             int *ptr = int* malloc ( 5 * 4 )
             int *ptr = int* malloc ( 20 )*/
      //type conversion

   int *ptr =(int *)malloc(n *sizeof(int));

   if(ptr==NULL)
   {
      printf("Memory not available...");
      exit(1);
   }

   for(i=0;i<n;i++)
   {
      printf("\nEnter the integer : ");
      scanf("%d",ptr+i);
   }

   for(i=0;i<n;i++)
   {
      printf("%d  ",*(ptr+i)); // ptr+1  dereferencing 
   }  

   //garbage values : 11603264  11600064  100663302  18646  11612000 
  
return 0;

}
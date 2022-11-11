//Malloc pointer

#include<stdio.h>

int main()
{
    //void * malloc(size_t size)
    int i,n;
    printf("\nEnter the Limit : ");
    scanf("%d",&n);

    int *ptr= (int *)malloc(n *sizeof(int));

     if(ptr ==NULL)
     {
        printf("\nMemory not available");
        exit(1;)
     }

      for(i=0;i<n;i++)
     {
        printf("\n Enter an Integer : ");
        scanf("%d",ptr+i);
     }


     for(i=0;i<n;i++)
     {
        printf("\n %d",*(ptr+i));  //ptr+1
     }

     return 0;

}
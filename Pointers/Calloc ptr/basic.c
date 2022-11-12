//Calloc pointer

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    //void *calloc(sizeof_t , sizeof_int);
    printf("\nEnter the Limits : ");
    scanf("%d",&n);

    int *ptr =(int *)calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory not available...");
        exit(1);
    }

    for(i=0;i<n;i++)
    {
        printf("\nEnter the Integer : ");
        scanf("%d",ptr+i);
    }

    for(i=0;i<n;i++)
    {
        printf("\n%d  : %d",&ptr+i,*(ptr+i));
    }
/*
6422292  : 10
6422296  : 20
6422300  : 30
6422304  : 40
6422308  : 50
*/
    return 0;
}
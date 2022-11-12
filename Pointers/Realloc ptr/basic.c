// Realloc Pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    // void * relloc(void *ptr,sizeof_t new_size)
    int *ptr =(int *)malloc(3*sizeof(int));
    /*int *ptr = (int *)malloc(3 * sizeof(int));
    int *ptr = (int *)realloc(ptr, 5 * sizeof(int));*/

    if(ptr==NULL)
    {
        printf("memory is not available");
        exit(1);
    }

    printf("\nEnter 3 nos : \n");
    for(i=0;i<3;i++)
    {
        scanf("%d",ptr+i);
    }

    ptr = (int *)realloc(ptr, 5*(sizeof(int)));
    for(i=3;i<5;i++)
    {
        scanf("%d",ptr+i);
    }


for(i=0;i<5;i++)
{
    printf("%d  ",*(ptr+i));
}

    return 0;
}
//CALL BY REFERENCE IN C

//swap program

#include<stdio.h>

void swap(int*x ,int*y)
{
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a,b;
    printf("\nEnter the value of A & B : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swap  A : %d , B :%d",a,b);
    swap(&a,&b);
    printf("\n After Swap  A : %d , B :%d",a,b);
     
    
    return 0;
}

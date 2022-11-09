


#include<stdio.h>

int main()

{
    int i,n,num,sum=0;
    printf("\nEnter the Limits : ");
    scanf("%d",&n);   //5

    for(i=1;i<=n;i++)
    {
        printf("\nEnter the number : "); // 5 4 0 2 1
        scanf("%d",&num);

        if(i==0)
        continue;
        sum+=num;
        
    }
        printf("\nTotal : %d",sum); //12

    return 0;
}


#include<stdio.h>

int main()

{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==8)
        break;   

        if(i==5)
        continue;   //skip the number we can use continue

        printf("\n%d",i);

    }

    return 0;
}
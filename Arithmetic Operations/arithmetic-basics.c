#include<stdio.h>
int main()
{
    int a,b,c;
    float x;
    printf("\n Enter Two Numbers : ");
    scanf("%d%d",&a,&b);

    c=a+b;
    printf("\n Total : %d",c);

    c=a-b;
    printf("\n Difference : %d",c);

    c=a*b;
    printf("\n Multiplication : %d",c);

    x=(float)a/(float)b; //type conversion integer to float
    printf("\n Division : %0.2f",x);

    c=a%b;
    printf("\n Modulus : %d",c);
    return 0;
}

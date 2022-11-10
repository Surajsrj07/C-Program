

#include<stdio.h>

void add()
{
 int a,b,c;
    printf("\nEnter the value of a : ");
    scanf("%d",&a);
    printf("\nEnter the value of b : ");
    scanf("%d",&b);
    c=a+b;
    printf("\nTotal : %d",c);
}
int main()
{
    int i,n;
    printf("\nEnter the limits : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        add();
    }
return 0;

}




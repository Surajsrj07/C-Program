/*Three digit number is input through the keyboard,
write a program to find given number is armstrong or not.*/

//eg: number 153
//1 =1*1*1  =  1
//5 =5*5*5  =125
//3 =3*3*3  = 27  
// =153 is a armstrong number


#include<stdio.h>

int main()
{
    int num,a,b,c,d;
    printf("\nEnter Three digit Number : ");
    scanf("%d",&num);  //153
    
    a=num/10; //15
    b=num%10; //3

    c=a/10; //1
    d=a%10; //5

    a=(c*c*c) + (d*d*d) + (b*b*b); //153
    
    if(num==a)
    {
        printf("\n%d is a Armstrong number",num);
    }
     
     else
     {
        printf("\n%d is a Not a Armstrong number",num);

     }

  return 0;
}
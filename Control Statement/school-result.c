
//school result management

//1.Five marks input through the keyboard
//2.Find total and average of given marks
//3.Find the result whether the given marks must be >=35.
//4.Grade as per the following condition

// 90-100 -A Grade
// 80-89  -B Grade
// 70-79  -C Grade
// <70    -D Grade
// Fail   -F Grade


#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("\nEnter your 5 subject marks : \n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    avg=total/5.0;
    printf("\nTotal Marks   : %d",total);
    printf("\nAverage Marks : %0.2f",avg);

    if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35)
    {
        printf("\nResult is Pass");
        if(avg>=90 && avg<=100)
        {
            printf("\nYour Grade is A");
        }
        else if(avg>=80 && avg<=89)
        {
            printf("\nYour Grade is B");

        }
        else if(avg>=70 && avg<=79)
        {
            printf("\nYour Grade is c");

        }
        else
        {
            printf("\nYour Grade is D");
        
        }
    }
    else
    {
            printf("\nResult is Fail");
            printf("\nYour Grade is F");

    }

    return 0;
}


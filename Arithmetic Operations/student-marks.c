// If the marks obtained by students in five different subjects are input through the keyboard,
// find out the aggegate marks and percentage marks obtained by the students.
// Assume that the maximum marks that can be obtained by the student in each subject is 100. 


#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("\n Enter your five subject marks : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    
    total=m1+m2+m3+m4+m5;
    avg=total/5;
    
    printf("\n Total : %d",total);
    printf("\n Percentage : %0.2f",avg);
    return 0;
    
}
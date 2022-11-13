//Input and Output Fns in C

#include<stdio.h>

int main()
{
    int a;
    char c;
    char name[50];
    printf("\nEnter the value of A : "); //ouput
    scanf("%d",&a); //input
    printf("\n A : %d",a); //Output

    fflush(stdin);   //CLEARING INPUT STREAM
    printf("\n Enter the character : ");
    c=getchar();  //INPUT
    putchar(c);
    
    fflush(stdin); 
    printf("\nEnter the Name : ");
    gets(name);
    puts(name);
    


    return 0;
}


#include<stdio.h>
#include<string.h>

int main()
{
    char c[20],a[20];
    char x[10]={'r','a','m','\0'};
    char y[10]={'k','u','m','a','r'};
    printf("\nEnter the string : ");
    gets(c);

    printf("\n%s",c);
    printf("\nLength    : %d",strlen(c));  //String Length
    printf("\nReverse   : %s",strrev(c));  //String Reverse
    printf("\nUppercase :%s",strupr(c)); //String UPPERCASE
    printf("\nLowercase :%s",strlwr(c)); //String Lowercase
    printf("\nCompare   :%d",strcmp(x,y)); //String Compare
    printf("\nCopy      :%s",strcpy(a,c)); //String Copy
    strcat(x,y);
    printf("\nConacatenation :%s",x);  //STRING Concatenation
  
    return 0;

    
}


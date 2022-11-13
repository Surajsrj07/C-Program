//Write File in C

#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("sample.txt","w");
    fprintf(fp,"Hello World!Welcome to c \n");
    fclose(fp);

    return 0;
}
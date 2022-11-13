//READ FILE IN C

// r -read  ;w -write; a -append

#include<stdio.h>

int main()
{
  FILE *fp;
  char c;
  fp=fopen("sample.txt","r");
  if(fp==NULL)
  {
    printf("\nFile not found or file can't open");
  }

  while(1)
  {
    c=fgetc(fp);
    if(c==EOF)   //end of file 
    break;
    printf("%c",c);
  }


return 0;
}
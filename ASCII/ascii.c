/*
128 total characters which are used mostly during program.

Total number of character in ASCII table is 256 (0 to 255)

0 to 31 (total 32 characters ) is called as ASCII Control characters
include 'escape' 'backspace' 'delete'

32 to 127 characers is called as  ASCII Printable characters

128 to 255 is called as the extended ASCII Codes.

*/
//48 to 57  =>0 tp9
//65 to 90  => A TO Z
//97 to 122 => a to z  
//32 => SPACE

#include<stdio.h>

int main()
{
    int i;
    char a ='a';

    for(i=0;i<=255;i++)
    {
        printf("\n%d : %c",i,i);
    }
      

      printf("%c : %c",a,a-32);

    return 0;
}
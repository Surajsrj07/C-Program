/*AN integer is input through the keyboard.
write a program to find out whether it is an even or an odd number
Hint: use % modulus operator
*/

#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter the value : ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("\n%d is an even number",n);
    }
    else{
        printf("\n%d is an odd number",n);
    }

    return 0;
    
}

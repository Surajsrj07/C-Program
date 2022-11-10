// Adding Two Matrices

#include <stdio.h>

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int i, j, n, m;
    printf("\nEnter the Row value : ");
    scanf("%d", &m);
    printf("\nEnter the column value : ");
    scanf("%d", &n);


//value of a
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\nEnter the value of a[%d][%d] :  ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

//value of b

     for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\nEnter the value of b[%d][%d] :  ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

//adding c = a+b
 for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
           c[i][j] = a[i][j]+b[i][j];

           printf("\t%d",c[i][j]);
        }

    printf("\n");

    }


    return 0;
}
/* 

    *
   **
  ***
 ****
*****

*/

#include<stdio.h>
void main()
{
    int i, j, row, sp;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for (sp=1; sp<=row-i; sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
} 


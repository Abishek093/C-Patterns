/*

******
*    *    
*    *
*    *
******

*/

#include<stdio.h>
void main()
{
    int i, j, row;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=row; j++)
        {
            if (i==1 || i==row || j==1 || j==row)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

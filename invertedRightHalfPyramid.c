
/*

*****
****
***
**
*

*/



#include<stdio.h>
#include<stdio.h>
void main()
{
    int i, j, row, sp;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for(i=0; i<row; i++)
    {
        for(j=0; j<row-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

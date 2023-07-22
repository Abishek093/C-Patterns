/*

* * * *
 * * *
  * *
   *
  * *
 * * *
* * * *

*/


#include<stdio.h>
void main()
{
    int i, j, row, sp, l;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for(i=-row; i<=row; i++)
    {
        if(i<0)
            l= -i;
        else
            l= i;
        
        for(sp=1; sp<=row-l; sp++)
        {
            printf(" ");
        }
        for(j=1; j<=l+1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

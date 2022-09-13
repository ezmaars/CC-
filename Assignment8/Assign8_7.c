#include <stdio.h>
/*

**********
****  ****
***    ***
**      **
*        *

*/
int main()
{

    int col = 10;
    for (int r = 5, k = 1; r >= 1; r--, k += 2)
    {

        for (int c = 1; c <= col; c++)
        {
            if (c > r && c < r + k)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
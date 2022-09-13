#include <stdio.h>
/*
   1
  121
 12321
1234321

*/

int main()
{

    for (int r = 3; r >= 0; r--)
    {
        for (int c = 1, k = c; c <= 7 - r; c++)
        {
            if (c > r)
            {
                if (c >= 4)
                {
                    printf("%d", k--);
                }
                else
                {
                    printf("%d", k++);
                }
            }
            else
            {
                printf(" ");
            }
        } // in loop
        printf("\n");
    } // out loop
    return 0;
}
#include <stdio.h>
/*
1234321
 12321
  121
   1

*/

int main()
{

    for (int r = 0; r <= 3; r++)
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
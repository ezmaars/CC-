#include <stdio.h>

/*

* * * * * * * * * 

  *           * 

    *       *

      *   *

        *

*/
int main()
{
    for (int r = 0; r <= 4; r++)
    {
        for (int c = 1; c <= 9 - r; c++)
        {
            if (c > r)
            {
                if (c > r + 1 && c < 9 - r && r >= 1 && r <= 3)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
            //print space before star printing 
            else
                printf("  ");
        }
        printf("\n\n");
    }
    return 0;
}
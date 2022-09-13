#include <stdio.h>
/*
        A 
      A B A 
    A B C B A
  A B C D C B A
A B C D E D C B A

*/

int main()
{

    for (int r = 4; r >= 0; r--)
    {
        for (int c = 1, k = 65; c <= 9 - r; c++)
        {
            if (c > r)
            {
                if (c >= 5)
                {
                    printf("%c ", k--);
                }
                else
                {
                    printf("%c ", k++);
                }
            }
            else
            {
                printf("  ");
            }
        } // in loop
        printf("\n");
    } // out loop
    return 0;
}
#include <stdio.h>
/*
A B C D C B A 
  A B C B A
    A B A
      A

*/

int main()
{

    for (int r = 0; r <= 3; r++)
    {
        for (int c = 1, k = 65; c <= 7 - r; c++)
        {
            if (c > r)
            {
                if (c >= 4)
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
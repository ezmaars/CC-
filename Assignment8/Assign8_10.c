#include <stdio.h>
/*

1 2 3 4 3 2 1 
1 2 3   3 2 1
1 2       2 1
1           1

*/
int main()
{

    for (int i=1,r = 4, k = 0; r >= 1; r--, k += 2,i=1)
    {

        for (int c = 1; c <= 7; c++)
        {
           
            if (c > r && c <r + k)
            {
                printf("  ");
                
            }
             
            else {if (c > 4)
                {
                    
                    printf("%d ", --i);
                }
                else
                {
                    printf("%d ", i++);
                    if(r==4 && c==4)--i;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
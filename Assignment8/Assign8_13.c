#include <stdio.h>
/*

A B C D E F G F E D C B A 
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A

*/
int main()
{

    for (int i=65,r = 7, k = 0; r >= 1; r--, k += 2,i=65)
    {

        for (int c = 1; c <= 13; c++)
        {
           
            if (c > r && c <r + k)
            {
                printf("  ");
                
            }
             
            else {if (c > 7)
                {
                    
                    printf("%c ", --i);
                }
                else
                {
                    printf("%c ", i++);
                    if(r==7 && c==7)--i;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
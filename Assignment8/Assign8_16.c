#include <stdio.h>
/*
    *
   ***
  *****
 *******
*********

*/

int main(){

    for(int r=4;r>=0;r--){
        for(int c=1;c<=9-r;c++){
            if(c>r){
                if (c > r + 1 && c < 9 - r && r > 0 && r <= 3)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
                //printf("* ");

            }else
            printf("  ");

        }
        printf("\n\n");
    }
    return 0;
}

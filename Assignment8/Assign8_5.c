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
                printf("*");

            }else
            printf(" ");

        }
        printf("\n");
    }
    return 0;
}
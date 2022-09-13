#include <stdio.h>
/*

    *
   **
  ***
 ****
*****

*/

int main(){
    
    for(int r=5;r>=1;r--){
        for(int c=1;c<=5;c++ ){
            if(c>=r){
                printf("*");
            }else{
            printf(" ");}
        }
        printf("\n");
    }
    return 0;
}
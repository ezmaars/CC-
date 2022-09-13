#include <stdio.h>
/*

*****
 ****
  ***
   **
    *
*/
int main(){
    
    for(int r=1;r<=5;r++){
        for(int c=1;c<=5;c++){
            if(c>=r){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
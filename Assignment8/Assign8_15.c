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
                if(c==4&&r==3){printf("  ");}
               else if((c==3||c==4) && r==2){printf("  ");}
                else{printf("* ");}
            }else{
            printf("  ");
            }

        }
        printf("\n\n");
    }
    return 0;
}
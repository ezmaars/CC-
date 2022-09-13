#include <stdio.h>
  /*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

int main(){
    int col=9 ;
    int mid=col/2;

    for(int r=0,k=mid,l=mid;r<=col-1;r++){
        int m=l;
        for(int c=0;c<=col-1-k;c++){
            if(c>=k&&c<=l){ printf("*");}
            else{           printf(" ");}
        }//IL
        if (r>=mid){k++;l--;}
        else{k--;l++;}
        printf("\n");
    }//OL
    return 0;
}

/*
It is interesting to see different patterns from same logic but little 
change in   printf("* ")star with single space
            printf("  ")double space

        * 
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
        
change in   printf("**")double star
            printf(" ")single space
    **
   ******
  **********
 **************
******************
 **************
  **********
   ******
    **

change in   printf("%c",174)ascii code
            printf("  ")three space
            col=21


                                        «
                                    «««
                                «««««
                            «««««««
                        «««««««««
                    «««««««««««
                «««««««««««««
            «««««««««««««««
        «««««««««««««««««
    «««««««««««««««««««
«««««««««««««««««««««
    «««««««««««««««««««
        «««««««««««««««««
            «««««««««««««««
                «««««««««««««
                    «««««««««««
                        «««««««««
                            «««««««
                                «««««
                                    «««
                                        «

*/
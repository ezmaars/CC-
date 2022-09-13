#include <stdio.h>
/*


  *****     *****  
 *******   ******* 
********* *********
******MySirG*******
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *

*/

int main(){


    //printing upper half
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<19;c++)
        {
            if(((2-r <=c) && (c<=6+r))||((12-r<=c)&&(16+r>=c)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for(int r=0;r<10;r++)
    {
        for(int c=0;c<19;c++)
        {
            if((r==0)&&(c==6)){printf("MySirG");}
            if((r==0)&&(c>=6)&&(c<=11)){continue;}
            if(((r<=c)&&(c<=18-r)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
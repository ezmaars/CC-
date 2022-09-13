#include <stdio.h>
/***********

* 

* * 

*   * 

*     * 

* * * * * 

*************/
int main(){\

    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++ ){
            if(col==1)             {printf("* ");}
            else if(col==row)      {printf("* ");}    
            else if(row>=5)        {printf("* ");}
            else                   {printf("  ");}

        }
        printf("\n\n");
    }
    return 0;
}
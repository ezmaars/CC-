#include <stdio.h>
//7. Write a program to find the position of first 1 in LSB. ?

// **Since we have not learnt loop yet. This program checks only 3bits for first in LSB bit 
int main(){
    int x = 6, count =1;
    int result =0;
    result = x&1;
    char str [30]= "Position of first 1 in LSB :";
    if(result==1)
         printf("%s%d",str,count);
    else {
        count++;
        x=x>>1;
        result=x&1;
        if(result==1)
            printf("%s%d",str,count);
        else{
            count++;
            x=x>>1;
            result=x&1;
            if(result==1)
                printf("%s%d",str,count);
            }
        }
    return 0;
}

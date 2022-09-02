#include <stdio.h>

//15. Write a program to check whether a given number is positive, negative
// or zero.
int main(){

    int num =-34;
    if(num>0)
        printf("Postive!");

    else if (num<0)
        printf("Negative");

    else
        printf("Zero");
    
    return 0;
}
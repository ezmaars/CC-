#include <stdio.h>
//14. Write a program to check whether a given number is divisible by 7 
//or divisible by 3.
int main(){

    int num=10;

    if(num%7==0||num%3==0)
        printf("divisibale by 7 or 3");
    else
        printf("Not Divisible by 7 or 3");

    return 0;

}
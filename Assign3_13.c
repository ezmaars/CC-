#include <stdio.h>
//13. Write a program to check whether a given number is divisible by 
//3 and divisible by 2.
int main(){

int num=6;

if(num%3==0&&num%2==0)
    printf("divisibale by 3 and 2");
else
    printf("Not Divisible by 3 and 2");
return 0;

}
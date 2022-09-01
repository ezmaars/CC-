#include <stdio.h>
//4. Write a program to swap values of two 
//int variables without using a third variable.
int main(){

int a, b;
a=100;
b=200;

printf("\nValues of a and b before swapping %d %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nValues of a and b after swapping %d %d",a,b);
    return 0;
}
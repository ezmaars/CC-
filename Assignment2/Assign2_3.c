#include <stdio.h>
 //3. Write a program to swap values of two int variables

int main(){

    printf("\nQ3");
    int a =5;
    int b=10;
    printf("\nValues of a=%d and b=%d before swapping",a,b);
    int temp = a;
    a=b;
    b=temp;
    printf("\nValues of a=%d and b=%d after swapping",a,b);
    return 0;
}
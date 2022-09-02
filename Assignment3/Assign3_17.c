#include <stdio.h>

// 17. Write a program which takes the length of the sides of a triangle 
//as an input. Display whether the triangle is valid or not.

int main(){

int sideA =5, sideB=4, sideC=3;

if(sideA+sideB>sideC && sideB+sideC>sideA && sideC+sideA>sideB)
    printf("Valid triangle");
    else 
    printf("Invalid Triangle!");
    return 0;
}
#include <stdio.h>
// 1. Write a program to print unit digit of a given number
int main(){
    
    
    int digit= 789; 
    printf("\nQ1 Enter a number: ");
    scanf("%d",&digit);
    printf("\nLast digit of %d: %d",digit,digit%10);
    return 0;
}
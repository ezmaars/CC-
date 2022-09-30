// Recursion in C Language
// 1. Write a recursive function to print first N natural numbers

#include <stdio.h>

void displayNum(int n)
{
    if(n<1)return;
    else{
        displayNum(n-1);
        printf("%d ",n);
        
    }
}

int main()
{
    displayNum(5);
    return 0;
}
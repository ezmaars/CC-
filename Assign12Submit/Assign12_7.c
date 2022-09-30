// Recursion in C Language
//7. Write a recursive function to print squares of first N natural numbers

#include <stdio.h>

void disSquare(int);
int main()
{   
    disSquare(5);
    return 0;
}

void disSquare(int n)
{
    if(n<1)return;
    disSquare(n-1);
    printf("%d ",n*n);
}
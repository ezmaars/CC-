// Recursion in C Language

// 3. Write a recursive function to print first N odd natural numbers

#include <stdio.h>
void dispOddNum(int n);

int main()
{
    dispOddNum(5);
    return 0;
}
void dispOddNum(int n)
{   
    if(n<1)return;
    dispOddNum(n-1);
    printf("%d ",2*n-1);
    
}
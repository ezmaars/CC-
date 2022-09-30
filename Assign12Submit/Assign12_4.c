// Recursion in C Language
// 4. Write a recursive function to print first N odd natural numbers in reverse order

#include <stdio.h>

void disRevOddNum(int n);
int main()
{
    disRevOddNum(5);
    return 0;
}
void disRevOddNum(int n)
{
    if(n<1)return;
    printf("%d ",n*2-1);
    disRevOddNum(n-1);
    
}
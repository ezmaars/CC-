// Recursion in C Language
// 6. Write a recursive function to print first N even natural numbers in reverse order

#include <stdio.h>

void disRevEvnNum(int n);
int main()
{
    disRevEvnNum(5);
    return 0;
}
void disRevEvnNum(int n)
{

    if(n<1)return;
    printf("%d ",n*2);
    disRevEvnNum(n-1);
    
    
}
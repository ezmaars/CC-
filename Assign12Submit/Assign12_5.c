// Recursion in C Language
// 
// 5. Write a recursive function to print first N even natural numbers
// 
#include <stdio.h>

void disEvnNum(int n);
int main()
{
    disEvnNum(5);
    return 0;
}
void disEvnNum(int n)
{
    if(n<1)return;
    disEvnNum(n-1);
    printf("%d ",n*2);    
}
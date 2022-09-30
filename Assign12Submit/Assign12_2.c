// Recursion in C Language

// 2. Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>

void displayRevNum(int n)
{
    
    if(n<1)return;
    else{
        printf("%d ",n);
        displayRevNum(n-1);

        
    }
}

int main()
{
    displayRevNum(10);
    return 0;
}
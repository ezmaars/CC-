// Recursion in C Language

// 10. Write a recursive function to print reverse of a given number
#include <stdio.h>

void decRev(int dec);
int main()
{
    int num =1792;

    decRev(num);
    return 0;
}

void decRev(int dec)
{
    if(dec==0)return;  
    printf("%d",dec%10);
    decRev(dec/10);
}
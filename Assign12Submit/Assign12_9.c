// Recursion in C Language

// 9. Write a recursive function to print octal of a given decimal number


#include <stdio.h>

void decToOct(int dec);
int main()
{
    int num =1792;

    decToOct(num);
    return 0;
}

void decToOct(int dec)
{
    if(dec==0)return;
    decToOct(dec/8);
    printf("%d",dec%8);
}
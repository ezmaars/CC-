// Recursion in C Language

// 8. Write a recursive function to print binary of a given decimal number

#include <stdio.h>

void decToBin(int dec);
int main()
{
    int num =7373812;

    decToBin(num);
    return 0;
}

void decToBin(int dec)
{
    if(dec==0)return;
    decToBin(dec/2);
    printf("%d",dec%2);
}
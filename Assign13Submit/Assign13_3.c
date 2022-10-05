// Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// More on Recursion in C Language

// 3. Write a recursive function to calculate sum of first N odd natural numbers

int addOdd(int n);
#include <stdio.h>

int main()
{
    printf("%d \n", addOdd(10));
    return 0;
}

int addOdd(int n)
{
    if (n < 1)
        return n;
    return (n * 2 - 1) + addOdd(n - 1);
}
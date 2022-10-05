// Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// More on Recursion in C Language

// 4. Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>

int sumSqrs(int n);
int main()
{
    printf("%d", sumSqrs(4));
    return 0;
}

int sumSqrs(int n)
{
    if (n < 1)
        return n;
    return n * n + sumSqrs(n - 1);
}
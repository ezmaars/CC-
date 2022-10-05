// Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// More on Recursion in C Language
// 1. Write a recursive function to calculate sum of first N natural numbers

#include <stdio.h>

int calcSum(int);
int main()
{
    printf("%d \n", calcSum(2));
    return 0;
}
int calcSum(int n)
{
    if (n < 1)
        return n;
    return n + calcSum(n - 1);
}
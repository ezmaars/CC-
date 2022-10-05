// Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// More on Recursion in C Language
// 8. Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>

void printFibTerms(int n);
int fibTerm(int);
int main()
{
    printFibTerms(10);
    return 0;
}

void printFibTerms(int n)
{

    for (int i = 0; i < n; i++)
        printf("%d ", fibTerm(i));
}

int fibTerm(int n)
{
    if (n == 0 || n == 1)
        return n;
    return (fibTerm(n - 1) + fibTerm(n - 2));
}

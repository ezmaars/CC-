// 7. Write a function to print first N terms of Fibonacci series (TSRN)

#include <stdio.h>

void printFibTerms(int n);
int main()
{
    printFibTerms(2);
    return 0;
}

void printFibTerms(int n)
{
    int fib1 = -1;
    int fib2 = 1;
    int fib = 0;
  
        for (int i = 0; i < n; i++)
        {
                fib = fib1 + fib2;
                printf("%d ",fib);
                fib1=fib2;
                fib2=fib;
    }
}
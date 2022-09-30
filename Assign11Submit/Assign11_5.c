// 5. Write a function to print first N prime numbers (TSRN)

#include <stdio.h>

int isPrime(int num);
int nextPrime(int num);
void printPrimeN(int count);

int main()
{
    printPrimeN(10);
    return 0;
}

void printPrimeN(int count)
{
    for (int i = 0, k = 0; k < count; i = nextPrime(i), k++)
        printf("%d ", nextPrime(i));
}

int nextPrime(int num)
{
    for (int i = num + 1;; i++)
    {
        if (isPrime(i))
            return i;
    }
}

int isPrime(int num)
{
    if (num < 2)
        return 0;
    if (num == 2)
        return 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
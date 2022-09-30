// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include <stdio.h>
int isPrime(int num);
int nextPrime(int num);
void printPrimeInRange(int start, int end);
int main()
{   
    int start = 0;
    int end =0;

    printPrimeInRange(4,6);
    return 0;
}

void printPrimeInRange(int start, int end){

    while(nextPrime(start)<end){
            printf("%d ",nextPrime(start));
            start=nextPrime(start);
    }
    
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
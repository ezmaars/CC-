/// 4. Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>

int isPrime(int num);
int nextPrime(int num);
int main()
{

    // int num = 0;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // printf("Next prime: %d",nextPrime(num));
    

    for(int i=0, k=0;k<10;i=nextPrime(i),k++)   
        printf("%d ",nextPrime(i));
    
    return 0;

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
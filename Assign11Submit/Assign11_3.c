// 3. Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>

int isPrime(int num);
int main()
{
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d", isPrime(num));
    return 0;
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

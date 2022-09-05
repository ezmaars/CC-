#include<stdio.h>
// 8. Write a program to check whether a given number is a Prime number or
//not

int main() {

    int num, isPrime = 1;//
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    // assign 0 for non-prime number
    if (num == 0 || num == 1)
        isPrime = 0;

    for (int i = 2; i <= num / 2; ++i) {

    
        // assign 0 to isPrime for non-prime number
        if (num % i == 0) {
        isPrime = 0;
        break;
        }
    }

    if (isPrime)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);
return 0;
}
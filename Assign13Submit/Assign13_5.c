// Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// More on Recursion in C Language
// 5. Write a recursive function to calculate sum of digits of a given number

#include <stdio.h>

int calDigSum(int);
int main()
{
    printf("%d ", calDigSum(12));
    return 0;
}

int calDigSum(int digit)
{

    if (digit == 0)
        return digit;
    return (digit % 10) + calDigSum(digit / 10);
}
// Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// More on Recursion in C Language
// 10. Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>

int calPow(int base, int power);
int main()
{
    printf("%d", calPow(3, 3));
    return 0;
}
int calPow(int base, int power)
{

    if (power == 0)
        return 1;
    return base * calPow(base, power - 1);
}

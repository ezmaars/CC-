// Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// More on Recursion in C Language

// 9. Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>
#include <limits.h>
int countDigit(unsigned long long);
int main()
{

printf("Total Digits: %d ",countDigit(0));
return 0;
}

int countDigit(unsigned long long digit)
{
    int count =0;
    if(digit==0){return 0;}
    count++;
    count+=countDigit(digit/10);
    return count;
}

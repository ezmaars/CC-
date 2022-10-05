// Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// More on Recursion in C Language

// 6. Write a recursive function to calculate factorial of a given number


#include <stdio.h>

unsigned long long factRecu(int);
int main()
{
    printf("%llu \n",factRecu(20));
return 0;
}

unsigned long long factRecu(int n)
{
    if(n==0||n==1)return 1;
    return n*factRecu(n-1);
}
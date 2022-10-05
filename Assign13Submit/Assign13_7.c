// Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// More on Recursion in C Language

// 7. Write a recursive function to calculate HCF of two numbers
int calHCF(int,int);
#include <stdio.h>

int main()
{


    int hcf=calHCF(11214,2913874 );
    printf("%d\n",hcf);
    return 0;
}

int calHCF(int num1, int num2)
{
    if(num1%num2==0)return num2;
    if(num2%num1==0)return num1;

    if (num1 > num2)
        calHCF(num1 % num2, num2);
    else
        calHCF(num1, num2 % num1);
}
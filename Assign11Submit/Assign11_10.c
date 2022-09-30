
// 10. Write a program in C to find the sum of the series
// 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function.

#include <stdio.h>

double findSeqSum(int n);
int fact(int n);

int main()
{
    
    printf("%.2lf \n",findSeqSum(5));
    return 0;
}

double findSeqSum(int n)
{
    double seqSum = 0;
    for (int i = 1; i <= n; i++)
    {
        seqSum+=fact(i)/i;
    }
    return seqSum;
}
int fact(int n)
{
    int f = 1;
    if (n == 0 || n == 1)
        return 1;
    for (int i = 2; i <= n; i++)
        f = f * i;

    return f;
}
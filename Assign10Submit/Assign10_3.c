// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
#include <stdio.h>


int checkOddEven(int n);
int main()
{

    printf("%d",checkOddEven(37));
}
int checkOddEven(int n)
{
    return (n%2)?0:1;
}
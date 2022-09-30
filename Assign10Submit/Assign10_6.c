// 6. Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>

int fact(int n);

int main()
{

    printf("%d", fact(2));
    return 0;
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
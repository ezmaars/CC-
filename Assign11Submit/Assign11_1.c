// 1. Write a function to calculate LCM of two numbers. (TSRS)

#include <stdio.h>
int calLCM(int num1, int num2);
int main()
{
    int num1 = 18, num2 = 24;
    printf("%d", calLCM(num1, num2));
    return 0;
}

int calLCM(int n1, int n2)
{
    int lcm = 0;
    int max = (n1 > n2) ? n1 : n2;
    for (int i = max; i <= n1 * n2; i++)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            lcm = i;
            break;
        }
    }

    return lcm;
}
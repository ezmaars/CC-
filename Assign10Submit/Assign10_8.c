// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS) :permutation
#include <stdio.h>

int arSel(int n, int r);
int fact(int n);
int main()
{
    printf("%d",arSel(3,3));

    return 0;
}    

int arSel(int n, int r)
{
    if(r>n) return 0;
    return fact(n) / fact(n - r);
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
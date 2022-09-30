// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS) n!/r!(n−r)! : combinations
#include <stdio.h>

int combSel(int n, int r);
int fact(int n);
int main()
{
    printf("%d",combSel(9,9));

    return 0;
}    

int combSel(int n, int r)
{
    if(r>n) return 0;
    return fact(n) / (fact(r) * fact(n - r));
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
// 8. Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>
int combSel(int c, int r);
int fact(int n);
void pascalTri(int);
int main()
{

    pascalTri(9);

    return 0;
}
void pascalTri(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0, k = 0; j < n; j++)
        {
            if (j < n - 1 - i)
            {
                printf("  ");
                continue;
            }
            printf("%4d", combSel(i, k++));
        }
        printf("\n");
    }
}
int combSel(int n, int r)
{
    if (r > n)
        return 0;
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
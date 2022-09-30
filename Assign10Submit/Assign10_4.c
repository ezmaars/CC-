// 4. Write a function to print first N natural numbers (TSRN)

#include <stdio.h>
void printNNumber(int n);
int main()
{

    printNNumber(10);
    return 0;
}

void printNNumber(int n)
{
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
}

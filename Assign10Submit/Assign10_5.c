// 5. Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>

void printOddNums(int oddNums);
int main()
{
    printOddNums(5);
    return 0;
}

void printOddNums(int oddNums)
{

    for (int i = 1; i <= oddNums; i++)
        printf("%d ", i * 2 - 1);
}
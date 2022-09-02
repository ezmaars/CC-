#include <stdio.h>

//4. Write a program to check whether a given number is an even number or an odd
//number without using % operator.
int main()
{
    int num =1;

    (num&1)?printf("%d is odd",num):printf("%d is even",num);

    return 0;
}

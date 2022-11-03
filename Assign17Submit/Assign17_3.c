// Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String Basics in C Language

// 3. Write a program to count vowels in a given string
#include <stdio.h>

int countVow(char str[]);
int main()
{

    char str []="aaeeuuoo";
    printf("%d\n",countVow(str));
    return 1;
}

int countVow(char str[])
{
    int i=0;
    int vowCount=0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowCount++;
        }
        i++;
    }
    return vowCount;
}
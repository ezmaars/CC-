// Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String Basics in C Language

// 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>

int countChar(char str[], char c);
int main()
{
    char str[] = "Hello World";
    printf("%d", countChar(str, 'o'));
    return 1;
}

int countChar(char str[], char c)
{
    int charCount = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            charCount++;
        i++;
    }
    return charCount;
}
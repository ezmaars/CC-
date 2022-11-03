// Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String Basics in C Language

// 8. Write a program in C to copy one string to another string.

void strCopy(char s1[], char s2[]);
#include <stdio.h>

int main()
{
    char str[] = "Hello World!";
    char s2[20]={'0'};
    strCopy(str, s2);
    printf("%s\n", s2);
    return 0;
}

void strCopy(char s1Source[], char s2Des[])
{
    int i = 0;
    while (s1Source[i] != '\0')
    {
        s2Des[i] = s1Source[i];
        i++;
    }
    s2Des[i] = '\0';
}
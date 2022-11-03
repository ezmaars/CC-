// Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String Basics in C Language

// 4. Write a program to convert a given string into uppercase
#include <stdio.h>

char *toUpCase(char str[]);
char *toLowCase(char str[]);
int main()
{
    char str[] = "this is all small case";

    printf("%s\n", toUpCase(str));
    printf("%s\n", str);
    toLowCase(str);
    printf("%s\n", str);
    
    return 0;
}

char *toUpCase(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return str;
}
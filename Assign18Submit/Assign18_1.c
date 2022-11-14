// Assignment - 18 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String and Functions in C Language

// 1. Write a function to calculate length of the string

int strLen(char str[]);
#include <stdio.h>

int main()
{
    char str[] = "This string is 28 char long.";

    printf("\n%d",printf(str));
    printf("\nStr len: %d\n",strLen(str));
   
    return 0;
}

int strLen(char str[])
{
    int i=0;
    
    while (str[i]!='\0')
        i++;
    return i;
    
}

// Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String Basics in C Language


// 1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>

int strLen(char str[] );

int main ()
{

    char str[] = "This string is 28 char long.";

    printf("%s\n",str);
    printf("Str len: %d\n",strLen(str));
    return 1;
}


int strLen(char str[])
{
    int i=0;
    
    while (str[i]!='\0')
        i++;
    return i;
    
}

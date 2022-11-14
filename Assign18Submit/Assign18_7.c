// Assignment - 18 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String and Functions in C Language
// 7. Write a function to check whether a given string is palindrome or not.

int strLen(char str[]);
int isPalindrome(char ch[]);
#include <stdio.h>

int main()
{
    char ch[] = "NITUN";

    printf("%d\n", isPalindrome(ch));
    return 0;
}
// return 1 if passed string is palindrome else return 0
int isPalindrome(char ch[])
{
    int j = strLen(ch) - 1;
    if(j==0)return 1;

    int i = 0;
    while (i < j)
    {
        if (ch[i++] != ch[j--])
            return 0;
    }
    return 1;
}

int strLen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}
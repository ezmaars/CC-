// Assignment - 18 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String and Functions in C Language
// 8. Write a function to count words in a given string

#include <stdio.h>
int wrdCount(char ch[]);
int main()
{

    char ch[] = "One Two Three Four Five Six";
    printf("Word Count: %d", wrdCount(ch));
    return 0;
}
int wrdCount(char ch[])
{
    int wordCount = 0;
    int i = 0;
    int space = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] == ' ' && ch[i + 1] != ' ')
        {
            wordCount++;
        }
        i++;
    }
    return wordCount+1;
}
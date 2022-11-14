// Assignment - 18 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String and Functions in C Language
// 10. Write a function to find the repeated character in a given string.
// this is same like frequecy program
#include <stdio.h>
void countFreq(char ch[]);
int main()
{
    char str[] = "Helllllllo how are you where are you";
    countFreq(str);
    return 0;
}

void countFreq(char ch[])
{
    char freqCount[95] = {0}; // add 1 to size to account for 0
    int i = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] >= ' ' && ch[i] < 127)
            freqCount[ch[i] - 32]++;
        i++;
    }

    for (int i = 0; i < 95; i++)
        if (freqCount[i] > 1)
            printf("char  %c: %d\n", i + 32, freqCount[i]);
}
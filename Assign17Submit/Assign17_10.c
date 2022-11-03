// Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String Basics in C Language

// 10. Write a program in C to Find the Frequency of Characters.
#include <stdio.h>

void charFreq(char num[]);
int strLen(char str[]);
int main ()
{
    char str []= "Moosa Mansoori";
    charFreq(str);
    return 0;

}

int strLen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}
void charFreq(char str[])
{
    int size=strLen(str);

    int freqCount[127] = {0};//add 1 to size to account for 0

    for (int i = 0; i <size ; i++)
        {
            if(str[i]>=32 &&str[i]<=126)
            {
                freqCount[str[i]]++;
            }
        }

    for (int i = 32; i < 127; i++)
        if (freqCount[i]>0)
            printf("Char  %c: %d\n", i, freqCount[i]);
}


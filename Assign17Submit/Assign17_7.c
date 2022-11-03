// Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String Basics in C Language

// 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.
#include <stdio.h>

int strLen(char str[]);
void countANE(char str[]);
int main()
{
    char str []= "1!2`H~^&(hello";
   char st[] = "Hello";
   countANE(str);
    return 1;
}

void countANE(char str[])
{
    int strSize = strLen(str);
    int numCount =0;
    int chCount =0;
    int exCount =0;
    for (int i = 0; i < strSize; i++)
    {
        // if (str[i] >= 32 && str[i] <= 47 ||
        //     str[i] >= 58 && str[i] <= 64 ||
        //     str[i] >= 91 && str[i] <= 96 ||
        //     str[i] >= 123 && str[i] <= 126)
        // {
        //     exCount++;
        //     // printf("%c is Special char\n",str[i]);
        // }
        if (str[i] >= 65 && str[i] <= 90 ||
                 str[i] >= 97 && str[i] <= 122)
        {
            // printf("%c is Letter\n",str[i]);
            chCount++;
        }
        else if(str[i] >= 48 && str[i] <= 57)
        {
            // printf("%c is a number\n",str[i]);
            numCount++;
        }
        else{
            exCount++;
        }
    }
    printf("Num Count: %d, Char Count: %d, Special Char Count: %d\n",numCount,chCount,exCount);
}
int strLen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

// Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String Basics in C Language

// 9. Write a C program to sort a string array in ascending order.
#include <stdio.h>

void selSort(char str[]);
int strLen(char str[]);
int main ()
{
    char str [] = "dkjflkasjAAfeoiuflskfioerulasdkjf";
    printf("%s \n",str);
    selSort(str);
    printf("%s \n",str);

    return 0;
}


void selSort(char str[])
{
    // int size= *(&str + 1) - str;
    int minIdx = 0;
    char temp = ' ';
    int size=strLen(str);
    for (int i = 0; i < size; i++)
    {
        minIdx = i;
        for (int j = i; j < size - 1; j++)
        {
            if (str[minIdx] > str[j+1])
                minIdx = j+1;                  
        }
        temp =str[i];
        str[i]=str[minIdx];
        str[minIdx]=temp;
    }
}
int strLen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}
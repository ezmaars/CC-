// Assignment - 18 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String and Functions in C Language

// 3. Write a function to compare two strings.

#include <stdio.h>
int strCompare(char str1[], char str2[]);
int strLen(char str[]);
int main()
{

    char s1[] ="abcde";
    char s2[] ="abcd";
    
    printf("\nstr cmp result: %d \n",strCompare(s1,s2));
    //printf("%d \n",strLen(str2));
    return 0;
}

int strCompare(char str1[], char str2[])
{
    
    int i=0, j =0, eqStr=0;
    
    while (str1[i]!='\0')
    {
            
        if(str1[i]>str2[i])
        {
            

            return 1;
        }
        else if(str1[i]<str2[i]) return -1;

    i++;
    }
    return 0;
}
int strLen(char str[])
{
    int i=0;
    
    while (str[i]!='\0')
        i++;
    return i;
    
}

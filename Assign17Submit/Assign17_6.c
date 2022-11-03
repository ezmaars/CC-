// Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String Basics in C Language



// 6. Write a program to reverse a string.
#include <stdio.h>

int strLen(char str[]);
void revString(char str[]);
int main ()
{  
    char str[]="1234";
    revString(str);
    printf("%s",str);
    return 1;
}
void revString(char str[])
{
    int strSize=0;
    char temp=' ';
    strSize=strLen(str);
    int i=0;
    
    while(i<=strSize-1)
    {   
            temp=str[strSize-1];
            str[strSize-1]=str[i];
            str[i]=temp;
            i++;
            strSize--;
    }
}
int strLen(char str[])
{
    int i=0;
    
    while (str[i]!='\0')
        i++;
    return i;
    
}
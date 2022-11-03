// Assignment - 17 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String Basics in C Language


// 5. Write a program to convert a given string into lowercase

#include <stdio.h>
char * toLowCase(char str[]);

int main ()
{
    char str[] ="This is SMALL String";

    printf("%s\n",toLowCase(str));
    return 1;
}
char * toLowCase(char str[])
{
    int i=0;
        while(str[i]!='\0')
        {
            if(str[i]>='A'&&str[i]<='Z')
                str[i]=str[i]+32;
            i++;
        }
    return str;
}
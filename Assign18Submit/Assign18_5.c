// Assignment - 18 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String and Functions in C Language
// 5. Write a function to transform a string into lowercase

#include <stdio.h>

void toLowCase(char str[]);

int main ()
{
    char str[] ="This is SMALL String";
    toLowCase(str);
    printf("%s\n",str);
    return 1;
}
void toLowCase(char str[])
{
    int i=0;
        while(str[i]!='\0')
        {
            if(str[i]>='A'&&str[i]<='Z')
                str[i]=str[i]+32;
            i++;
        }
}


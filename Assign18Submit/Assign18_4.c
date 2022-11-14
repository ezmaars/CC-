// Assignment - 18 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String and Functions in C Language
// 4. Write a function to transform string into uppercase

#include <stdio.h>
void toUpCase(char str[]);

int main()
{
    char str[] = "this is all uppercase case";

    toUpCase(str);
    printf("%s\n", str);
  
    
    return 0;
}

void toUpCase(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
}


// Assignment - 18 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String and Functions in C Language
// 6. Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)
int isAlphaNum(char str[]);
#include <stdio.h>

int main()
{
    int i = isAlphaNum("h1121g212");

    printf("\n%d\n", i);
    return 0;
}
//returns 1 if alpha Numeric else return 0; 
int isAlphaNum(char str[])
{
    int i = 0;
    int alpha = 0;
    int num = 0;
    while (str[i])
    {
        // this is test for alpha
        if (str[i] >= 'A' && str[i] <= 'Z' ||
            str[i] >= 'a' && str[i] <= 'z')
        {
            alpha = 1;
        } // this is test for num
        else if (str[i] >= '0' && str[i] <= '9')
        {
            num = 1;
        }
        //if alphanum found early return 1 
        if (alpha & num)
            return 1;
        i++;
    }
    return alpha & num;
}

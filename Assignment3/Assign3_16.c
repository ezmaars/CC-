#include <stdio.h>

// 16. Write a program to check whether a given character is an 
//alphabet (uppercase), an alphabet (lower case), a digit or a 
//special character.

int main(){
    
    char ch;
    printf("Enter a char: ");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z') 
        printf("\n%c is uppercase ",ch);
    else if(ch>='a'&& ch<='z') 
        printf("\n%c is lowercase ",ch);
    else if(ch>='0'&& ch<='9') 
        printf("Digit");
    else printf("special character");
}
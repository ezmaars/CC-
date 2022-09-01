#include <stdio.h>
//6. Write a program which takes a character as 
//an input and displays its ASCII code.
int main(){

    int ch ='A';
    printf("\nEnter a character: ");
    scanf("%c",&ch);
    printf("\nASCII code for \'%c\' is %d",ch,ch);
    return 0;
}
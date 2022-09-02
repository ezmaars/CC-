#include <stdio.h>
//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
int main(){
    
    char ch;
    printf("Enter a char: ");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z') {printf("\n%c is uppercase ",ch);}
    else if(ch>='a'&& ch<='z') {printf("\n%c is lowercase ",ch);}
    
return 0;

}
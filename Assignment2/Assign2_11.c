#include <stdio.h>

//11. Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
int main(){

    int addDigit=0;
    int numberAdd=0;
    printf("\nEnter a number :");
    scanf("%d",&numberAdd);
    printf("\nEnter a digit to append :");
    scanf("%d",&addDigit);
    numberAdd=numberAdd*10+addDigit;
    printf("Number after append: %d",numberAdd);
    return 0;
}
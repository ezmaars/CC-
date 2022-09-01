#include <stdio.h>
//5. Write a program to input a three-digit 
//number and display the sum of the digits.
int main(){
    int digit;
    
    printf("\nEnter a three digit number: ");
    scanf("%d",&digit);
    int sDigit = digit%10;//extracting last digit
    int dSum=0;
    dSum=dSum+sDigit;//adding last digit

    digit=digit/10;//removing last digit
    sDigit = digit%10;//extracting last digit
    dSum=dSum+sDigit;//adding last digit

    digit=digit/10;//removing last digit
    sDigit = digit%10;//extracting last digit
    dSum=dSum+sDigit;//adding last digitc
    printf("\nSum of digits: %d",dSum);

    return 0;
}
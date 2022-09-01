#include <stdio.h>

int main(){
//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD.
    printf("\nQ12");
    double usdToInrRate =76.23;
    double inrAmount =0;
    printf("\nPlease enter Amount in INR: ");
    scanf("%lf",&inrAmount);
    printf("\nINR to USD amount $%.2lf",inrAmount/usdToInrRate);
    return 0;
}
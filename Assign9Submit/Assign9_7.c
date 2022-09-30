// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include <stdio.h>
double UPTO50 = 0.50;
double ABV50 =.75;
double ABV150 = 1.2;
double ABV250 = 1.5;
double SURCHARG =1.2;
int main()
{

    int billUnit = 0;
    double totalBill =0;
    printf("\nEnter the Bill unit: ");
    scanf("%d",&billUnit);
    switch (billUnit)
    {
    case 0:
        break;
    case 1 ... 50:
        totalBill =billUnit*UPTO50;
        break;
    case 51 ... 150:
         totalBill= 50*UPTO50+(billUnit-50)*ABV50;        
        break;
    case 151 ... 250:
        totalBill =50*UPTO50 + (100*ABV50)+(billUnit-150)*ABV150;
        break;  
    default:
        totalBill = 50*UPTO50 + (100*ABV50)+(100*ABV150)+(billUnit-250)*ABV250;
        break;
    }
    printf("\n%d Units, Total Bill : Rs %.2lf\n",billUnit,totalBill*SURCHARG);
    return 0;

}
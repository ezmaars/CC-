
/*
4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area 
& R with radius.
*/
#include <stdio.h>

int main(){
double r =0;
    double circA=0;
    printf("Enter the radius of the Circle: \n");
    scanf("%lf",&r);
    circA=3.14*r*r;
    printf("Area of Circle with r=%.2lf: %.2lf",r,circA);
}
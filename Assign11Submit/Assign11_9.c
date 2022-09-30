// 9. Write a program in C to find the square of any number using the function.

#include <stdio.h>
double findSquare(double num);
int main ()
{
    double num=0;
    printf("Enter a number: ");
    scanf("%lf",&num);
    printf("%.2lf",findSquare(num));
    return 0;
}

double findSquare(double num){
    return num*num;
}
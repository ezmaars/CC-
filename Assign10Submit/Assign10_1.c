// Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>


double circArea(double r);
int main()
{   double r=0;
    r=54;
    printf("Area of Circle with radius %.2lf : %.2lf",r,circArea(r));
    return 0;
}

double circArea(double r)
{   

    return 3.14*r*r;
}
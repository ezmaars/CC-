#include <stdio.h>
//7. Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots
//ax^2+ b+c =0
//D = b^2-4ac;
//D>0
//D==0
//D<0
int main()
{
int a=3, b=50, c=2;
int disc=0; 
printf("Enter the value of a, b and c: ");
scanf("%d %d %d",&a,&b,&c);
disc = b*b-4*a*c;
if (disc>0)
    printf("Real & Distinct");
else if(disc<0)
    printf("imaginary");
else 
    printf("Real and Equal!");
return 0;

}
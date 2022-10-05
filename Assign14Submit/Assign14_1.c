// Assignment - 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG

// Array in C Language

// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.


#include <stdio.h>

void takeNums(double[],int);
double sumArray(double[],int);

int main()
{
    double nums[10]={0};
    printf("Enter 10 numbers: ");
    takeNums(nums,10);
    printf("%.2lf",sumArray(nums,10));
    return 0;
}

void takeNums(double nums[],int size)
{   
    for (int i=0;i<size;i++)
        scanf("%lf",&nums[i]);
}
double sumArray(double nums [], int size)
{
    double sum=0;
    for (int i=0;i<size;i++)
        sum+=nums[i];
    return  sum;
}

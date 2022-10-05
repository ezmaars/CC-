// Assignment - 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG

// Array in C Language
// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.

#include <stdio.h>

void takeNums(double[],int);
double sumArray(double[],int);
double avgArray(double[],int);

int main()
{
    double nums[10]={0};
    printf("Enter 10 numbers: ");
    takeNums(nums,10);
    printf("Sum: %.2lf\n",sumArray(nums,10));
    printf("Avg: %.2lf\n",avgArray(nums,10));
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
double avgArray(double nums [],int size)
{
    return sumArray(nums,size)/size;
}
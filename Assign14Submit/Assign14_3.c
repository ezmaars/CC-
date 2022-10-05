// Assignment - 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG

// Array in C Language

// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.


#include <stdio.h>

void takeNums(int[],int);
void sumEvenOddArray(int[],int);

int main()
{
    int nums[10]={0};
    printf("Enter 10 numbers: ");
    takeNums(nums,10);
    sumEvenOddArray(nums,10);
    return 0;
}

void takeNums(int nums[],int size)
{   fflush(stdin);
    for (int i=0;i<size;i++)
        scanf("%d",&nums[i]);
}
void sumEvenOddArray(int nums [], int size)
{
    int sumE=0;
    int sumO=0;
    
    for (int i=0;i<size;i++)
    {   
        if(nums[i]%2)
        {
            
            sumO+=nums[i];
        }else
        {sumE+=nums[i];}
    }
    printf("Even Sum %d: Odd Sum: %d",sumE,sumO);
    
}
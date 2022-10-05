// Assignment - 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG

// Array in C Language

// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.

#include <stdio.h>

void takeNums(int[],int);
int findMin(int[],int);

int main()
{
    int nums[10]={0};
    printf("Enter 10 numbers: ");
    takeNums(nums,10);
    printf("%d",findMin(nums,10));
    return 0;
}

void takeNums(int nums[],int size)
{   
    for (int i=0;i<size;i++)
        scanf("%d",&nums[i]);
}
int findMin(int nums [], int size)
{
    int min=nums[0];

    for (int i=1;i<size;i++)
        if(nums[i]<min)
            min=nums[i];
    return  min;
}

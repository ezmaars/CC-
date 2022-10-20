// Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Array and Functions in C Language

// 2. Write a function to find the smallest number from the given array of any size. (TSRS)


#include<stdio.h>

int findMin(int nums [],int size);
int main()
{
    int nums[10] = {8, 9, 10, 2, 3, 4, 5, 1, 6, 7};
    printf("%d ",findMin(nums,10));
    return 0;
}
int findMin(int nums[], int size)
{
    int min = nums[0];

    for (int i = 1; i < size; i++)
        if (nums[i] < min)
            min = nums[i];

    return min;
}
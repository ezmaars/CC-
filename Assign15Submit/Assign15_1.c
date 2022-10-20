// Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Array and Functions in C Language
// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include <stdio.h>

void sort(int nums[], int size);
int findMax(int nums[], int size);
void printArray(int nums[], int size);
void selSort(int nums[], int size);
int main()
{

    int nums[10] = {8, 9, 10, 2, 3, 4, 5, 1, 6, -2828};
    // printf("%d",findMax(nums,10));
    printArray(nums, 10);
    selSort(nums, 10);
    printf("\n");
    printArray(nums, 10);
    return 0;
}

void sort(int nums[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
int findMax(int nums[], int size)
{
    int max = nums[0];

    for (int i = 1; i < size; i++)
        if (nums[i] > max)
            max = nums[i];

    return max;
}
void printArray(int nums[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
}
void selSort(int nums[], int size)
{
    int minIdx = 0;
    int temp = 0;
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        minIdx = i;
        for (int j = i; j < size - 1; j++)
        {
            if (nums[minIdx] > nums[j+1])
                minIdx = j+1;                  
        }
        temp =nums[i];
        nums[i]=nums[minIdx];
        nums[minIdx]=temp;
    }
}
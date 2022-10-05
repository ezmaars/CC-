// Assignment - 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG

// Array in C Language

// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.

#include <stdio.h>
void copyArry(int source[], int dest[], int size);
void takeNums(int[], int size);
void printArray(int nums[], int size);
int main()
{
    int nums[10] = {1, 3, 23, 18, 252, 221, 331, 22, 4, 0};
    int dest[10]={0};
    printf("Enter 10 numbers: ");
    takeNums(nums, 10);
    copyArry(nums,dest,10);
    printArray(nums,10);
    printf("\n");
    printArray(dest,10);
    return 0;
}

void takeNums(int nums[], int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", &nums[i]);
}

void printArray(int nums[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", nums[i]);
    }
}

void copyArry(int source[], int dest[], int size)
{

    for (int i = size - 1; i >= 0; i--)
    {
        dest[i] = source[i];
    }
}
// Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Array and Functions in C Language

// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.
#include <stdio.h>

void inputNum(int nums[], int size);
void selSort(int nums[], int size);
void printArray(int nums[], int size);
int main()
{
    int nums[10] = {0};
    int size = sizeof(nums) / sizeof(nums[0]);
    inputNum(nums, size);
    selSort(nums, size);
    printArray(nums, size);

    return 0;
}
void inputNum(int nums[],int size)
{
    printf("Enter %d numbers: \n" ,size);
    for (int i = 0; i < size; i++)    
    scanf("%d",&nums[i]);
}
void selSort(int nums[], int size)
{
    // int size= *(&nums + 1) - nums;
    int minIdx = 0;
    int temp = 0;
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        minIdx = i;
        for (int j = i; j < size - 1; j++)
        {
            if (nums[minIdx] > nums[j + 1])
                minIdx = j + 1;
        }
        temp = nums[i];
        nums[i] = nums[minIdx];
        nums[minIdx] = temp;
    }
}
void printArray(int nums[], int size)
{

    for (int i = size-1; i >=0; i--)
    {
        printf("%d ", nums[i]);
    }
}
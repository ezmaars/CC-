// Assignment - 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG

// Array in C Language

// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

#include <stdio.h>

void takeNums(int[], int);
void sortNums(int arry[], int size);
void printArray(int nums[], int size);
void dispRev(int nums[], int size);
int main()
{
    int nums[10] = {1, 3, 23, 18, 252, 221, 331, 22, 4, 0};
     printf("Enter 10 numbers: ");
    takeNums(nums,10);

    dispRev(nums, 10);

    return 0;
}

void takeNums(int nums[], int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", &nums[i]);
}

void printArray(int nums[], int size)
{
}
void sortNums(int arry[], int size)
{

    int cur = 0, isSort = 1;
    for (int i = 0; i < 10 - 1; i++)
    {
        if (arry[i] > arry[i + 1])
        {
            cur = arry[i];
            arry[i] = arry[i + 1];
            arry[i + 1] = cur;
            isSort = 0;
        }
        if (i == size - 2 && isSort == 0)
        {
            i = -1;
            isSort = 1;
            continue;
        }
    }
}

void dispRev(int nums[], int size)
{
    sortNums(nums, size);
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", nums[i]);
    }
}
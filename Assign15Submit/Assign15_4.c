// Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Array and Functions in C Language

// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include <stdio.h>

void rotArr(int nums[], int size, int d, int rotBy);
void printArray(int nums[], int size);
int main()
{
    const int LEFT = 0;
    const int RIGHT = 1;
    int temp, pos = 2;
    int size = 9;
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printArray(num, size);

    rotArr(num, size, LEFT, 2);
    printf("\n");
    printArray(num, size);
    return 0;
}

void printArray(int nums[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
}

void rotArr(int num[], int size, int dir, int shft)
{
    int temp = 0;
    while (shft)
    {
        // if dir!=0 then shift right else shift left
        if (dir)
        {
            temp = num[size - 1];
            for (int i = size - 1; i > 0; i--)
            {
                num[i] = num[i - 1];
            }
            num[0] = temp;
        }
        else
        {
            temp = num[0];
            for (int i = 0; i < size - 1; i++)
            {
                num[i] = num[i + 1];
            }
            num[size - 1] = temp;
        }
        shft--;
    }
}
// Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Array and Functions in C Language

// 10. Write a function in C to count the frequency of each element of an array

#include <stdio.h>
// void showNumFreq(int nums[], int size);
// void selSort(int nums[], int size, int sortBy);
void printArray(int nums[], int size);
void countFreq(int num[], int size);

int main()
{
    int nums[] = {3, 9, 6, 8, 5, 7, 2, 3, 4, 5};
    int size = 10;
    // selSort(nums,size,1);
    printArray(nums, size);
    printf("\n");
    countFreq(nums, size);

    return 0;
}

void countFreq(int num[], int size)
{
    int freqCount[11] = {0};//add 1 to size to account for 0

    for (int i = 0; i < size; i++)
        freqCount[num[i]]++;
    for (int i = 0; i < 11; i++)
        if (freqCount[i]>0)
            printf("Num  %d: %d\n", i, freqCount[i]);
}
void printArray(int nums[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
}
// void showNumFreq(int nums[], int size)
// {
//     int num = 0;
//     int freq = 0;
//     int dupCount = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (freq > 1)
//         {
//             i += freq - 1;
//             num = nums[i];
//         }
//         else
//         {
//             num = nums[i];
//         }
//         freq = 0;
//         for (int j = i; j < size; j++)
//         {
//             if (nums[i] == nums[j])
//                 freq++;
//             else
//                 break;
//         }
//         if (i < size)
//         {
//             printf("Num: %d, Freq %d \n", num, freq);
//             if (freq > 1)
//                 dupCount++;
//         }
//     }
//     printf("\nDuplicate count: %d", dupCount);
// }

// void selSort(int nums[], int size, int sortBy)
// {

//     int minIdx = 0;
//     int maxIdx = 0;
//     int temp = 0;
//     switch (sortBy)
//     {
//     case 1:
//         for (int i = 0; i < size; i++)
//         {
//             maxIdx = i;
//             for (int j = i; j < size - 1; j++)
//             {
//                 if (nums[maxIdx] > nums[j + 1])
//                     maxIdx = j + 1;
//             }
//             temp = nums[i];
//             nums[i] = nums[maxIdx];
//             nums[maxIdx] = temp;
//         }
//         break;
//     default:
//         for (int i = 0; i < size; i++)
//         {
//             minIdx = i;
//             for (int j = i; j < size - 1; j++)
//             {
//                 if (nums[minIdx] < nums[j + 1])
//                     minIdx = j + 1;
//             }
//             temp = nums[i];
//             nums[i] = nums[minIdx];
//             nums[minIdx] = temp;
//         }
//         break;
//     }
// }
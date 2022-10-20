// Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Array and Functions in C Language
// 3. Write a function to sort an array of any size. (TSRN)
#include<stdio.h>

void selSort(int nums[],int size);
void printArray(int nums[],int size);
void test(int nums[]);
int main()
{
     //simple array
    int arr[] = {19,25,10,3,34,53,234,123,5,3,123,5,45,56,12,767,1234};
    int size=17;
    printArray(arr,size);
    selSort(arr,size);
    printArray(arr,size);
    return 0;
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
    // int size= *(&nums + 1) - nums;
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
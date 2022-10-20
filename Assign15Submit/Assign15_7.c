// Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Array and Functions in C Language

// 7. Write a function in C to count a total number of duplicate elements in an array.

#include<stdio.h>
int dupCount(int nums[], int size);
void selSort(int nums[], int size, int sortBy);
void printArray(int nums[], int size);
int main(){
    int nums[]={3,55,55,55,55,55,55,55,55,55,55,55,55,55,2,2,3,4,4,5,5,6,6};
    int size=23;
    selSort(nums,size,1);
    printArray(nums,size);
    printf("\n");
    printf("Duplicate Elements: %d",dupCount(nums,size));
    return 0;
}


int dupCount(int nums[], int size)
{
    int num=0;
    int freq=0;
    int dupCounter=0;
    for(int i=0;i<size;i++)
    {   
        if(freq>1)
        {    
            i+=freq-1;
            if(i==size)return dupCounter;
            num=nums[i];
        }
        else{num=nums[i];}
        freq=0;
        for(int j=i;j<size;j++)
        {   
            if(nums[i]==nums[j])
                freq++; 
            else break;
        }
            if(freq>1)dupCounter++;
    }
    return dupCounter;
}
void printArray(int nums[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
}
void selSort(int nums[], int size, int sortBy)
{

    int minIdx = 0;
    int maxIdx=0;
    int temp = 0;
    switch (sortBy)
    {
    case 1:
        for (int i = 0; i < size; i++)
        {
            maxIdx = i;
            for (int j = i; j < size - 1; j++)
            {
                if (nums[maxIdx] > nums[j + 1])
                    maxIdx = j + 1;
            }
            temp = nums[i];
            nums[i] = nums[maxIdx];
            nums[maxIdx] = temp;
        }
        break;
    default:
        for (int i = 0; i < size; i++)
        {
            minIdx = i;
            for (int j = i; j < size - 1; j++)
            {
                if (nums[minIdx] < nums[j + 1])
                    minIdx = j + 1;
            }
            temp = nums[i];
            nums[i] = nums[minIdx];
            nums[minIdx] = temp;
        }
        break;
    }

}
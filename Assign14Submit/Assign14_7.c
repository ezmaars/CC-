// Assignment - 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG

// Array in C Language

// 7. Write a program to find second largest in an array.Take array values from the user.


#include <stdio.h>

void takeNums(int[],int);
void sortNums(int arry[],int size);
void printArray(int nums[], int size);
int findSecBigNum(int nums[], int size);
int main()
{
    int nums[10]={1,333,23,1,22,1,1,2332,4,0};
   printf("Enter 10 numbers: ");
    takeNums(nums,10);
    sortNums(nums,10);
    printArray(nums,10);
    printf("\n%d ",findSecBigNum(nums,10));

    return 0;
}

void takeNums(int nums[],int size)
{   
    for (int i=0;i<size;i++)
        scanf("%d",&nums[i]);
}

void printArray(int nums[], int size){

    for (int  i = 0; i < size; i++)
    {
        printf("%d ",nums[i]);
    }
    
}
void sortNums(int arry[],int size)
{
    
    int cur = 0, isSort = 1;
    for (int i = 0; i < 10 - 1; i++)
    {     
        if (arry[i] > arry[i + 1])
        {
            cur = arry[i];
            arry[i] = arry[i + 1];
            arry[i + 1] = cur;
            isSort=0;            
        }
        if (i ==  size -2 && isSort==0)
        {
                i = -1;
                isSort=1;
                continue;
        }
    }
}

int findSecBigNum(int nums[], int size)
{   
    // printf("%d ",nums[size-1]);
    // printf()
    if(size<2) return '\0';
    for(int i=size-2; i>=0;i--)
    {
        
        if(nums[size-1]!=nums[i])
            {
                return nums[i];
            }
    }
}
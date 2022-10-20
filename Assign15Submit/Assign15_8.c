// Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Array and Functions in C Language

// 8. Write a function in C to print all unique elements in an array.
#include <stdio.h>

void printUniq(int nums[], int size);
int main()
{
    int nums [10]= {1,2,3,4,1,6,1,13,9,10};
    int size = sizeof(nums) / sizeof(nums[0]);
    printUniq(nums,10);
    return 0;
}
void printUniq(int nums[], int size)
{
    for(int i=0;i<size;i++)
    {
        int isUnique=1;
        for(int j=0;j<i;j++)
        {
            if(nums[i]==nums[j])
            {
                isUnique=0;
                break;
            }
        }
        if(isUnique){
            printf("%d ",nums[i]);
        }
    }
}

// void printUniq(int nums[], int size)
// {   int isUniq=0;
//     int j=0;
//     for (int i = 0; i < size; i++)
//     {   isUniq=0;
//         for (int j = i; j < size; j++)
//         {
//             if (nums[i]!=nums[j])
//                 isUniq=1;
//             else
//                 isUniq=0;
//         }
//         if(isUniq)
//          printf("%d ",nums[i]);
       
//     }
// }

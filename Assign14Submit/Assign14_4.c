// Assignment - 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG

// Array in C Language

// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.

#include <stdio.h>

void takeNums(int[],int);
int findMax(int[],int);

int main()
{
    int nums[10]={0};
    printf("Enter 10 numbers: ");
    takeNums(nums,10);
    printf("%d",findMax(nums,10));
    return 0;
}

void takeNums(int nums[],int size)
{   
    for (int i=0;i<size;i++)
        scanf("%d",&nums[i]);
}
int findMax(int nums [], int size)
{
    int max=nums[0];
  
    for (int i=1;i<size;i++)
        if(nums[i]>max)
            max=nums[i];
            
    return  max;
}

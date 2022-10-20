// Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Array and Functions in C Language

// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
// Function has to return the value of the element.
#include<stdio.h>

int findAdjDup(int num[],int size);
int main()
{

    int num[] ={1,3,1,4,1};
    int size=sizeof(num)/sizeof(num[0]);
    printf("%d is first adjacent duplicate ",findAdjDup(num,size));

    return 0;
}

int findAdjDup(int num[], int size)
{
    int s = sizeof(num)/sizeof(num[0]);
    printf("%d\n",s);
    for (int i=0;i<size-1;i++)
    {
        if(num[i]==num[i+1])
            return num[i];
    }
    return -1;
}
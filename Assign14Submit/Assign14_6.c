// Assignment - 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG

// Array in C Language

// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.

#include <stdio.h>

void sortNums(int arry[],int size);
void takeNums(int nums[],int size);

int main() { 

    int num[10]={0};

    printf("Enter number: ");
    takeNums(num,10);
    sortNums(num,10);

    printf("Enter\n");

     for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}

// order - 0 asec 1 desc
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

void takeNums(int nums[],int size)
{   
    for (int i=0;i<size;i++)
        scanf("%d",&nums[i]);
}
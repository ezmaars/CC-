// Assignment - 15 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Array and Functions in C Language

// 9. Write a function in C to merge two arrays of the same size sorted in descending
// order.
#include <stdio.h>

void printArray(int nums[],int size);
void mergeArr(int ar1[], int ar2[], int mrgAr3[], int size);
int main()
{
    const int A = 1;
    const int D = 0;

    /// //////////////////////////////////////

    int x[] = {1, 3, 5, 7, 9,16,17,18,44};
    int y[] = {1, 1, 1, 6, 7,8,45,55,78};
    int z[18] = {0};

    mergeArr(x, y, z, 18);
    printArray(z, 18);
    return 0;
}

void mergeArr(int a[], int b[], int c[], int size)
{
    int k = 0, i = 0, j = 0;

    for (k = 0; k < size; k++)
    {
        if (i>=size/2 )
        {
            while (k<size)
            {
                c[k]=b[j];
                j++;
                k++;
                if(k==size)break;
            }
            
        }
        else if(j>=size/2)
            {
                while(k<size)
                {
                    c[k]=a[i];
                    i++;
                    k++;
                    if(k==size)break;
                }
            }
        else if (a[i] < b[j])
            {
                c[k] = a[i];
                i++;
            }
            else
            {
                c[k] = b[j];
                j++;
            }
    }
}

void printArray(int nums[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
}
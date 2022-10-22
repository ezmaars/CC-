// Assignment - 16 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Multi-Dimensional Array in C Language

// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>

int main ()
{

int a[4][4]={0,2,3,4,5,6,7,8,0,0,0,0,0,0,0,0};

    int sparseCount =0;
    for(int i=0;i<4;i++)
    {
        for(int j=0; j<4;j++)
        {
            if(a[i][j]==0)sparseCount++;
        }

    }
    if(sparseCount>=(4*4/2))
        printf("Matrix is Sparse!\n");
    else
        printf("Matrix is Dense!\n");
    return 0;
}
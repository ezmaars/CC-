// Assignment - 16 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Multi-Dimensional Array in C Language

// 7. Write a program in C to print or display the lower triangular of a given matrix.

#include <stdio.h>

int main ()
{

    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    for (int i = 0; i < 4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(j>i)
                printf("%.2d " ,0);
            else
                printf("%.2d ",a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
// Assignment - 16 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Multi-Dimensional Array in C Language

// 6. Write a program in C to find the sum of rows and columns of a Matrix.

#include <stdio.h>

int main ()
{

int a[4][4] = {
        {1, 2, 10, 1}, /*  row indexed by 0 */
        {4, 5, 6, 3},  /*  row indexed by 1 */
        {15, 8, 9, 4},  /*  row indexed by 2 */
        {15, 8, 9, 4},  /*  row indexed by 3 */
    };
    int rowSum=0;
    int size =4;
    int colSum=0;
    printf("\n");
    
     for (int  i = 0; i < size; i++)
    {
        for(int j=0; j<size;j++)
            printf("%.2d ",a[i][j]);
        printf("\n");
    }

    for (int  i = 0; i < size; i++)
    {
        for(int j=0; j<size;j++)
        {
             rowSum+=a[i][j];
             colSum+=a[j][i];
        }
        printf("\nRow %d Sum: %d \n",i+1,rowSum);
        printf("Col %d Sum: %d\n\n",i+1,colSum);
        rowSum=0;
        colSum=0;
    }
    
    return 0;
}
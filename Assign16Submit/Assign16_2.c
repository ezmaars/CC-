// Assignment - 16 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Multi-Dimensional Array in C Language

// 2. Write a program to calculate the product of two matrices each of order 3x3.

#include <stdio.h>

int main()
{

    int a[3][3] = {
        {1, 2, 3}, /*  row indexed by 0 */
        {4, 5, 6}, /*  row indexed by 1 */
        {7, 8, 9}  /*  row indexed by 2 */
    };
    int b[3][3] = {
        {9, 8, 7}, /*  row indexed by 0 */
        {6, 5, 4}, /*  row indexed by 1 */
        {3, 2, 1}  /*  row indexed by 2 */
    };
    int c[3][3] = {0};

    int k = 0;
    while (k < 3)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                c[i][k] += a[i][j] * b[j][k];
        }
        k++;
    } // while end

    printf("\n");
    int j=0;
    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%.2d ", a[i][j]);

        printf("\t");

        for (j = 0; j < 3; j++)
            printf("%.2d ", b[i][j]);

        printf("\t");

        for (j = 0; j < 3; j++)
            printf("%.3d ", c[i][j]);
        printf("\n");
    }
    printf("\n");

    return 0;
}
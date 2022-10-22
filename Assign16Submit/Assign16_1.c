// Assignment - 16 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Multi-Dimensional Array in C Language
// 1. Write a program to calculate the sum of two matrices each of order 3x3.

#include <stdio.h>

int main()
{
    int a[3][3] = {
        {0, 1, 2}, /*  row indexed by 0 */
        {4, 5, 6}, /*  row indexed by 1 */
        {8, 9, 11} /*  row indexed by 2 */
    };
    int b[3][3] = {
        {14, 5, 2}, /*  row indexed by 0 */
        {4, 9, 15}, /*  row indexed by 1 */
        {8, 9, 2}   /*  row indexed by 2 */
    };
    int c[3][3] = {0};
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%.2d ", a[i][j]);

        printf("\t");

        for (int j = 0; j < 3; j++)
            printf("%.2d ", b[i][j]);

        printf("\t");
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%.2d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
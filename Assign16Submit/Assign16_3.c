// Assignment - 16 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Multi-Dimensional Array in C Language

// 3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>

int main()
{

    int a[3][3] = {
        {1, 2, 3}, /*  row indexed by 0 */
        {4, 5, 6}, /*  row indexed by 1 */
        {7, 8, 9}  /*  row indexed by 2 */
    };

    int b[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%.2d ", a[i][j]);
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%.2d ", b[i][j]);
        printf("\n");
    }

return 0;
}
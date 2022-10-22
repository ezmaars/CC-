// Assignment - 16 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Multi-Dimensional Array in C Language

// 5. Write a program in C to find the sum of left diagonals of a matrix.

#include <stdio.h>

int main()
{

    int a[4][4] = {
        {1, 2, 10, 1}, /*  row indexed by 0 */
        {4, 5, 6, 3},  /*  row indexed by 1 */
        {15, 8, 9, 4},  /*  row indexed by 2 */
        {15, 8, 9, 4},  /*  row indexed by 3 */
    };
    int size = 4;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i + j == size - 1)
            {
                sum += a[i][j];
                break;
            }
        }
    }
    printf("%d\n", sum);

    return 0;
}
// Assignment - 16 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Multi-Dimensional Array in C Language

// 4. Write a program in C to find the sum of right diagonals of a matrix.

#include <stdio.h>

int main()
{
    int a[3][3] = {
        {1, 2, 3}, /*  row indexed by 0 */
        {4, 5, 6}, /*  row indexed by 1 */
        {7, 8, 9}  /*  row indexed by 2 */
    };

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
                break;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
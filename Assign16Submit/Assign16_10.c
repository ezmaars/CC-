// Assignment - 16 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Multi-Dimensional Array in C Language

// 10. Write a program in C to find the row with maximum number of 1s

#include <stdio.h>

int main()
{

    int a[4][4] = {
        {1, 2, 3, 4},
        {1, 1, 1, 2},
        {3, 4, 1, 1},
        {1, 1, 1, 1},
    };

    int maxOne = 0;
    int curSum = 0;
    int row = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            if (a[i][j] == 1)
            {
                curSum++;
            }

        if (curSum > maxOne)
        {
            maxOne = curSum;
            row = i;
        }
        curSum = 0;
    }
    printf("Row %d has maximum number of 1s \n", row + 1);
    return 0;
}
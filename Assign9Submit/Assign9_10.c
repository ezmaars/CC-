// 10. C program to find all roots of a quadratic equation using switch case
#include <stdio.h>
#include <limits.h>
#include <math.h>

int main()
{

    float d, r1, r2, i;
    float a, b, c;

    int ch , dh;
    ch=dh=4;
    printf("\n\n%d %d\n\n",ch, dh);
    printf("Enter a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    
    switch (d == 0)
    {
    case 1:
        printf("d = 0\n");

        r1 = r2 = -b / (2 * a);

        printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);

        break;
    case 0:
        switch (d < 0)
        {
        case 1:
            printf("d < 0\n");
            r1 = r2 = -b / (2 * a);
            i = sqrt(-d) / (2 * a);

            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                   r1, i, r2, i);
            i = sqrt(-d) / (2 * a);
            break;
        case 0:
            printf("d > 0\n");
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Two distinct and real roots exists: %.2f and %.2f", 
                    r1, r2);
            break;
        }
    }

    return 0;
}

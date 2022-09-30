// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit

#include <stdio.h>
#include <process.h>
int main()
{

    int sel = 0;
    double sA=0, sB = 0, sC = 0;
     system("cls");
    do
    {

        printf("\n1. Check Isosceles Triangle.\n");
        printf("2. Check Right Angle Triangle.\n");
        printf("3. Check Equilateral Triangle\n");
        printf("0. Exit\n");
        printf("==================\n");
        printf("Select from above Choices (1 for Isosceles ): ");
        scanf("%d", &sel);

        if (sel == 1 || sel == 2 || sel == 3)
        {
             printf("\nSide A: ");
            scanf("%lf", &sA);
            printf("Side B: ");
            scanf("%lf", &sB);
            printf("Side C: ");
            scanf("%lf", &sC);
        }
        switch (sel)
        {
        case 1:
            if (sA == sB || sA == sC)
            {
                printf("\nThis is Isosceles Triangle");
            }
            else
            {
                printf("\nThis is not Isosceles Triangle");
            }
            break;
        case 2:
            if ((sA*sA+sB*sB) == (sC*sC)||(sA*sA+sC*sC) == (sB*sB) ||(sC*sC+sB*sB) == (sA*sA))
            {
                printf("\nThis is Right Angle Triangle");
            }
            else
            {
                printf("\nThis is not Right Angle Triangle");
            }

            break;
        case 3:
            if (sA == sB && sA == sC)
            {
                printf("\nThis is Equilateral Triangle");
            }
            else
            {
                printf("\nThis is not Equilateral Triangle");
            }
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("\n*Invalid Choice*\n8");
            break;
        }

    } while (sel);
}
// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.

#include <stdio.h>

int main()
{
    int sel = 7;
    printf("Enter day of the week! ");
    scanf("%d", &sel);

    switch (sel)
    {
    case 1:
        printf("Monday is working day!");
        break;
    case 2:
        printf("Tuesday is a Taco day!");
        break;
    case 3:
        printf("Wednesday is a Hump day!");
        break;
    case 4:
        printf("Thursday is a day before Friday!");
        break;
    case 5:
        printf("Friday is here, weekend is tommorow!");
        break;
    case 6:
        printf("Saturday night live!");
        break;
    case 7:
        printf("Sunday a Fun day!");
        break;
    default:
        printf("Not the day of the Week/Weekend");
        break;
    }
    return 0;
}
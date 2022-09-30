// 1. Write a program which takes the month number as an input and display
// number of days in that month.
#include <stdio.h>

int main()
{
    int month=0;
    printf("Enter the number of the Month: ");
    scanf("%d",&month);

    switch (month)
    {
    case 2:
            printf("Number of days 28 or 29 if leap year\n");    
            break;
    case 4:
    case 6:
    case 9:
    case 11:
            printf("Number of days 30\n");    
            break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            printf("Number of days 31\n");    
            break;
    default:
            printf("Month number doesn't exist!\n");
            break;
    }
    return 0;

}
// 1January - 31 days
// 2February - 28 days in a common year and 29 days in leap years
// 3March - 31 days
// 4April - 30 days
// 5May - 31 days
// 6June - 30 days
// 7July - 31 days
// 8August - 31 days
// 9September - 30 days
// 10October - 31 days
// 11November - 30 days
// 12December - 31 days
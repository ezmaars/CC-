
#include <stdio.h>

// 18. Write a program which takes the month number as an input and display number of
// days in that month
int main(){

int month =12;

    if(month==2)
        printf("Days in Feburary are 28 or 29 if it is leap year");
    if(month==4||month==6||month==9||month==11)
        printf("Days in month %d are 30",month);
    else
        printf("Days in %d month are 31",month);
    return 0;
}
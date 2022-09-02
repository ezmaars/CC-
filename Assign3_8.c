#include <stdio.h>

//8. Write a program to check whether a given year is a leap year or not.
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

    if (year%4) {
      printf("%d is not a leap year.", year);
    }
    else if (year%100) {
      printf("%d is a leap year.", year);
    }
    else if (year % 400) {
      printf("%d is not a leap year.", year);
   }
   else {
      printf("%d is a leap year.", year);
   }

   return 0;
}
#include <stdio.h>
//13. Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.
int main(){

int number =684;
printf("Enter a three digit number: ");
scanf("%d",&number);
int r=0;
r =number%10;
number= number/10;
r=r*100;
number=r+number;
printf("\n%d",number);
return 0;

}
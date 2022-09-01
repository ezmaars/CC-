#include <stdio.h>
//2. Write a program to print a given 
// number without its last digit.
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("\n%d without last digit: %d",num,num/10);

    return 0;
}
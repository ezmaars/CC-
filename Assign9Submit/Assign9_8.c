// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include <stdio.h>

int main()
{
    
    int num =-18;
    printf("Enter the number: ");
    scanf("%d",&num);
    switch (num)
    {
    default:
        num=num*-1;
        printf("\n%d",num);
    }
    
    return 0;


}
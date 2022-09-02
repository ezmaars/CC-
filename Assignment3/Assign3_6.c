#include <stdio.h>

int main()
{

    //6. Write a program to print greater between two numbers. Print one number of both are
    //the same.
    
    int num1 =4;
    int num2 =4;
    printf("\nnum1: %d, num2: %d",num1,num2);
    if (num1>num2)
    {
        printf("\n%d is greator",num1);
        
    }
    else if(num1==num2)
    {
        printf("\nboth numbers are equal: %d cls",num1);

    }else{
        printf("\n%d is greater",num2);
    }
    return 0;
}
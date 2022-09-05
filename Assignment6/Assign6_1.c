// 1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main(){

    int num =0;
    int sum=0;
    printf("enter a number: ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++)
        sum+=i;
    printf("Sum of first %d natural numbers is %d",num,sum);

    return 0;
}
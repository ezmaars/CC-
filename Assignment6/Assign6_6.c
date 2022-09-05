#include<stdio.h>
// 6. Write a program to calculate factorial of a number

int main(){

    int num=0;
    int fact=1 ;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num){
        for (int i=1;i<=num;i++)
            fact*=i;
    }            
    printf("fact of %d is %d",num,fact);
    return 0;
}
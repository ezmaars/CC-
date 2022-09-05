#include<stdio.h>
// 2. Write a program to calculate sum of first N even natural numbers
int main(){

    int num=0,sum=0;

    printf("Enter a number : ");
    scanf("%d",&num);

    for(int i=2;i<=num*2;i+=2)
        sum+=i;
    printf("%d",sum);


    return 0;
}
#include<stdio.h>
// 5. Write a program to calculate sum of cubes of first N natural numbers

int main(){
    int num=0;
    int sum=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    for (int i=1;i<=num;i++)
        sum+=i*i*i;
    printf("%d",sum);

    return 0;
}

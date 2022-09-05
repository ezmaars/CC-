#include<stdio.h>
// 7. Write a program to count digits in a given number

int main(){
    int count=0;
    int num =0;
    int digit=
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(temp){
        temp/=10;
        count++;
    }
    printf("Number of digits in %d is %d",num,count);

    return 0;
}
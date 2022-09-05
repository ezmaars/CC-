#include<stdio.h>

//3. Write a program to calculate sum of first N odd natural numbers

int main(){
    int num=0,sum=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=1;i<=num*2-1;i+=2){
        
       sum+=i;
}
    printf("sum: %d",sum);
    return 0;
}
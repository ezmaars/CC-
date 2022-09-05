
#include <stdio.h>
// 10. Write a program to reverse a given number 

int main(){
    int extNum=0;
    int num =12;
    int newNum=0;
    int temp=0;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    do
    {   
        extNum=num%10;
        newNum=newNum*10+extNum;
        num=num/10;            
    } while (num);
    num=temp;
    printf("%d converted into %d",num,newNum);
    
    return 0;
}
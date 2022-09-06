#include <stdio.h>

// 9. Write a program to check whether a given number is an Armstrong number
// or not
int main(){

    int extNum=0;
    int num =0;
    int digitCount=0;
    int digitSum=0;
    int expo=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(temp){
        temp/=10;
        digitCount++;
    }
        temp=num;
    for(int i=1; i<=digitCount;i++){
        extNum = temp%10;
        expo=1;
            for(int k=1;k<=digitCount;k++){
                expo=expo*extNum;
           }  
        temp/=10;      
        digitSum+=expo;
    }//out for loop
    if(num==digitSum){
        printf("%d is %d -> Armstrong number ",num,digitSum);
    }else{
        printf("%d not %d -> Armstrong number ",num,digitSum);
    }
    return 0;
    
}
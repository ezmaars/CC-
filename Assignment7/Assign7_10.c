#include <stdio.h>
// 10. Write a program to print all Armstrong numbers under 1000
int main(){

    int extNum=0;
    int num =0;
    int digitCount=0;
    int digitSum=0;
    int expo=1;
    int temp=0;
    
    while(num<1000){
        temp=num;
        //count digits in the number
        while(num){
            num/=10;
            digitCount++;
        }//while end
            num=temp;//reset num
        
        //extract digits by looping
        for(int i=1; i<=digitCount;i++){
            extNum = num%10;//extract
            expo=1;//reset power/exp to 1

            //getting exponent answer 
            for(int k=1;k<=digitCount;k++){
                expo=expo*extNum;
            }//inner for loop  
            digitSum+=expo;//adding expo for extracted digit. 
            num/=10;//removing 1's digit    
        }//outer for loop
        num=temp;
        if(num==digitSum){
            printf("\n%d is %d -> Armstrong number ",num,digitSum);
        }
        num++;
        digitSum=0;//reset digitSum to 0;
        digitCount=0;//reset digitcount to 0
    }//while end temp<1000
    return 0;
}
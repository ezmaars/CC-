#include <stdio.h>

// 7. Write a program to print all Prime numbers between two given numbers
int main(){

    int prime = 2, isPrime = 1;//
    int RANGE =100;
    int start =1, end= 10;
    printf("Enter range for prime numbers range: ");
    scanf("%d %d",&start,&end);
    prime=start+1;
    RANGE=end;
    while(prime<RANGE){
        for (int i = 2; i <prime; i++) {
          // assign 0 to isPrime for non-prime number
            if (prime % i == 0) {
                isPrime = 0;
                break;
            }
            else{
                isPrime=1;
            }
        }
    if (isPrime)
        printf("%d ", prime);
    prime++;

    }//while end

    return 0;
    
}
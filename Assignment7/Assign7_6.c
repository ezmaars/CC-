#include <stdio.h>

// 6. Write a program to print all Prime numbers under 100
int main(){

    int prime = 2, isPrime = 1;//
    int RANGE =100;
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
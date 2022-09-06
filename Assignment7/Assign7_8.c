#include <stdio.h>

// 8. Write a program to find next Prime number of a given number
int main(){


    int prime = 2, isPrime = 0;//
    int RANGE =100;
    int start =1, end= 10;
    printf("Enter a number for next prime: ");
    scanf("%d",&start);
    prime=start+1;
    while(!isPrime){
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
    if (isPrime){
        printf("%d ", prime);
        break;
    }
    prime++;

    }//while end
    return 0;
    
}
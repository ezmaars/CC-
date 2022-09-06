#include <stdio.h>

// 2. Write a program to print first N terms of Fibonacci series
int main(){

    
    int fib1 = 0, fib2=1, nxtFib = 0;
    int n=0;
    printf("Enter a number for fib seqs? ");
    scanf("%d",&n);
    
        for(int i=1;i<=n;i++){
           
            if(i<=2){     
                nxtFib=(i==1)?fib1:fib2;
                printf("%d ",nxtFib);
                continue;
            }
            nxtFib=fib1+fib2;
            fib1=fib2;
            fib2=nxtFib;
            printf("%d ",nxtFib);

        }//for loop

    return 0;
}
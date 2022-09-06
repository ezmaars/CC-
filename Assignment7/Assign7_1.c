#include <stdio.h>

// 1. Write a program to find the Nth term of the Fibonnaci series.
int main (){

    int fib1 = 0, fib2=1, nxtFib = 0;
    int n=0;
    printf("What term of fib seq? ");
    scanf("%d",&n);
    
    if(n<=2){     
        nxtFib=(n==1)?fib1:fib2;
    }
    else{
        for(int i=3;i<=n;i++){
            
            nxtFib=fib1+fib2;
            fib1=fib2;
            fib2=nxtFib;

        }//for loop
    }//else end
    printf("\n%dth term if fib is %d",n,nxtFib);

    return 0;


}

#include <stdio.h>

// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.
int main(){

    int fib1 = 0, fib2=1, nxtFib = 0;
    int num=0 ,numIsThere=0;
    printf("check fib seqs number ");
    scanf("%d",&num);
    
        for(int i=1;;i++){
            
            //check if given num is 2 or less
            if(i<=2){     
                nxtFib=(i==1)?fib1:fib2;
                if(num==nxtFib){
                    numIsThere=1;
                    break;
                }
                continue;
            }
            nxtFib=fib1+fib2;
            fib1=fib2;
            fib2=nxtFib;
             if(num==nxtFib){
                    numIsThere=1;
                    break;
                }
            if(nxtFib>num){
                break;
            }
        }//for loop
        if(numIsThere){
            printf("%d is fib number!",num);
        }
        else{
            printf("%d is not fib number!",num);
        }
    return 0;
}



#include<stdio.h>
// 10. Write a program to print a table of 5.
int main(){
    
    for(int i =5, k=1,table=5;i<=50;i+=5,k++)
        printf("%d X %d =%d\n",k,table,i);
    return 0;
}
#include<stdio.h>

//3. Write a program to print the first 10 natural numbers in reverse order
int main(){
    int i =10;
    do
    {
        printf("%d ", i--);
    } while (i>0);
    
    return 0;
}
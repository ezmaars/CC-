#include<stdio.h>
//4. Write a program to print the first N odd //natural numbers
int main(){
	int num;
	printf("Please enter a num: ");
	scanf("%d",&num);
	for(int i =1; i<=num*2;i+=2)
	printf("%d\n",i);
	return 0;
}
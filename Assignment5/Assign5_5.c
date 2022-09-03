#include<stdio.h>
// 5. Write a program to print the first N odd natural numbers in reverse order.

int main(){
	int num=0;
	printf("How many natural number to print on Screen: ");
	scanf("%d",&num);
	for(int i=num*2;i>0;i-=2)
		printf("%d\n",i);
	return 0;
	return 0;
}
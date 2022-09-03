#include<stdio.h>
// 3. Write a program to print the first N natural numbers in reverse order

int main(){
	
	int num=0;
	printf("How many natural number to print on Screen: ");
	scanf("%d",&num);
	for(int i=num;i>0;i--)
		printf("%d\n",i);
	return 0;
}
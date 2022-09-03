#include<stdio.h>
// 6. Write a program to print the first N even natural numbers

int main(){
	
	int num=0;
	printf("How many first N enen natural number to print: ");
	scanf("%d",&num);
	num=num*2;
	for(int i=2;i<=num;i+=2)
		printf("%d\n",i);

	return 0;
}
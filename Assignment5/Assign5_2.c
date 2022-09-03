#include<stdio.h>
// 2. Write a program to print the first N natural numbers.

int main(){
	int num=0;
	printf("How many natural number : ");
	scanf("%d", &num);

	for(int i=1;i<=num;i++)
		printf("%d\n",i);
	return 0;
}
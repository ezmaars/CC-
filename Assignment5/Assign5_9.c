#include<stdio.h>
// 9. Write a program to print cubes of the first N natural numbers

int main(){
	
	int num =0;
	printf("How many first natural  numbers CUBE :");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
		printf("%d\n",i*i*i);
	return 0;
}
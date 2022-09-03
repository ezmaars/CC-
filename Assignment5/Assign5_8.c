#include<stdio.h>
// 8. Write a program to print squares of the first N natural numbers

int main(){
	
	int num=0;
	printf("How many first nutural numbers you want square of : ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++)
		printf("%d\n",i*i);
	return 0;
}
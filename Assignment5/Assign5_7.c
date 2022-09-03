#include<stdio.h>
// 7. Write a program to print the first N even natural numbers in reverse order

int main(){
	int num=0;
	int lastEven=0;

	printf("enter a number: ");
	scanf("%d",&num);
	num=num*2;
	while(num>=2){
		printf("%d\n",num);
		num-=2;
	}
	return 0;
}
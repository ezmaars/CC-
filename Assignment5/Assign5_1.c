#include<stdio.h>
// 1. Write a program to print MySirG N times on the screen

int main(){
	
	int num=0;
	printf("How many times print MySirG on screen: ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++) printf("MySirG\n");
	return 0;
}
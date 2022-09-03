#include<stdio.h>
// 10. Write a program to print a table of N.
int main(){
	
	int table=0;

	printf("Type a number you want to print table of: ");
	scanf("%d",&table);


	for(int i=1;i<=10;i++)
		printf("%d x %d = %d\n",i,table,table*i);
	return 0;
}
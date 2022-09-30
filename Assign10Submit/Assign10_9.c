// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)

#include <stdio.h>


int isNumHasDigit(int n, int d);
int main()
{
    int num=0, d=0;
    printf("Enter a number and a check digit :");
    fflush(stdin);
    scanf("%d %d",&num,&d);

    printf("%d",isNumHasDigit(num,d));
    return 0;

}

int isNumHasDigit(int n, int d)
{   
    int oneDigit =0;
    do{
        oneDigit=n%10;
        if(oneDigit==d)return 1;
        n=n/10;
    }
    while(n%10);
    return 0;
}
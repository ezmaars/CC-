#include<stdio.h>
//9. Write a program to calculate LCM of two numbers

int main(){
    int a=0,b=0;
    int bigNum=0;
    int endNum=0;
    int lcm=0;
    
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    bigNum=a>b?a:b;
    endNum=a*b;
    for(int i=bigNum;i<=endNum;i++){

        if(i%a==0 && i%b==0){
            lcm=i;
            break;
        }
    }
    printf("%d\n",lcm);


    return 0;
}
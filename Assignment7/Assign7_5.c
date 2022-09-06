#include <stdio.h>

// 5. Write a program to check whether two given numbers are co-prime
// numbers or not

int main(){
    int a=0,b=0;
    int bigNum=0;
    int endNum=0;
    int lcm=0;
    int hcf=0;
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
    hcf=a*b/lcm;
    if(hcf==1){
        printf("%d and %d are co-prime %d",a,b,hcf);
    }else{
        printf("%d and %d are not co-prime %d",a,b,hcf);
    }
    return 0;
    
}
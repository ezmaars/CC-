#include <stdio.h>
//9. Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times. 
//Sir, I am also checking for if all numbers are equal. 
int main()
{

    int a, b , c; 
    char str[30] =" is the greatest number!";
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c){
        printf("All numbers are equal: %d ",a);
    }
    else{
        if(a>b){
            if(a>c){
                printf("\n%d%s",a,str);
            }
        }
        else if(b>c){
            printf("\n%d%s",b,str);
        }
        else{
            printf("\n%d%s",c,str);
        }
    }
return 0;
}

#include <stdio.h>
/*
11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
*/
int main()
{
    double english =0;
    double math =0;
    double history=0;
    double biology=0;
    double economics =0;

    printf("Marks for English: ");
    scanf("%lf",&english);
    printf("Marks for Math: ");
    scanf("%lf",&math);
    printf("Marks for History: ");
    scanf("%lf",&history);
    printf("Marks for Biology: ");
    scanf("%lf",&biology);
    printf("Marks for Econimics: ");
    scanf("%lf",&economics);
    
    if(english<33||math<33||history<33||biology<33||economics<33){
        printf("\nYou failed!");
    }
    else{printf("\nYou passed!");}
return 0;

}
// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include <stdio.h>
#include <process.h>

int main()
{   int sel = 7;
    double num1=0, num2=0;
    double result=0;
    char optr = ' ';
    int isOper =0;
    system("cls");
    do
    {
        
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multipication\n");
        printf("4. Division\n");
        printf("0. Exit\n");
        printf("==================\n");
        printf("Select from above Choices (1 for Addition ): ");
        
        printf("Scanf return value: %d",scanf("%d",&sel));
        printf("Scanf failed");
        scanf("%d",&isOper);

        if(sel==1||sel==2||sel==3||sel==4)
        {
            isOper=1;
            printf("Num1: ");
            scanf("%lf",&num1);
            printf("Num2: ");
            scanf("%lf",&num2);
        }
        switch (sel)
        {
        case 1:
            result = num1+num2;
            optr ='+';
            break;
        case 2:
            result = num1-num2;
            optr = '-';
            break;
        case 3:
            result = num1*num2;
            optr = 'x';
            break;
        case 4:
            result = num1/num2;
            optr ='/';
            break;
        case 0:
            printf("Exiting...\n");     
            break;
        default:
            printf("Invalid Choice");
            break;
        }
        if(isOper)
        {
         printf("\n%.2lf %c %.2lf = %.2lf\n",num1,optr,num2,result);
         isOper=0;
        }   

    } while (sel);

    return 0;
}
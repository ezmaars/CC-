// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.
#include <stdio.h>

int main()
{
    int num=2;
    switch (num%2==0)
    {
    case 1:
        num=num+1;
        printf("%d",num);
        break;
    default:
            printf("%d",num);
        break;
    }
    
    return 0;


}


// 2. Write a function to calculate HCF of two numbers. (TSRS)



#include <stdio.h>

int calHCF(int n1, int n2);
int main ()
{   
    int n1=13,n2=7;
    printf("Enter two number: ");
    scanf("%d %d",&n1,&n2);

    printf("%d",calHCF(n1,n2));
    return 0;
    
}

int calHCF(int n1, int n2)
{   
    int hcf=0;
    int min = (n1 < n2) ? n1 : n2;
    if(min==0)return hcf=n1+n2;

    for(int i=1; i<=min;i++)
        {
            if (n1 % i == 0 && n2% i == 0)
            {   
                
                hcf=i;
            }
        }
    return hcf;
}
#include <stdio.h>
//10. Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
int main(){

    double prodCost=0;
    double prodSell=0;
    double profLos =0;
    char strPfLs[10];
    printf("\nCost Price: ");
    scanf("%lf",&prodCost);
    printf("Selling Price: ");
    scanf("%lf",&prodSell);

    profLos = (prodSell-prodCost)/prodCost;
    printf("\n%s %.2lf %%",(profLos>0)?"Profit":"Loss",profLos*100.0);

return 0;

}
// 2. Write a function to calculate simple interest. (TSRS)

#include <stdio.h>

double simpleInt(double p, double r, int t);
int main()
{
    double p=10000,r=5;
    int t =3;

    printf("Principal Amount: %.2lf  after %dyears at %.2lf%% is %.2lf",p,t,r,simpleInt(p,r,t));


    return 0;

}
double simpleInt(double p,double r,int t)
{
    // p(1+rt)
    return p*(1+(r/100*t));
}
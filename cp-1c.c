#include<stdio.h>
int main()
{

    float principle,rate,year,SI,CI;
    printf("enter the principle amount:");
    scanf("%f",&principle);
    printf("enter the number of year:");
    scanf("%f",&year);
    printf("enter the rate of interest:");
    scanf("%f",&rate);
    SI=(principle*year*rate)/100;
    printf("simple interest=%f",SI);
    CI=principle*(pow((1+rate/100),year));
    printf("compound interest=%f",CI);
    return 0;
}

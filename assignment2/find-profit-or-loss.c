#include<stdio.h>
int main()
{
     float cp, sp;
     printf("Enter the cost price of one dozen bananas(in INR) :");
     scanf("%f",&cp);
     printf("Enter the selling price of one dozen bananas(in INR) :");
     scanf("%f",&sp);
     
     printf("If value is +ve then profit or if -ve then loss = %.2f",((sp-cp)/12)*25);
     return 0;
}
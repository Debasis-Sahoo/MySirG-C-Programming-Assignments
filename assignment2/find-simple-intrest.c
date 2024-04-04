#include<stdio.h>
int main()
{
     float principal, time, rate;
     printf("Enter the principal amount(INR) :");
     scanf("%f",&principal);
     printf("Enter the rate of intrest(Per Year) :");
     scanf("%f",&rate);
     printf("Enter the time pireod(Year) :");
     scanf("%f",&time);
     printf("simple intrest = %.2fINR",(principal*time*rate)/100);
     return 0;
}
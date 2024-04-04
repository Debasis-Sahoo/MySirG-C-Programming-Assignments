#include<stdio.h>
int main()
{
     float num1, num2, num3;
     printf("Enter any three number and get there average :");
     scanf("%f %f %f",&num1,&num2,&num3);
     printf("The average of these three number is %.2f",(num1+num2+num3)/3);
     return 0;
}
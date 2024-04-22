// 1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int naturalNumSum(int n)
{
     if(n<=1)
          return n;
     return n + naturalNumSum(n-1);
}
int main()
{
     int n;
     printf("Enter the number :");
     scanf("%d",&n);
     printf("%d",naturalNumSum(n));
     return 0;
}
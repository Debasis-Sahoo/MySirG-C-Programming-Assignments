// 5. Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int digitSum(int n)
{
     if (n <= 0)
          return n;
     return n % 10 + digitSum(n / 10);
}
int main()
{
     int n;
     printf("Enter the number :");
     scanf("%d", &n);
     printf("%d", digitSum(n));
     return 0;
}
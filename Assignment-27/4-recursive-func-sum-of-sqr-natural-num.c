// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>
int naturalNumSqrSum(int n)
{
     if (n <= 1)
          return n;
     return n*n + naturalNumSqrSum(n - 1);
}
int main()
{
     int n;
     printf("Enter the number :");
     scanf("%d", &n);
     printf("%d", naturalNumSqrSum(n));
     return 0;
}
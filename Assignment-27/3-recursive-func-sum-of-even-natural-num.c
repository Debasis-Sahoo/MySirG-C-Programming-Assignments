// 3. Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>
int evenNaturalNumSum(int n)
{
     if (n > 0)
     {
          return evenNaturalNumSum(n - 1) + 2 * n;
     }
     return 0;
}
int main()
{
     int n;
     printf("Enter the number :");
     scanf("%d", &n);
     printf("%d", evenNaturalNumSum(n));
     return 0;
}
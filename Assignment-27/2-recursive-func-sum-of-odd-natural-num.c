// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
// int i = 0;
int oddNaturalNumSum(int n)
{
     // if (n>0)
     // {
     //      oddNaturalNumSum(n-1);
     //      i = i + 2 * n - 1;
     // }
     // return i;
     if (n>0)
     {
          return oddNaturalNumSum(n-1) + 2 * n - 1;
     }
     return 0;
     
}
int main()
{
     int n;
     printf("Enter the number :");
     scanf("%d", &n);
     printf("%d", oddNaturalNumSum(n));
     return 0;
}
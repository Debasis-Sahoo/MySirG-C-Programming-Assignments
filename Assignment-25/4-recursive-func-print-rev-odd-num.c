// 4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
#include<stdlib.h>
void reversePrintOdd(int n)
{
    if(n>0&&n%2!=0)
        printf("%d ",n);
    else if(n==0)
        exit(0);
    reversePrintOdd(n-1);
}
int main()
{
    int n;
    printf("Enter the Value of N :");
    scanf("%d",&n);
    reversePrintOdd(n);
    return 0;
}
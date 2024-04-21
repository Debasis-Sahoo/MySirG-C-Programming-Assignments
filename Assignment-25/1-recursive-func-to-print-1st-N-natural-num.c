//1. Write a recursive function to print first N natural numbers
#include<stdio.h>
void printNaturalNum(int n)
{
    if(n>1)
        printNaturalNum(n-1);
    printf("%d ",n);
}
int main()
{
    int n;
    printf("Enter the Value of N :");
    scanf("%d",&n);
    printNaturalNum(n);
    return 0;
}
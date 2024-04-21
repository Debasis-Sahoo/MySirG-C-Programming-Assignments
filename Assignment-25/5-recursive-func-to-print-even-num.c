// 5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
void printOddNum(int n)
{
    if(n>1)
        printOddNum(n-1);
    if(n%2==0)
        printf("%d ",n);
}
int main()
{
    int n;
    printf("Enter the Value of N :");
    scanf("%d",&n);
    printOddNum(n);
    return 0;
}
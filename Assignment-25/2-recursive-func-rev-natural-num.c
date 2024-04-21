//2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
#include<stdlib.h>
void reversePrint(int n)
{
    if(n>0)
        printf("%d ",n);
    else if(n==0)
        exit(0);
    reversePrint(n-1);
}
int main()
{
    int n;
    printf("Enter the Value of N :");
    scanf("%d",&n);
    reversePrint(n);
    return 0;
}
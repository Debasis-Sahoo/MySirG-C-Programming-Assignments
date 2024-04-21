// 2. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void square(int n)
{
    if(n>1)
        square(n-1);
    printf("%d ",n*n);
}
int main()
{
    int n;
    printf("Enter the N :");
    scanf("%d",&n);
    square(n);
    return 0;
}
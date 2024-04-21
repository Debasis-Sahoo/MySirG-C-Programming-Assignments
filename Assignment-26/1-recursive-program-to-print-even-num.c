//1. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
#include<stdlib.h>
void even(int n)
{
    if (n<1)
    {
       exit(0);
    }
    else if(n%2==0)
    {
        printf("%d ",n);
    }
    even(n-1);
}
int main()
{
    int n;
    printf("Enter the N :");
    scanf("%d",&n);
    even(n);
    return 0;
}
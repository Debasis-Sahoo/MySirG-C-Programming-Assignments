// 5. Write a recursive function to print reverse of a given number
#include<stdio.h>
int rev=0;
void reverse(int n)
{
    if(n==0)
        printf("%d",rev);
    rev = rev*10 + n%10;
    if(n)
        reverse(n/10);
}
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    reverse(num);
    return 0;
}
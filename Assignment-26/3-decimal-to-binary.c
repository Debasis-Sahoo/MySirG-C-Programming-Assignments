// 3. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void decimalToBinary(int n)
{
    if(n>0&&n!=0)
        decimalToBinary(n/2);
    if(n)
        printf("%d",n%2);
}
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    decimalToBinary(num);
    return 0;
}
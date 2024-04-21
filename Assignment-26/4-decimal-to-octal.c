//4. Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void decimalToOctal(int n)
{
    if(n>0&&n!=0)
        decimalToOctal(n/8);
    if(n)
        printf("%d",n%8);
}
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    decimalToOctal(num);
    return 0;
}
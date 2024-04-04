#include<stdio.h>
int main(){
     int firstNum, secondNum, sum;
     printf("Enter the first number :");
     scanf("%d",&firstNum);
     printf("Enter the second number :");
     scanf("%d",&secondNum);
     sum = firstNum + secondNum;
     printf("The sum of two number is %d",sum);
     return 0;
}
//another way or better way or efficent way
/*
int main()
{
     int firstNum, secondNum;
     printf("Enter two number :");
     scanf("%d %d",&firstNum,&secondNum);
     printf("The sum of two number is %d",firstNum+secondNum);
     return 0;
}
*/
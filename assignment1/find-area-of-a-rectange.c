#include<stdio.h>
int main()
{
     float length, width;
     printf("Enter length of the rectangle :");
     scanf("%f",&length);
     printf("Enter width of the rectangle :");
     scanf("%f",&width);
     printf("The area of the rectangle is %.2f", length*width);
     return 0;
}
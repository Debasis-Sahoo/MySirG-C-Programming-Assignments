#include<stdio.h>
int main()
{
     float length, breadth, height;
     printf("Enter the length of the cuboid(in cm) :");
     scanf("%f",&length);
     printf("Enter the breadth of the cuboid(in cm) :");
     scanf("%f",&breadth);
     printf("Enter the height of the cuboid(in cm) :");
     scanf("%f",&height);
     printf("volume of cuboid = %.2fcm^3",length*breadth*height);
     return 0;
}
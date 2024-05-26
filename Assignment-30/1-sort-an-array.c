// 1. Write a program to sort elements of an array of size 10. Take array values from the user
#include<stdio.h>
int main()
{
    int arr[10], i, j, temp;
    printf("Enter 10 elements of the array : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < 10; i++)
    {
        for (j = 0; j < 10-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
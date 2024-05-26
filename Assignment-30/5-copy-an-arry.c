// 5. Write a program in C to copy the elements of one array into another array. Take array values from the user.
#include<stdio.h>
int main()
{
    int arr[10], i, nArr[10];
    printf("Enter 10 elements of the array : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < 10; i++)
    {
        nArr[i] = arr[i];
    }
    printf("Original Array :\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nCopy of Original Array :\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ",nArr[i]);
    }
    printf("\n");
    return 0;
}

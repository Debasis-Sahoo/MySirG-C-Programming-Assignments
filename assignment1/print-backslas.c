#include<stdio.h>
int main()
{
     //how \n work
     printf("this is first line ");
     printf("this is second line ");
     //but the problem is these two line print in one line to over come this issue
     printf("\nThis is first line\nThis is second line\n");
     //\n will simply move the courser from one line to next line
     // but the problem is if we try to print \n it will simply move the courser
     printf("\\n");
     printf("%c%c\n",'\\','n');
     printf("%d%%",50);
     return 0;
}

//9. Write a program to allocate memory dynamically of the size in bytes entered by the
//user. Also handle the case when memory allocation is failed.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("enter the size of n:-");
    int n;
    scanf("%d",&n);
    int *p=(int*)malloc(n);
    if(*p==NULL)
        {
        printf("memory allocation is failed");
        return;
       }
       else
        printf("memory allocation is done");
       getch();
       return 0;
}

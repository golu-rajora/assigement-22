//7. Write a program to demonstrate memory leak in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the value of n:-");
    scanf("%d",&n);
    int *p;
    p=(int*)malloc(n);
    int x=10;
    p=&x;
    printf("memory leak:-%d",*p);
    getch();
    return 0;
}

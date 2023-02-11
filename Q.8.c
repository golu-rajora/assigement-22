//8. Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
int*fun(int *p)
 {
     return p;
 }
int main()
{
    int *p;
    int x=10;
    p=fun(&x);
    printf("%d",*p);
    getch();
    return 0;
}


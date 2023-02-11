//1. Define a function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
int main()
{
    int n;
    printf("enter size of your name:-");
    scanf("%d",&n);
    int *p=(int *)calloc(n+1,sizeof(int));
    printf("\nenter your name:-");
    for(int i=0;i<n;i++)
    scanf("%c",(p+i));
    printf("your name is:-");
    for(int i=0;i<n;i++)
    {
        printf("%c",*(p+i));
    }
    getch();
    return 0;
}

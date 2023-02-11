//3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,s=0;
    int * p;

    printf("enter the value of n\n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    printf("enter %d number\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        s=s+p[i];
    }
    printf("sum is=%d",s);
    getch();
    free(p);
    return 0;
}

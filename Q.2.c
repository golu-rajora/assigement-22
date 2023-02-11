//2. Write a program to ask the user to input a number of data values he would like tO
//enter then create an array dynamically to accommodate the data values. Now take
//the input from the user and display the average of data values
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,avg=0,s=0;
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
    avg=s/n;
    printf("average=%d",avg);
    getch();
    return 0;
}

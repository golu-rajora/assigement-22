//6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int * p;
     int max=-1;
    printf("enter the size of array\n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    printf("enter %d element\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
     for(i=0;i<n;i++)
     {

         if(p[i]>max)
            max=p[i];
     }
     printf("largest element is=%d",max);
     free(p);
     getch();
     return 0;
}

//10. Find out the maximum and minimum from an array using dynamic memory allocation in C
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int * p;
     int max=-1,min=0;
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
       min=p[0];
       for(int i=0;i<n;i++)
       {
           if(p[i]<min)
            min=p[i];
       }
     printf("largest element is=%d",max);
     printf("\nsmallest element is=%d",min);

     free(p);
     getch();
     return 0;
}


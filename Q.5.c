//5. Write a program to read a one dimensional array, print sum of all elements along with
//inputted array elements using dynamic memory allocation.
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
    printf("enter values is:-");
    for(i=0;i<n;i++)
    {
        printf("\n%d",*(p+i));
    }
    for(i=0;i<n;i++)
    {
        s=s+p[i];
    }
    printf("\nsum all the values is=%d",s);
    getch();
    free(p);
    return 0;
}

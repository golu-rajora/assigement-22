//4. Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    char *p;
    printf("enter the size of text:-");
    scanf("%d",&n);
    p=(char *)malloc(n+1);
    printf("enter your text:-");
    for(int i=0;i<n;i++)
         scanf("%c",&p[i]);
        printf("my text is:-");
        for(int i=0;i<n;i++)
            printf("%c",p[i]);
            free(p);
            getch();
            return 0;

}

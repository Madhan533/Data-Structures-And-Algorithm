//Stack using Array

#include <stdio.h>
#include <stdlib.h>  
#define MAX 5
int stack[MAX];
int top=-1;
int main()
{
    int n,val;
    printf("Enter no.of values (0 to %d): ",MAX);
    scanf("%d",&n);
    if(n>MAX)
    {
        printf("stack overflow\n");
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        printf("enter value %d : ",i);
        scanf("%d",&val);
        stack[++top]=val;
    }
     printf("values in stack : ");
     for(int i=top;i>=0;i--)
     {
         printf("%d ",stack[i]);
     }
}

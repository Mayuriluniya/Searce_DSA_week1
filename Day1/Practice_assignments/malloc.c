#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("Enter the number of integers you want to store\n");
    scanf("%d",&n);
    int *iptr=(int *)malloc(n*sizeof(int));
    printf("Enter the integers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",iptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(iptr+i));
    }
    return 0;

}
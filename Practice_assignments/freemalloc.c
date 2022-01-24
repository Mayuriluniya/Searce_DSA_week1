#include<stdio.h>
#include<stdlib.h>
int *input()
{
    int i;
    int *ptr=(int *)malloc(5*sizeof(int));
    for(i=0;i<5;i++)
    {
        scanf("%d",ptr+i);
    }
    return ptr;
}
int main()
{
    int *ptr=input();
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d",*(ptr+i));
    }
    int sum=0;
    for(i=0;i<5;i++)
    {
        sum =sum+*(ptr+i);
    }
    printf("\n%d",sum);
    free(ptr);
    return 0;
}
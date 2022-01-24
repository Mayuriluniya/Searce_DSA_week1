#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    //printf("Enter the number of integers you want to store\n");
    //scanf("%d",&n);
    int *ptr=(int *)malloc(3*sizeof(int));
    if(ptr==NULL)
    {
        printf("no memory available");
    }
    printf("Enter the integers\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",ptr+i);
    }
    ptr=(int *)realloc(ptr,6*sizeof(int));
    printf("\nEnter the remaining integers\n");
    for(i=3;i<6;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<6;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;

}
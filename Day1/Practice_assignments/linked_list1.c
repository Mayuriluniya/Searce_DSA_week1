
#include<stdlib.h>

#include<stdio.h>
int* fun()
{
    int num=13;
    return &num;
}
int main()
{
    int *ptr=NULL;
    ptr=fun();
   
    int *a=(int *)malloc(sizeof(int));
    *a=29;
    printf("%d\n",*a);
    printf("%u",a);



    return 0;

}
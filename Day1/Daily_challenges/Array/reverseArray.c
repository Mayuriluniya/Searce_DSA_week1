#include<stdio.h>
#include<stdlib.h>
void reverseArray(int P[],int Q)
{
    for(int i=Q-1;i>=0;i--)
    {
        printf("%d\t",P[i]);

    }

}
int main()
{
    int Q;
    printf("Enter the number of integers in an array\n");
    scanf("%d",&Q);
    int P[Q];
    printf("Enter the integers\n");
    for(int i=0;i<Q;i++)
    {
        scanf("%d",&P[i]);
    }
    printf("Given array is\n");
    for(int i=0;i<Q;i++)
    {
        printf("%d\t",P[i]);
    }
    printf("\nReversed array is\n");
    reverseArray(P,Q);
    return 0;


}
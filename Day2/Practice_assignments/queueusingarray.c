#include<stdio.h>
#include<stdlib.h>
int queue[100];
int front;
int rear;
int n;
void enqueue(int data);
void dequeue();
void printqueue();
//void isEmpty();
void enqueue(int data)
{
    if(front==-1 && rear==-1)
    {
        front=front+1;
        rear=rear+1;
        queue[front]=data;
    }
    else{
        rear=rear+1;
        queue[rear]=data;

    }
}
void dequeue()
{
    if(front==-1 || rear==-1)
    {
        printf("Queue is already empty\n");
    }
    else{
        printf("deleted data is = %d",queue[front]);
        front=front+1;
    }
}
void printqueue()
{
    if(front==-1 || rear==-1)
    {
        printf("queue is empty");
    }
    else{
        for(int i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
int main()
{
    front=-1;
    rear=-1;
    printf("Enter the no of integers you want in queue\n");
    scanf("%d",&n);
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    printqueue();
    //isEmpty();
}
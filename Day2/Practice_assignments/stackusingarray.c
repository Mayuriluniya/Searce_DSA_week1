#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void printstack();
void isEmpty();
int stack[100];
int n;

int top;

void push(int data)
{
    if(top<n)
    {
        top=top+1;
        stack[top]=data;
        
    }
    else{
        printf("Stack is already full");
    }

}
void pop()
{
    if(top==-1)
    {
        printf("stack is already empty");
    }
    else{
        printf("\nPopped element is=%d",stack[top]);
        top=top-1;
    }
}
void printstack()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else{

        for(int i=top;i>-1;i--)
        {
            printf("%d\t",stack[i]);
        }
    }
}
void isEmpty()
{
    if(top==-1)
    {
        printf("Stack is empty");
        

    }
}

int main()
{
    printf("Enter the no of integers you want in stack\n");
    scanf("%d",&n);
    top=-1;
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    printf("\n%d",top);
    printf("\n");
    pop();
    pop();
    pop();
    isEmpty();
    
    printstack();


}



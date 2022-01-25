#include <stdio.h>
int stack[100];
int stack2[100];
int top,top2,i;
void push(int data);
void pop(void);
void display(void);

void push(int data)
{
    if(top>=10-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
       
        top++;
        stack[top]=data;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
        {
            printf("\n%d",stack[i]);
        }
            
       
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
void getMax(char operations[6])
{
    
    if(operations[0]=='1')
    {
        //stack.push(operations[1][2]+operations[1][3])
        push(operations[2]operations[3]);
        push(20);
        push(30);
        push(60);
        pop();
        display();
    }
    
}
int main()
{
    char operations[4][6]; 
    int top=-1;
    
    // use const because we're pointing to literals
    for(int i=0;i<4;i++)
    {
         fgets(operations[i], 6, stdin);
         
         
    }

    for(int i=0;i<4;i++)
    {
        getMax(operations[i]);
    }
    //getMax(operations); 
    //printf("%d",c);   
    
    
    
    

    
}
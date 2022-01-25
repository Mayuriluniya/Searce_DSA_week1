#include <stdio.h>
int stack[100];
int stack2[100];
int top,top2,i;
void push(int data);
void pop(void);
void display(void);

void push(int data)
{
    if(top>=50-1)
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

 
void getMax(char operations[10][6])
{
    
    for(int i=0;i<10;i++)
    {
        
            if(operations[i][0]=='1')
            {
                int val=((operations[i][2]-'0')*10+(operations[i][3]-'0'));
                 if (top == -1) {
                     push(val);
                    
                
            }
            else {
                int currMax = stack[top];
                if(val>currMax)
                {
                    push(val);
                }
                
            }
                
            }
            else if(operations[i][0]=='2')
            {
                pop();
            }
            else 
            {
                printf("%d",stack[top]);
            }
        }
       
    
    
}
int main()
{
    
    int top=-1;
    
    char operations[10][6]; 

    
    for(int i=0;i<10;i++)
    {
         fgets(operations[i], 6, stdin);
         
         
    }
    
    

    getMax(operations);
    //getMax(operations); 
    //printf("%d",c);   
    
    
    
    

    
}
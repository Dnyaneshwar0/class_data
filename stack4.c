#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack {
    int capacity;
    int top;
    char* array;
};
struct Stack* createStack(int capacity) 
{
    struct Stack* stack = (struct Stack*)malloc(10*sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char*)malloc(stack->capacity*sizeof(char));
    return stack;
};
int isFull(struct Stack* stack) 
{
    return stack->top == stack->capacity - 1;
}
int isEmpty(struct Stack* stack) 
{
    return stack->top == -1;
}
void push(struct Stack* stack, char item) 
{
    if (isFull(stack)) 
    {
        printf("Stack Overflow\n");
        return;
    }
    stack->array[++stack->top] = item;
    //printf("%d pushed to stack\n", item);
}
char pop(struct Stack* stack) 
{
    if (isEmpty(stack)) 
    {
        printf("Stack Underflow\n");
        exit(0);
    }
    return stack->array[stack->top--];
}

int peek(struct Stack* stack) 
{
    if (isEmpty(stack)) 
    {
        printf("Stack is empty\n");
        exit(0);
    }
    return stack->array[stack->top];
}

void toPostfix(struct Stack* stack, char eq[])
{
    for(int i=0;i<strlen(eq);i++)
    {
        char ch=eq[strlen(eq)-i-1];
        if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch==')')
        {
            if(isEmpty(stack))
            {
                push(stack, ch);
            }
            else if(ch==')' || peek(stack)==')' || !((ch=='+' || ch=='-') && (peek(stack)=='*' || peek(stack)=='/')))
            {
                push(stack, ch);
            }
            else
            {
                printf("%c", pop(stack));
                push(stack, ch);
            }
        }
        else if(ch=='(')
        {
            while(peek(stack)!=')')
            {
                printf("%c", pop(stack));
            }
            pop(stack);
        }
        else
        {
            // postfixEq+=ch;
            printf("%c", ch);
        }
    }
    
    while(!isEmpty(stack))
    {
        // postfixEq+=pop();
        printf("%c", pop(stack));
    }
}

int main() 
{
    struct Stack* stack = createStack(50);
    	char arr[50];
	printf("Enter 10193 infix expression: ");
	scanf("%s",arr);
	
	toPostfix(stack, arr);

    return 0;
}

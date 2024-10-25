#include <stdio.h>
#include <stdlib.h>

struct stack
{
    unsigned int capacity;
    int top;
    int *arr;
};

struct stack *createstk()
{
    struct stack *stk;
    int size;
    printf("ENTER THE SIZE OF STACK : ");
    scanf("%d",&size);
 
    stk->capacity = size;
    stk->top = -1;
    stk->arr = (int *)malloc(size * sizeof(int));
    printf("STACK HAS BEEN CREATED \n");
    return stk;
}

int isFull(struct stack *stk)
{
    if(stk->top == stk->capacity-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack *stk)
{
    if(stk->top ==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}


void push(struct stack *stk, int val)
{
    if(isFull(stk))
    {
        printf("Stack is Full can't push %d \n",val);
    }
    else
    {
        stk->arr[++stk->top] = val;
        printf("%d pushed successfully \n",val);
    }
}

int pop(struct stack *stk)
{
    if(isEmpty(stk))
    {
        printf("Stack is Empty \n");
        return ;
    }
    else
    {
        return stk->arr[stk->top--];
    }
}

int peak(struct stack *stk)
{
    if(isEmpty(stk))
    {
        printf("Stack is Empty \n");
        return ;
    }
    else
    {
        return stk->arr[stk->top];
    }
}



int main()
{
    struct stack *stk = createstk();
    
    push(stk,10);
    push(stk,20);
    push(stk,30);
    push(stk,40);
    push(stk,50);

    printf("THIS IS THE VALUE RETURNED BY THE PEAK FUNCTION %d\n",peak(stk));

    printf("FIRST POPPED VALUE IS %d\n",pop(stk));
    printf("SECOND POPPED VALUE IS %d\n",pop(stk));
    printf("THIRD POPPED VALUE IS %d\n",pop(stk));

    printf("THIS IS THE VALUE RETURNED BY THE PEAK FUNCTION %d\n",peak(stk));
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
        return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
        return 0;
}
int POP(struct stack *ptr){

    if(isEmpty(ptr)){
        printf("Stack is Empty\n");
        return -1;
    }

    int value = ptr->arr[ptr->top];
    ptr->top--;
    return value;

}

void PUSH(struct stack *ptr, int value){

    if(isFull(ptr)){
        printf("Stack Overflow\n");
    }
    ptr->top++;
    ptr->arr[ptr->top]=value;
}

int peek(struct stack * ptr, int p){
    if(ptr->top-p+1<0){
        printf("Not a Valid Position of the Stack\n");
        return -1;
    }
    return ptr->arr[ptr->top-p+1];
;

}

int stackTop(struct stack *ptr){
    printf("The top most value of the stack is %d\n",ptr->arr[ptr->top]);

}
int stackBottom(struct stack *ptr){
    printf("The Bottom most value of the stack is %d\n",ptr->arr[0]);

}

int main()
{

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 50;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("The stack is Created Sucessfully\n");
    PUSH(s,10);
    PUSH(s,20);
    PUSH(s,30);
    PUSH(s,40);
    PUSH(s,50);
    PUSH(s,60);
    PUSH(s,70);
    PUSH(s,80);
    PUSH(s,90);
    PUSH(s,100);

    stackTop(s);
    stackBottom(s);
    if(isEmpty(s)){
        printf("stack is empty\n");
    }
    else{
        printf("stack is not empty\n");
    }

    printf("popped value is %d\n",POP(s));
    printf("popped value is %d\n",POP(s));
    printf("popped value is %d\n",POP(s));

    for(int i=1;i<= s->top+1;i++){
        printf("The value at index %d id %d\n", i,peek(s,i));

    }
    return 0;
}
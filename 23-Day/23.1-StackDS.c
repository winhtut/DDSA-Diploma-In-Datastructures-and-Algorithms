//
// Created by winht on 3/11/2024.
//Stack Data Structure Array , LinkedList

#include "stdio.h"
#include "stdlib.h"
#define MAX_SIZE 10
struct Stack{
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack){
    stack->top = -1;
}
int isFull(struct Stack*stack){
    return (stack->top==MAX_SIZE-1);
}

int isEmpty(struct Stack*stack){

    return (stack->top==-1);
}
void push(struct Stack*stack,int value){
    if(isFull(stack)){
        printf("StackoverFlow!\n");
        exit(1);
    } else{
        stack->items[++stack->top]=value;
        printf("Value inserted to place->%d : Value = %d\n",stack->top,stack->items[stack->top]);
    }
}
int pop(struct Stack*stack){
    if(isEmpty(stack)){
        printf("StackunderFlow!\n");
        exit(1);
    } else{
        return stack->items[stack->top--];
    }
}

int peek(struct Stack*stack){
    if(isEmpty(stack)){
        printf("Stack have no data!\n");
        return -1;
    } else{
        return stack->items[stack->top];
    }
}

int main(){
    struct Stack stack;
    initialize(&stack);
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    push(&stack,40);
    printf("Peek data :%d\n", peek(&stack));

    printf("\nData :%d\n", pop(&stack));
    printf("Peek data :%d\n", peek(&stack));

    push(&stack,50);
    push(&stack,60);
    push(&stack,70);
    push(&stack,80);

    printf("Peek data :%d\n", peek(&stack));

    printf("\nData :%d\n", pop(&stack));
    printf("Peek data :%d\n", peek(&stack));

    return 0;
}
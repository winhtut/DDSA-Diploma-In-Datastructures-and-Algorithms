//
// Created by winht on 3/25/2024.
//
#include "stdio.h"
#include "stdlib.h"

struct Node{
    int data;
    struct Node* next;
};

// stack structure
struct Stack{
    struct Node* top;
};

void initalizeStack(struct Stack* stack){
    stack->top = NULL;
}

int isEmpty(struct Stack* stack){

    return (stack->top==NULL);

}
void push(struct Stack* stack , int data){

    struct Node* newNode =(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("Memory Allocation Failed!\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("New Node pushed!\n");

}
int pop(struct Stack* stack){

    if(isEmpty(stack)){
        printf("Stack underflow!\n");
        exit(1);
    } else{

        struct Node* temp =stack->top;
        int data = temp->data;
        stack->top = temp->next;
        free(temp);
        return data;

    }
}
int main(){
    struct Stack* stack;
    initalizeStack(&stack);
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);

    return 0;
}
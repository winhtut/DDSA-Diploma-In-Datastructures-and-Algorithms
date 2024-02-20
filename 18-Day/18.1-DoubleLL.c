//
// Created by winht on 2/20/2024.
//
#include "stdio.h"
#include "stdlib.h"

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* createNode(int newData){

    struct Node* newNode =(struct Node*)malloc(sizeof(struct Node) );
    newNode->data = newData;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

void insertAtBeginning(struct Node** head,int newData){

    struct Node* newNode = createNode(newData);
    newNode->next=*head;
    if(*head != NULL){

        (*head)->prev = newNode;

    }
    *head = newNode;
}

void append(struct Node** head, int newData){

    struct Node* newNode = createNode(newData);
    struct Node* last = *head;
    if(*head == NULL){
        *head = newNode;
        return;
    }
    while (last->next != NULL){
        last = last->next;
    }
    last->next = newNode;

    newNode->prev = last;

}

void allData(struct Node* node){

    if(node == NULL){
        return;
    }
    while ( node!= NULL ){
        printf("Data : %d\n",node->data);
        node = node->next;
    }

}

int main(){

    struct Node* head =NULL;

    insertAtBeginning(&head,10);
    append(&head,15);
    insertAtBeginning(&head,20);
    append(&head,25);
    insertAtBeginning(&head,30);
    append(&head,35);
    insertAtBeginning(&head,40);
    insertAtBeginning(&head,50);

    allData(head);

    return 0;

}
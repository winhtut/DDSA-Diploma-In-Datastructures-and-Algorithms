//
// Created by winht on 2/19/2024.
//
#include "stdio.h"
#include "stdlib.h"

struct Node{
    int data;
    struct Node *next;

};

struct Node* createNode(int newData){
    struct Node* newNode =(struct Node*) malloc(sizeof(struct Node ) );
    newNode->data = newData;
    newNode->next = NULL;

    return newNode;

}

void insertAtBeginning(struct Node** head,int newData){
    struct Node* newNode = createNode(newData);
    newNode->next = *head;
    *head = newNode;

}

void showAllData(struct Node* node){

    while (node != NULL){
        printf("data : %d\n",node->data);
        node = node->next;
    }

}
void deleteNode(struct Node** head , int key){

    struct Node* temp =*head , *prev = NULL;

    if(temp != NULL && temp->data == key){
        *head = temp->next ;
        free(temp);
        return;

    }

    while (temp !=NULL && temp->data != key){

        prev = temp ;
        temp = temp->next;

    }

    if(temp==NULL)return;

    prev->next = temp->next;

    free(temp);

}

int main(){

    struct Node *head=NULL;

    insertAtBeginning(&head,100 );
    insertAtBeginning(&head,200 );
    insertAtBeginning(&head,300 );
    insertAtBeginning(&head,400 );
    insertAtBeginning(&head,500 );
    insertAtBeginning(&head,600 );
    showAllData(head);
    deleteNode(&head,300);
    printf("After delete!\n");
    showAllData(head);

}
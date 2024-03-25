//
// Created by winht on 3/25/2024.
//
#include "stdio.h"
#include "stdlib.h"

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){

    struct Node* newNode=(struct Node*) malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("Malloc Failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insertNode(struct Node* root, int data){//5

    if(root == NULL){
        root = createNode(data);

    } else if(data < root->data){

        root->left = insertNode(root->left,data);
    }else{
        root->right = insertNode(root->right,data);
    }


    return root;
}

int main(){


    struct Node* root= NULL;

   root =  insertNode(root , 10);
   root =  insertNode(root , 5);
   root =  insertNode(root , 15);
   root =  insertNode(root , 20);
   root =  insertNode(root , 3);
}
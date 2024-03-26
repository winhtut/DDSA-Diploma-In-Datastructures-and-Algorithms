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

struct Node* findMin(struct Node* root){
    while (root->left != NULL){
        root = root->left;
    }
    return root;
}


struct Node* deleteNode(struct Node* root, int data){

    if(root==NULL){
        return root;
    }

    if(data<root->data){

        root->left=deleteNode(root->left,data);
    } else if(data>root->data){
       root->right =  deleteNode(root->right,data);
    } else{

        if(root->left == NULL){
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if(root->right == NULL){
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        struct Node* temp = findMin(root->right); // inorder successor

        root->data = temp->data;

        root->right =deleteNode(root->right,temp->data);

    }
    return root;
}

void inorder(struct Node* root){

    if(root != NULL){
        inorder(root->left);
        printf("%d-",root->data);
        inorder(root->right);
    }

}

int main(){


    struct Node* root= NULL;

   root =  insertNode(root , 10);
   root =  insertNode(root , 5);
   root =  insertNode(root , 15);
   root =  insertNode(root , 20);
   root =  insertNode(root , 3);
   root =  insertNode(root , 8);
   root =  insertNode(root , 13);
    inorder(root);
   root = deleteNode(root,10);
    printf("\n");
    inorder(root);


}
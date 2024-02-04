//
// Created by winht on 1/22/2024.
// C File Handling

#include "stdio.h"

int main(){

    FILE *fptr;
    fptr = fopen("n1cc.txt","r"); //

    if(fptr == NULL){
        perror("Error opening file!\n");
    } else{
        printf("File opening success!");
    }


    return 0;
}

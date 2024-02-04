//
// Created by winht on 1/22/2024.
//
#include "stdio.h"
#include "stdlib.h"

int main(){

    FILE *fptr;
    int number;

    fptr = fopen("winasmm.txt","r");
    if(fptr==NULL){
        perror("\n");
        return -1;
    }

    while(fscanf(fptr,"%d",&number) !=EOF){
        printf("%d\n",number);
    }
    fclose(fptr);
    return 0;
}
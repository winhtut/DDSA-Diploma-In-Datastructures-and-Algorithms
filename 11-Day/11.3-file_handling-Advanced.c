//
// Created by winht on 1/22/2024.
//
#include "stdio.h"

int main(){
    FILE *fptr;

    fptr =fopen("winasm.txt","a");
    if(fptr==NULL){

        perror("\n");
    } else{

        for(int i=0; i<10; i++){

            fprintf(fptr,"Hello C Programming!\n");

        }



    }




    return 0;
}
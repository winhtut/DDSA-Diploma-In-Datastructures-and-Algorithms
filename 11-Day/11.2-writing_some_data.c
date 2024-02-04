//
// Created by winht on 1/22/2024.
// C File Handling

#include "stdio.h"

int main(){

    FILE *fptr;

    fptr = fopen("n1c.txt","a"); //

    if(fptr == NULL){
        perror("Error opening file!\n");
    } else{
        printf("File opening success!");


        //fputc('a',fptr);
        fprintf(fptr,"Myanmar Crazy Coder!");
        fputs("This is from fputs",fptr);

        fclose(fptr);
        return 0;
    }


    return 0;
}

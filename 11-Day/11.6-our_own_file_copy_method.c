//
// Created by winht on 1/22/2024.
//
#include "stdio.h"
#include "stdlib.h"

void n1c_file_copy(const char *sourceFile,const char *destinationFile ){

    FILE *source , *destination;
    int ch;
    source = fopen(sourceFile,"rb");
    if(source==NULL){
        perror("Source \n");
        exit(EXIT_FAILURE);
    }

    destination = fopen(destinationFile,"wb");
    if(destination==NULL){
        printf("Destination \n");
        fclose(source);
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(source))!=EOF){
        fputc(ch,destination);
    }

    fclose(source);
    fclose(destination);

}



int main(){

    n1c_file_copy("winasm.txt","destination.txt");
    printf("File Copied Successfully.!");



    return 0;
}
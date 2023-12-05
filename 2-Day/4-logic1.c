//
// Created by National Cyber City on 12/5/2023.
//
// Programming logic

#include "stdio.h"

int main(){
    int i=0;
    int x=0;
    printf("This is testing!\n");

    for(i=0 ; i<10 ; i++){
        printf("*");

        for(int x=0; x<i ; x++){
            printf("#");
        }
        printf("\n");
    }
}

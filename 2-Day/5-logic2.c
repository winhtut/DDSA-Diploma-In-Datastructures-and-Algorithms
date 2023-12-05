
//
// Created by National Cyber City on 12/5/2023.
//
// Programming logic

#include "stdio.h"

int main(){
    int i=0;
    int x=0;
    int ii=0;
    int size=10;
    printf("This is testing2!\n");

    for (int i = 0; i < size;i++) {

        for( x=0; x<=size-i ; x++){ // size=10 -1 = size=9
            printf(" ");
        }
        for(ii=1; ii<i*2; ii++){
            printf("*");
        }
        printf("\n");


    }
}

//
// Created by winht on 2/27/2024.
//
#include "n1c.h"
#ifndef DDSA_1_ENCRYPTION_H
#define DDSA_1_ENCRYPTION_H
#include "stdio.h"

WinHtut *Encryption(char *plainText,char *keys){

    printf("This is plainText %s\n",plainText);
    printf("This is keys %s\n",keys);
    int sizeofPlain = size_of_charArray(plainText);
    int sizeofKey = size_of_charArray(keys);
    WinHtut *encryptedArray=(WinHtut*) malloc(sizeof(WinHtut));

    for(int e=0; e<sizeofPlain; e++){
        char plain = plainText[e];
        for(int k=0; k<sizeofKey; k++){
            char mkey = keys[k];
           plain = plain^mkey;
        }
        //printf("This is last word for %c is - %d \n",plainText[e],plain);
        encryptedArray->data[e] =  plain;
    }
//
//    for(int i=0; i<sizeofPlain; i++){
//        printf("- %d -",encryptedArray[i]);
//    }
    printf("Cypher %s\n",encryptedArray->data);
    return (WinHtut *) encryptedArray->data;
}

#endif //DDSA_1_ENCRYPTION_H

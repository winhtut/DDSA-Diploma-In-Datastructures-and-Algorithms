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
    printf("Size of Plain %d\n",sizeofPlain);
    printf("Size of Key %d\n",sizeofKey);

  // Allocation on memory to store cypherText
   WinHtut *cText = (WinHtut*) malloc(sizeof(WinHtut));
    char myText;
    for(int e=0; e<sizeofPlain; e++){
        char plain = plainText[e];
        // Encryption
        for(int k=0; k<sizeofKey; k++){
           myText = plain^keys[k];
        }
        cText->data[e] = myText;
    }

    printf("Cypher %s\n",cText->data);
    int encrypted_size =size_of_charArray(cText->data);
    printf("encrypted_size %d\n",encrypted_size);
    for(int i=0; i<encrypted_size; i++){
        printf("%c",cText->data[i]);
    }
    printf("\n");
    cText->size = sizeofPlain;
    cText->keys=keys;
    return cText;

}

#endif //DDSA_1_ENCRYPTION_H


/*
 *
 *
 * */
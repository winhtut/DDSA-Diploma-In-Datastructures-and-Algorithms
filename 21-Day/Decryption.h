//
// Created by winht on 2/27/2024.
//

#ifndef DDSA_1_DECRYPTION_H
#define DDSA_1_DECRYPTION_H
#include "n1c.h"

void Decryption(WinHtut*Encrypted_data){

    printf("\nDecryption Started!\n");
    char dChar;
    int size_of_keys = size_of_charArray(Encrypted_data->keys);
    for(int x=0; x<Encrypted_data->size; x++){
        char eChar = Encrypted_data->data[x];

        for(int k=0; k<size_of_keys; k++){
            dChar = eChar^Encrypted_data->keys[k];
        }
        printf("%c",dChar);
    }
}
#endif //DDSA_1_DECRYPTION_H

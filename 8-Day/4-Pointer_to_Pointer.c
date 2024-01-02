//
// Created by National Cyber City on 1/2/2024.
// pointer to pointer

#include "stdio.h"
int main(){
    int a = 10;
    int *ptr=&a;
    int **pptr;

    pptr = &ptr;

    printf("Value of a: %d\n",a);
    printf("Address  of a: %d\n",&a);
    printf("Value of ptr: %d\n",*ptr);
    printf("Adress  of ptr: %d\n",&ptr);
    printf("Value of PPtr: %d\n",**pptr);
    printf("Adress  of pptr: %d\n",&pptr);
}


//
// Created by National Cyber City on 1/8/2024.
// Dynamic Memory Allocation malloc free

#include "stdio.h"
#include "stdlib.h"

int main(){

    int *arr;
    int n=5;
    // memory allocation
    arr = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){

        arr[i] = i+10;
    }

    for(int x=0; x<n; x++){

        printf("Data from index %d value=%d\n",x,arr[x]);
    }
    free(arr);
    return 0;
}


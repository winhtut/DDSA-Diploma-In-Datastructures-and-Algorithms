//
// Created by winht on 1/22/2024.
//

#include "stdio.h"

typedef struct{
    int id;
    float score;

}WinHtut;

int main(){
    FILE *fptr;
    int a=10;
    WinHtut outRecord={1,10.10};
    WinHtut inRecord;

    fptr = fopen("record.bin","wb");

    if(fptr==NULL){
        perror("\n");
        return -1;
    }

    fwrite(&outRecord,sizeof(WinHtut),1,fptr );
    fclose(fptr);

    fptr = fopen("record.bin","rb");
    if(fptr==NULL){
        perror("\n");
        return -1;
    }
    fread(&inRecord,sizeof(WinHtut),1,fptr);
    printf("MyRecord ID: %d , Score: %.2f\n",inRecord.id,inRecord.score);

    fclose(fptr);

    return 0;
}
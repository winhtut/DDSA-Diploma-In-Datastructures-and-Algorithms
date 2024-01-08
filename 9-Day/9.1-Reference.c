//
// Created by National Cyber City on 1/8/2024.
//
// pass by value ( မူရင်း တန်ဘိုး ကို မချိန်း ဘူး )
#include "stdio.h"
void pass_value(int a , int b);
int main(){
    int a=10;
    int b=20;
    printf("this is main fun!\n");
    printf("Before Function call : a=%d , b=%d\n",a,b);
    pass_value(a,b);
    printf("After calling function!\n");
    printf("Values a= %d b=%d\n",a,b);
    return 0;
}

void pass_value(int a , int b){

   // printf("%d %d\n",a,b);
   a++;
   b++;
   int c=a+b;
}


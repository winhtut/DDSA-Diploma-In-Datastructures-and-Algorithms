//
// Created by National Cyber City on 12/11/2023.
// parameter lesson
// parameter ဘယ်နှစ်ခုပါသလဲ ဆိုတာ ကြည့်မယ်
// parameter type ကို ကြည့်မယ်
// parameter type အတိုင်းပဲ ထည့် ပေးရမယ်

#include "stdio.h"
int adding(int num1 , int num2);
int sub(int num1 ,int num2);
int main(){

    int add = adding(20,10);
    int number =  sub(30,10);

    printf("adding %d\n",add);
    printf("Sub %d",number);
    return 0;
}

int adding(int num1 , int num2){

    int total = num1+num2;

    return total;
}

int sub(int num1 ,int num2){

    int total = num1-num2;
    return total;
}

//
// Created by National Cyber City on 12/11/2023.
//

// Functions lesson
// function -> 1- Standard Library Functions 2 - Programmer Defined Functions
//             printf() scanf()                  ကျွန်တော်တို့ ရေးတဲ့ functions

// function တွေသည် ခေါ်မှပဲ အလုပ်လုပ်မယ်
// function တွေသည် return ပြန် / return မပြန် တဲ့ ကောင်
// function ကို ခေါ်တဲ့ အချိန်ကြရင် parameter ပါလား မပါလား ဆိုတာ ကြည့်ရမယ်။
// function declaration ကြေငြာတဲ့ အချန်မှာ အတိအကျ ကြေငြာ ပေးသလား
// ကြေငြာထားတဲ့ နေရာနဲ့ function ရေးတဲ့ နေရာနဲ့ တူသလား
#include "stdio.h"

void nOneC();
void printing();

int main(){
    printf("This is main function!\n");
    printing();
    nOneC();

    return 0;
}

void nOneC(){
    printf("hello This is N1C function!\n");
}

void printing(){

    printf("This is from printing function!\n");
}

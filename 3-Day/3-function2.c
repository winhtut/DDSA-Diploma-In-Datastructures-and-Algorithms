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

int nOneC();
char printing();

int main(){
    printf("This is main function!\n");
    int data = nOneC();
    char a = printing();

    printf("This is from n1c fun: %d\n",data);
    printf("This is from printing fun: %c",a);
//    printf("This is from n1c fun: %d\n",nOneC());
//    printf("This is from printing fun: %c",printing());

    return 0;
}

int nOneC(){

    return 10;
}

char printing(){

    return 'a';
}
// void ဖြင့် ကြေငြာထားလျှင် return မပြန်ပါ
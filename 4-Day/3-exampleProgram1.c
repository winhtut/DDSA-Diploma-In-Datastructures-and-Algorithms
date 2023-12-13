//
// Created by National Cyber City on 12/12/2023.
//

#include "stdio.h"



int main(){

    int aungaung_mark[6];
    int mgmg_mark[6];
    int kk_mark[6];

//    int i=0;
//    for(i=0; i<6; i++){
//        printf("Enter mark for subject :%d:",i+1);
//        scanf("%d",&aungaung_mark[i]);
//
//        printf("Enter mark for subject :%d:",i+1);
//        scanf("%d",&mgmg_mark[i]);
//
//        printf("Enter mark for subject :%d:",i+1);
//        scanf("%d",&kk_mark[i]);
//
//    }
//
//    for(i=0; i<6 ; i++){
//        printf("Mark1: %d\n",aungaung_mark[i]);
//        printf("Mark1: %d\n",mgmg_mark[i]);
//        printf("Mark1: %d\n",kk_mark[i]);
//
//        printf("\n");
//    }

    int students=3;

    for(int i=0; i<students ; i++ ){

        if(i==0){
            for(int xx=0; xx<6; xx++){
                printf("Enter Mark for subject %d:",xx+1);
                scanf("%d",&aungaung_mark[xx]);
            }
        }else if(i==1){
            for(int xx=0; xx<6; xx++){
                printf("Enter Mark for subject %d:",xx+1);
                scanf("%d",&mgmg_mark[xx]);
            }
        } else{

            for(int xx=0; xx<6; xx++){
                printf("Enter Mark for subject %d:",xx+1);
                scanf("%d",&kk_mark[xx]);
            }
        }

    }


}

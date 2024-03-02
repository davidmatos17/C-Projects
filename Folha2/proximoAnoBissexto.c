#include<stdio.h>
// 2.11 CODEX

int bissexto(int n){

    if(n%4==0){
        if((n%100==0) && !(n%400==0)){
            //printf("True\n");
            return 0;
        }
       // printf("False");
        return 1;
    }     
    return 0;  
}

int prox_bissexto(int n){

    while(bissexto(n)==0){
        n += 1;
    }
    return n;
}

int main(void){
    printf("%d\n", prox_bissexto(2017));
    return 0;
}
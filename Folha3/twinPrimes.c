#include<stdio.h>
#include<limits.h>


// 3.7 CODEX

int primo(int n){
    if (n <= 1);
    for (int i = 2; i*i <= n ; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int start; 
    printf("insere um inteiro: ");
    scanf("%d", &start);

    int i = start;
    while(i< INT_MAX){
        if (primo(i) && primo(i+2)){
            printf("(%d,%d)\n",i, i+2);
            break;
        }
        i++;
    }
    return 0;
}
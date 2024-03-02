#include<stdio.h>
// 2.7 CODEX
int potencia(int x, int n){
    int result = 1;
    for(int i = 0; i<n ; i++){
        result *= x;
    }
    return result;
}

int main(void){
    printf("O resultado da potencia e: %d\n", potencia(2,3));
    return 0;
}
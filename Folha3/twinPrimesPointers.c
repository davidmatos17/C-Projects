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

void twinPrimes(int n, int *first, int *second){
    *first = -1;
    *second = -1;
    for (int i = n; i <= INT_MAX -2;i++){
        if (primo(i) && primo(i+2)){
            *first = i;
            *second = i+2;
            return;
    }
    
}
}

int main(void){
    int valor;
    scanf("%d", &valor);
    int first ;
    int second;
    twinPrimes(valor, &first, &second);
    printf("(%d,%d)\n", first, second);
    return 0;
}
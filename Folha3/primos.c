#include<stdio.h>


int primo(int n){
    for (int i = 2; i*i <= n ; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}


int main(void){
    int limit;
    scanf("%d", &limit);
    for(int i = 2; i<= limit; i++){
        if (primo(i)){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

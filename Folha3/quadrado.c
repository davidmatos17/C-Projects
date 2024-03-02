#include<stdio.h>
// 3.8

int quadrado(int n){
    int soma = 0;
    int count = 0;
    for (int k = 1; k< n ; k += 2){
        soma += k;
        count += 1;
        if (count * count == n ){break;}
    }
    if(n == soma){
        return 1;
    }
    return 0;
}

int main(void){
    int valor;
    scanf("%d", &valor);
    printf("%d\n", quadrado(valor));
    return 0;
}
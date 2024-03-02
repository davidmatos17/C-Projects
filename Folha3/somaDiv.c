#include<stdio.h>
// 3.3

int somaDiv(int n){
    int soma = 0;
    for (int i = 1 ; i < n ; i++ ){
        if (n % i == 0){
            soma += i;
        }
    }
    return soma;
}
int main(){
    int valor;
    scanf("%d", &valor);
    printf("%d\n", somaDiv(valor));
    return 0;
}
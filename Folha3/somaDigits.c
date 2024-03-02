#include<stdio.h>
// 3.12

int soma_digitos(int n){
    int soma = 0;
    while(n != 0){
        soma += n%10;
        n /= 10;
    }
    return soma;
}
int main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n\n", soma_digitos(n));
    return 0;
}
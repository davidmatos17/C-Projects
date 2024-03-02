#include<stdio.h>

int main(void){
    int valor;
    printf("Qual a quantia em Euros?\n");
    scanf("%d", &valor);
    int notas20 = 0 ;
    int notas10 = 0 ;
    int notas5 = 0 ;
    int moedas1 = 0 ;
    
    notas20 += valor / 20;
    valor -= 20 *notas20; 
    
    notas10 += valor / 10;
    valor -= 10 *notas10;
   
    notas5 +=  valor / 5;
    valor -= 5 * notas5;

    moedas1 = valor;
    valor -= moedas1;
    
    printf("notas EUR 20: %d\n notas EUR 10: %d\n notas EUR 5: %d\n moedas EUR 1: %d\n", notas20, notas10, notas5, moedas1);
    return 0;
}
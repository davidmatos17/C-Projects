#include<stdio.h>
// 3.5

int gcd (int a , int b){
    int temp;
    while(b!=0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int mmc(int a, int b){
    int result = (a*b)/gcd(a,b);
    return result; 
}

int main(void){
    int valor1;
    int valor2;
    scanf("%d",&valor1);
    scanf("%d",&valor2);
    printf("%d\n", mmc(valor1, valor2));
    return 0;
}
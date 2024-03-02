#include<stdio.h>
// 3.9

int gcd (int a , int b){
    int temp;
    int count = 0;
    while(b!=0){
        temp = b;
        b = a % b;
        a = temp;
        count++;
        printf("mdc(%d,%d) = ", a,b);        
    }
    printf("%d\n%d iteracoes \n\n\n",a, count);
    return a;
}

int main(void){
    int x , y;
    scanf("%d %d", &x, &y);
    gcd(x,y);
    return 0 ;
}
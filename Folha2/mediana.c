#include<stdio.h>
// 2.6 CODEX 
int mediana(int a, int b, int c){
    if((a>=b && a<= c) || (a>=c && a<=b)){
        return a;
    }
    else if((b>=a && b<= c) || (b>=c && b<=a)){
        return b;
    }
    else{
        return c;
    }


}


int main(void){
    int a,b,c;
    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &a,&b,&c);
    
    printf("A mediana dos valores e: %d\n",mediana(a,b,c));
    return 0;

}
#include<stdio.h>
// 3.11

int fibonacci(int n){
    int result = 0;
    if (n == 0){
        result = 0;
    }
    else if (n==1){
        result = 1;
    }
    else{
        result = fibonacci(n-1)+fibonacci(n-2);
    }
    return result;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}
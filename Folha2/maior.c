#include<stdio.h>

int main(void){
    int a, b, c, maior;
    scanf("%d %d %d", &a , &b, &c);
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    maior = arr[0];
    for(int i = 0 ; i<3 ; i++){
        if (arr[i] > maior){
            maior = arr[i];
        }
    }
    printf("%d\n", maior);
    return 0;
}

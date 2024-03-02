#include<stdio.h>
// 2.9
int main(void){
    int x;
    scanf("%d", &x);
    printf("%d: ",x);
    while (x % 2 == 0){
        printf("%d ", 2);
        x = x / 2;
    }

    // Quando deixa de ser divisivel por 2 entao x e impar
    for (int i = 3; i <= x; i+2){
        while(x % i ==0 ){
            printf("%d ", i);
            x = x / i;
        }
    }
    printf("\n");
    return 0;
}
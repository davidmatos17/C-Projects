#include<stdio.h>
// 2.8 
int main(void){
    int media = 0;
    int input;
    int elems = 0;
    scanf("%d", &input);

    while(input != 0){
        media += input;
        scanf("%d", &input);
        elems++;
    }
    int result;
    result = media / elems;
    printf("o resultado e : %d\n", result);
    return 0;
}
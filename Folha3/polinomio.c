#include<stdio.h>
// 3.1
int calcula(int x){
    int result = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    return result;
}

int main(){
    int valor;
    scanf("%d", &valor);
    printf("the value is: %d\n", calcula(valor));
    return 0;
}




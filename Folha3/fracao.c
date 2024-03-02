#include<stdio.h>
// 3.4

int gcd (int a , int b){
    int temp;
    while(b!=0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main(void){
    int den, num, den1, num1;
    scanf("%d %d", &num, &den);
    den1 = den / gcd(den, num);
    num1 = num / gcd(den,num);
    printf("%d/%d\n", num1 , den1);
    return 0 ;

}
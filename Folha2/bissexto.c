#include<stdio.h>
// 2.10

int bissexto(int n){

    if(n%4==0){
        if((n%100==0) && (!n%400==0)){
            //printf("True\n");
            return 0;
        }
       // printf("False");
        return 1;
    }       
}
int main(void){
    printf("%d\n",bissexto(1700));
    return 0;
}
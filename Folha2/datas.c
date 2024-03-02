#include<stdio.h>
// 2.12
int fevereiro = 28;
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
int converter(int dia, int mes, int ano){
    if (bissexto(ano)){
        fevereiro = 29;
        if (mes == 2){
            if (dia == 29){
                dia = 1;
                mes += 1;
            }

        } 
        
    }
    else{
        if (dia = 31){
            if (mes=12){
                ano +=1;
                dia = 1;
                mes = 1;
            }
            else {
               dia = 1;
               mes += 1; 
            }
        }

    }
    return dia, mes, ano;
}
int main(void){

    printf(converter(2,3,2024));
    return 0;
}
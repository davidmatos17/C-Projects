#include <stdio.h>
#define PI 3.14159265359
int main(){
    float raio;
    scanf("%f", &raio);
    float result = (4.0 / 3.0) * PI *raio*raio*raio;
    printf("volume da esfera = %f", result);
    return 0 ;

}
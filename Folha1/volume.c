#include <stdio.h>
float l, w, h;
int main(){
    scanf("%f", &l);
    scanf("%f", &w);
    scanf("%f", &h);
    float result = w*l*h;
    printf("L=? W=? H=? LxWxH: %f*%f*%f (cm))\n", l, w, h);
    printf("Volume: %f (cm^3)", result);
    return 0 ;
}
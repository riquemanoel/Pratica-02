#include <stdio.h>

int main(){

    float media, gas, dist;

    printf("Media de consumo (km/l): ");
    scanf("%f", &media);

    printf("Gasolina no tanque (l): ");
    scanf("%f", &gas);

    dist = media * gas;

    printf("- Distancia percorrida = %.1f", dist);

    return 0;
}
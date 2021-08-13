#include <stdio.h>

int main(){

    int valor, quadrado, cubo;

    printf("Digite um numero: ");
    scanf("%i", &valor);

    quadrado = valor * valor;
    cubo = valor * valor * valor;

    printf("\n- quadrado = %i\n", quadrado);
    printf("- cubo = %i \n", cubo); 

    return 0;
}

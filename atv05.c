#include <stdio.h>

int main(){

    float c, f;

    printf("Digite a temperatura em Celcius (*C): ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;

    printf("\n- Temperatura em fahrenheit = %.1f", f);

    return 0;
}

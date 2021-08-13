


#include <stdio.h>

int main(){

    int num, soma, n1, n2, n3;

    printf("Digite um numero (3 digitos): ");
    scanf("%i", &num);


    n1 = num / 100;
    n2 = (num % 100) / 10;
    n3 = (num % 100) % 10;

    soma = n1 + n2 + n3 ;

    printf("\n- Soma = %i + %i + %i = %i", n1, n2, n3, soma);



    return 0;
}

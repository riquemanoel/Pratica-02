#include <stdio.h>

int main(){

    char l1, l2, l3;

    printf("Digite tres letras: ");
    scanf("%c %c %c", &l1, &l2, &l3);

    printf("\n- Combinacao 1 = %c%c%c", l1, l2, l3);
    printf("\n- Combinacao 2 = %c%c%c", l1, l3, l2);
    printf("\n- Combinacao 3 = %c%c%c", l2, l1, l3);
    printf("\n- Combinacao 4 = %c%c%c", l2, l3, l1);
    printf("\n- Combinacao 5 = %c%c%c", l3, l1, l2);
    printf("\n- Combinacao 6 = %c%c%c", l3, l2, l1);

    return 0;
}
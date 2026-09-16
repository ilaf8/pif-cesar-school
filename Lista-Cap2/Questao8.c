#include <stdio.h>

int main(void) {
    int numero;
    int quadrado;
    double decima_parte;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    quadrado = numero * numero;
    decima_parte = numero / 10.0;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);

    return 0;
}


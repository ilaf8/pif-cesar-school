#include <stdio.h>

int main(void) {
    int primeiro, segundo;

    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &primeiro, &segundo) != 2) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    printf("Soma: %d\n", primeiro + segundo);
    printf("Subtracao: %d\n", primeiro - segundo);
    printf("Multiplicacao: %d\n", primeiro * segundo);

    /* O denominador deve ser diferente de zero antes de realizar a divisao. */
    segundo != 0
        ? printf("Divisao real: %.2f\n", (double)primeiro / segundo)
        : printf("Divisao real: indefinida, pois o divisor e zero.\n");

    return 0;
}


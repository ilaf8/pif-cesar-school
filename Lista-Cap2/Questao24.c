#include <stdio.h>

int main(void) {
    double velocidade_kmh, velocidade_ms;

    printf("Digite a velocidade em km/h: ");
    if (scanf("%lf", &velocidade_kmh) != 1) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    velocidade_ms = velocidade_kmh / 3.6;

    printf("Velocidade em m/s: %.2f\n", velocidade_ms);

    return 0;
}


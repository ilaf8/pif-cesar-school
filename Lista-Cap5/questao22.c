#include <stdio.h>
#include "areas.h"

int main(void) {
    float raio, base, altura;

    printf("Digite o raio do circulo: ");
    if (scanf("%f", &raio) != 1 || raio < 0.0f) {
        printf("Raio invalido.\n");
        return 1;
    }

    printf("Digite base e altura: ");
    if (scanf("%f %f", &base, &altura) != 2 || base < 0.0f || altura < 0.0f) {
        printf("Base ou altura invalida.\n");
        return 1;
    }

    printf("Area do circulo: %.2f\n", A_CIRC(raio));
    printf("Area do retangulo: %.2f\n", A_RET(base, altura));
    printf("Area do triangulo: %.2f\n", A_TRI(base, altura));
    return 0;
}

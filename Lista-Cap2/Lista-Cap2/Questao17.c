#include <stdio.h>

int main(void) {
    const double PI = 3.141593;
    double raio, area, circunferencia;

    printf("Digite o raio do circulo: ");
    if (scanf("%lf", &raio) != 1 || raio < 0.0) {
        fprintf(stderr, "Raio invalido.\n");
        return 1;
    }

    area = PI * raio * raio;
    circunferencia = 2.0 * PI * raio;

    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);

    return 0;
}


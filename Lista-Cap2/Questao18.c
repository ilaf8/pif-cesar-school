#include <stdio.h>

int main(void) {
    const double PI = 3.141593;
    double raio, area_superficie, volume;

    printf("Digite o raio da esfera: ");
    if (scanf("%lf", &raio) != 1 || raio < 0.0) {
        fprintf(stderr, "Raio invalido.\n");
        return 1;
    }

    area_superficie = 4.0 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Area da superficie: %.2f\n", area_superficie);
    printf("Volume: %.2f\n", volume);

    return 0;
}


#include <stdio.h>

int main(void) {
    double lado, base, altura;
    double area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    if (scanf("%lf", &lado) != 1) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    printf("Digite a base e a altura do retangulo/triangulo: ");
    if (scanf("%lf %lf", &base, &altura) != 2) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    area_quadrado = lado * lado;
    area_retangulo = base * altura;
    area_triangulo = (base * altura) / 2.0;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo retangulo: %.2f\n", area_triangulo);

    return 0;
}


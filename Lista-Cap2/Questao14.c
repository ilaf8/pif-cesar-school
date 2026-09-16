#include <math.h>
#include <stdio.h>

int main(void) {
    double a, b, c, semiperimetro, area;

    printf("Digite os tres lados do triangulo: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    if (a <= 0.0 || b <= 0.0 || c <= 0.0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        fprintf(stderr, "Os lados informados nao formam um triangulo valido.\n");
        return 1;
    }

    semiperimetro = (a + b + c) / 2.0;
    area = sqrt(semiperimetro *
                (semiperimetro - a) *
                (semiperimetro - b) *
                (semiperimetro - c));

    printf("Semiperimetro: %.2f\n", semiperimetro);
    printf("Area do triangulo: %.2f\n", area);

    return 0;
}


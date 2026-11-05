/* Questão 19 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    printf("Digite os três lados do triângulo: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 ||
        !isfinite(a) || !isfinite(b) || !isfinite(c)) {
        printf("Erro: entrada inválida!\n");
        return 1;
    }
    if (a <= 0 || b <= 0 || c <= 0 ||
        a >= b + c || b >= a + c || c >= a + b) {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
        return 1;
    }
    if (a == b && b == c) {
        printf("Equilátero\n");
    } else if (a == b || a == c || b == c) {
        printf("Isósceles\n");
    } else {
        printf("Escaleno\n");
    }
    return 0;
}

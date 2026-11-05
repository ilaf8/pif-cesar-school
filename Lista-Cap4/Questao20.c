/* Questão 20 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, delta, x1, x2;
    printf("Digite os coeficientes a, b e c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 ||
        !isfinite(a) || !isfinite(b) || !isfinite(c)) {
        printf("Erro: coeficientes inválidos!\n");
        return 1;
    }
    if (a == 0) {
        printf("Erro: a deve ser diferente de zero!\n");
        return 1;
    }
    delta = b * b - 4 * a * c;
    if (!isfinite(delta)) {
        printf("Erro: delta fora do limite numérico!\n");
        return 1;
    }
    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
    return 0;
}

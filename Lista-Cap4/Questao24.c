/* Questão 24 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite os três ângulos inteiros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Erro: entrada inválida!\n");
        return 1;
    }
    /* A conversão evita estouro ao somar entradas inteiras grandes. */
    if (a <= 0 || b <= 0 || c <= 0 || (long long)a + b + c != 180) {
        printf("Erro: os ângulos não formam um triângulo!\n");
        return 1;
    }
    if (a == 90 || b == 90 || c == 90) {
        printf("Retângulo\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Obtusângulo\n");
    } else {
        printf("Acutângulo\n");
    }
    return 0;
}

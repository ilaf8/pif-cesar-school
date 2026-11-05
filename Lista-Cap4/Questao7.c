/* Questão 7 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double numero;
    printf("Digite um número real: ");
    if (scanf("%lf", &numero) != 1 || !isfinite(numero)) {
        printf("Erro: número inválido!\n");
        return 1;
    }
    if (numero >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(numero));
    } else {
        printf("Quadrado: %.2f\n", numero * numero);
    }
    return 0;
}

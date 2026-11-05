/* Questão 10 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    int numero;
    printf("Digite um número inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Erro: entrada inválida!\n");
        return 1;
    }
    if (numero % 2 == 0) {
        printf("PAR\n");
    } else {
        printf("ÍMPAR\n");
    }
    if (numero > 0) {
        printf("POSITIVO\n");
    } else if (numero < 0) {
        printf("NEGATIVO\n");
    } else {
        printf("ZERO\n");
    }
    return 0;
}

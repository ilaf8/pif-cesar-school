/* Questão 22 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>
#include <math.h>

int main(void) {
    float valor;
    double aliquota;
    int estado;
    printf("Digite o valor do produto: ");
    if (scanf("%f", &valor) != 1 || !isfinite(valor) || valor <= 0) {
        printf("Erro: valor inválido!\n");
        return 1;
    }
    printf("Estado de destino: 1 - MG | 2 - SP | 3 - RJ | 4 - MS\n");
    if (scanf("%d", &estado) != 1) {
        printf("Erro: entrada inválida!\n");
        return 1;
    }
    switch (estado) {
        case 1: aliquota = 0.07; break;
        case 2: aliquota = 0.12; break;
        case 3: aliquota = 0.15; break;
        case 4: aliquota = 0.08; break;
        default: printf("Erro: estado inválido!\n"); return 1;
    }
    printf("Preço final com imposto: R$ %.2f\n", valor * (1 + aliquota));
    return 0;
}

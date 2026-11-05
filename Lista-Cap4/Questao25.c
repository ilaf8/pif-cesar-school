/* Questão 25 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    int valor, entregue, troco, restante;
    int notas100, notas50, notas20, notas10, notas5, notas2;
    printf("Digite o valor a pagar e o valor entregue (reais inteiros): ");
    if (scanf("%d %d", &valor, &entregue) != 2 || valor <= 0 || entregue <= 0) {
        printf("Erro: informe valores inteiros positivos!\n");
        return 1;
    }
    if (entregue < valor) {
        printf("Erro: valor entregue insuficiente!\n");
        return 1;
    }
    troco = entregue - valor;
    if (troco == 0) {
        printf("Não há troco.\n");
        return 0;
    }
    /* As demais cédulas são múltiplas de 5. Escolhemos de 0 a 4 notas
       de 2 para que o restante seja múltiplo de 5. Cinco notas de 2
       podem ser substituídas por uma de 10, reduzindo a quantidade.
       O inverso de 2 módulo 5 é 3: (2 * 3) % 5 == 1. */
    notas2 = ((troco % 5) * 3) % 5;
    restante = troco - notas2 * 2;
    if (restante < 0) {
        printf("Erro: não é possível formar o troco exato com as cédulas disponíveis!\n");
        return 1;
    }
    notas100 = restante / 100;
    restante %= 100;
    notas50 = restante / 50;
    restante %= 50;
    notas20 = restante / 20;
    restante %= 20;
    notas10 = restante / 10;
    restante %= 10;
    notas5 = restante / 5;
    printf("Troco: R$ %d\n", troco);
    printf("Cédulas de R$ 100: %d\n", notas100);
    printf("Cédulas de R$ 50: %d\n", notas50);
    printf("Cédulas de R$ 20: %d\n", notas20);
    printf("Cédulas de R$ 10: %d\n", notas10);
    printf("Cédulas de R$ 5: %d\n", notas5);
    printf("Cédulas de R$ 2: %d\n", notas2);
    printf("Total de cédulas: %d\n", notas100 + notas50 + notas20 + notas10 + notas5 + notas2);
    return 0;
}

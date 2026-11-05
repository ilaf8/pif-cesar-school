/* Questão 8 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    int ano;
    printf("Digite um ano positivo: ");
    if (scanf("%d", &ano) != 1 || ano <= 0) {
        printf("Erro: ano inválido!\n");
        return 1;
    }
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }
    return 0;
}

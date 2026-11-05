/* Questão 28 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    int opcao;
    printf("1 - Consultar Saldo\n2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n4 - Falar com Atendente\n");
    if (scanf("%d", &opcao) != 1) {
        printf("Erro: entrada inválida!\n");
        return 1;
    }
    switch (opcao) {
        case 1: printf("Direcionando para consulta de saldo.\n"); break;
        case 2: printf("Direcionando para emissão de extrato.\n"); break;
        case 3: printf("Direcionando para transferência.\n"); break;
        case 4: printf("Direcionando para atendimento com um atendente.\n"); break;
        default: printf("Erro: opção inválida!\n"); return 1;
    }
    return 0;
}

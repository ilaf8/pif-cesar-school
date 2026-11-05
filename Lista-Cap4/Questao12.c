/* Questão 12 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    int dia;
    printf("Digite o dia da semana (1 a 7): ");
    if (scanf("%d", &dia) != 1) {
        printf("Erro: entrada inválida!\n");
        return 1;
    }
    switch (dia) {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda-feira\n"); break;
        case 3: printf("Terça-feira\n"); break;
        case 4: printf("Quarta-feira\n"); break;
        case 5: printf("Quinta-feira\n"); break;
        case 6: printf("Sexta-feira\n"); break;
        case 7: printf("Sábado\n"); break;
        default: printf("Erro: Opção Inválida!\n"); return 1;
    }
    return 0;
}

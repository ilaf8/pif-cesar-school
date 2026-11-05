/* Questão 23 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    int dia, mes, ano, dias_mes;
    const char *nome_mes;
    printf("Digite dia, mês e ano (exemplo: 25 12 2026): ");
    if (scanf("%d %d %d", &dia, &mes, &ano) != 3 || ano <= 0) {
        printf("Erro: data inválida!\n");
        return 1;
    }
    switch (mes) {
        case 1: nome_mes = "janeiro"; dias_mes = 31; break;
        case 2:
            nome_mes = "fevereiro";
            if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
                dias_mes = 29;
            } else {
                dias_mes = 28;
            }
            break;
        case 3: nome_mes = "março"; dias_mes = 31; break;
        case 4: nome_mes = "abril"; dias_mes = 30; break;
        case 5: nome_mes = "maio"; dias_mes = 31; break;
        case 6: nome_mes = "junho"; dias_mes = 30; break;
        case 7: nome_mes = "julho"; dias_mes = 31; break;
        case 8: nome_mes = "agosto"; dias_mes = 31; break;
        case 9: nome_mes = "setembro"; dias_mes = 30; break;
        case 10: nome_mes = "outubro"; dias_mes = 31; break;
        case 11: nome_mes = "novembro"; dias_mes = 30; break;
        case 12: nome_mes = "dezembro"; dias_mes = 31; break;
        default: printf("Erro: mês inválido!\n"); return 1;
    }
    if (dia < 1 || dia > dias_mes) {
        printf("Erro: dia inválido para o mês e ano informados!\n");
        return 1;
    }
    printf("%d de %s de %d\n", dia, nome_mes, ano);
    return 0;
}

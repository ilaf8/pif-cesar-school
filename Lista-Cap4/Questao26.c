/* Questão 26 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    int mes, ano, dias;
    const char *nome_mes;
    printf("Digite o mês (1 a 12) e o ano: ");
    if (scanf("%d %d", &mes, &ano) != 2 || ano <= 0) {
        printf("Erro: entrada inválida!\n");
        return 1;
    }
    switch (mes) {
        case 1: nome_mes = "Janeiro"; dias = 31; break;
        case 2:
            nome_mes = "Fevereiro";
            if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        case 3: nome_mes = "Março"; dias = 31; break;
        case 4: nome_mes = "Abril"; dias = 30; break;
        case 5: nome_mes = "Maio"; dias = 31; break;
        case 6: nome_mes = "Junho"; dias = 30; break;
        case 7: nome_mes = "Julho"; dias = 31; break;
        case 8: nome_mes = "Agosto"; dias = 31; break;
        case 9: nome_mes = "Setembro"; dias = 30; break;
        case 10: nome_mes = "Outubro"; dias = 31; break;
        case 11: nome_mes = "Novembro"; dias = 30; break;
        case 12: nome_mes = "Dezembro"; dias = 31; break;
        default: printf("Erro: mês inválido!\n"); return 1;
    }
    printf("%s de %d possui %d dias.\n", nome_mes, ano, dias);
    return 0;
}

/* Questão 27 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    int horas;
    double total;
    printf("Digite o número de horas inteiras de permanência: ");
    if (scanf("%d", &horas) != 1 || horas < 0) {
        printf("Erro: tempo inválido!\n");
        return 1;
    }
    if (horas <= 2) {
        total = horas * 2.0;
    } else if (horas <= 4) {
        total = 4.0 + (horas - 2) * 2.5;
    } else {
        total = 9.0 + (horas - 4) * 3.0;
    }
    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor final: R$ %.2f\n", total);
    return 0;
}

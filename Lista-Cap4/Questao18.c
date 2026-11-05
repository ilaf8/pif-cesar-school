/* Questão 18 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>
#include <math.h>

int main(void) {
    int opcao;
    double temperatura, convertida;
    printf("1 - Celsius para Fahrenheit\n2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n4 - Kelvin para Celsius\n");
    if (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 4) {
        printf("Erro: opção inválida!\n");
        return 1;
    }
    printf("Digite a temperatura de entrada: ");
    if (scanf("%lf", &temperatura) != 1 || !isfinite(temperatura)) {
        printf("Erro: temperatura inválida!\n");
        return 1;
    }
    switch (opcao) {
        case 1:
            convertida = temperatura * 1.8 + 32;
            printf("Temperatura convertida: %.2f °F\n", convertida);
            break;
        case 2:
            convertida = temperatura + 273.15;
            printf("Temperatura convertida: %.2f K\n", convertida);
            break;
        case 3:
            convertida = (temperatura - 32) / 1.8;
            printf("Temperatura convertida: %.2f °C\n", convertida);
            break;
        case 4:
            convertida = temperatura - 273.15;
            printf("Temperatura convertida: %.2f °C\n", convertida);
            break;
        default: printf("Erro: opção inválida!\n"); return 1;
    }
    return 0;
}

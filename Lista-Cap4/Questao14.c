/* Questão 14 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    float nota;
    int faltas;
    char conceito;
    printf("Digite a nota final e o número de faltas: ");
    if (scanf("%f %d", &nota, &faltas) != 2 ||
        !(nota >= 0 && nota <= 10) || faltas < 0) {
        printf("Erro: nota ou quantidade de faltas inválida!\n");
        return 1;
    }
    if (nota >= 9.0f) {
        if (faltas <= 20) { conceito = 'A'; }
        else { conceito = 'B'; }
    } else if (nota >= 7.5f) {
        if (faltas <= 20) { conceito = 'B'; }
        else { conceito = 'C'; }
    } else if (nota >= 5.0f) {
        if (faltas <= 20) { conceito = 'C'; }
        else { conceito = 'D'; }
    } else if (nota >= 4.0f) {
        if (faltas <= 20) { conceito = 'D'; }
        else { conceito = 'E'; }
    } else {
        conceito = 'E';
    }
    printf("Conceito %c\n", conceito);
    return 0;
}

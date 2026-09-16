#include <stdio.h>

int main(void) {
    double salario_base, gratificacao, imposto, salario_liquido;

    printf("Digite o salario-base: R$ ");
    if (scanf("%lf", &salario_base) != 1 || salario_base < 0.0) {
        fprintf(stderr, "Salario invalido.\n");
        return 1;
    }

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_liquido = salario_base + gratificacao - imposto;

    /* Formula equivalente: salario_liquido = salario_base * (1 + 0.05 - 0.07). */
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}


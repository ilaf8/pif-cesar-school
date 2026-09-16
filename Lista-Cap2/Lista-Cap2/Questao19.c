#include <stdio.h>

int main(void) {
    const double VALOR_DIARIA = 30.00;
    const double ALIQUOTA_IR = 0.08;
    int dias_trabalhados;
    double valor_bruto, imposto, valor_liquido;

    printf("Digite o numero de dias trabalhados: ");
    if (scanf("%d", &dias_trabalhados) != 1 || dias_trabalhados < 0) {
        fprintf(stderr, "Quantidade de dias invalida.\n");
        return 1;
    }

    valor_bruto = dias_trabalhados * VALOR_DIARIA;
    imposto = valor_bruto * ALIQUOTA_IR;
    valor_liquido = valor_bruto - imposto;

    printf("Valor bruto: R$ %.2f\n", valor_bruto);
    printf("Imposto de renda: R$ %.2f\n", imposto);
    printf("Valor liquido: R$ %.2f\n", valor_liquido);

    return 0;
}


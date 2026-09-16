#include <stdio.h>

int main(void) {
    const double VALOR_HORA_NORMAL = 10.00;
    const double VALOR_HORA_EXTRA = 15.00;
    const double LIMITE_ISENCAO = 12000.00;
    const double ALIQUOTA = 0.10;
    double horas_normais, horas_extras;
    double salario_bruto, valor_excedente, imposto, salario_liquido;

    printf("Digite as horas normais trabalhadas no ano: ");
    if (scanf("%lf", &horas_normais) != 1 || horas_normais < 0.0) {
        fprintf(stderr, "Quantidade de horas normais invalida.\n");
        return 1;
    }

    printf("Digite as horas extras trabalhadas no ano: ");
    if (scanf("%lf", &horas_extras) != 1 || horas_extras < 0.0) {
        fprintf(stderr, "Quantidade de horas extras invalida.\n");
        return 1;
    }

    salario_bruto = horas_normais * VALOR_HORA_NORMAL
                  + horas_extras * VALOR_HORA_EXTRA;

    valor_excedente = salario_bruto > LIMITE_ISENCAO
                    ? salario_bruto - LIMITE_ISENCAO
                    : 0.0;
    imposto = valor_excedente * ALIQUOTA;
    salario_liquido = salario_bruto - imposto;

    printf("Salario anual bruto: R$ %.2f\n", salario_bruto);
    printf("Parcela acima da isencao: R$ %.2f\n", valor_excedente);
    printf("Imposto devido: R$ %.2f\n", imposto);
    printf("Salario anual liquido: R$ %.2f\n", salario_liquido);

    return 0;
}


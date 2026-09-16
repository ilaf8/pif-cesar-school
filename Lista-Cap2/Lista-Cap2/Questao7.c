#include <stdio.h>

int main(void) {
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    if (scanf("%d/%d/%d", &dia, &mes, &ano) != 3) {
        fprintf(stderr, "Data invalida. Use o formato dd/mm/aaaa.\n");
        return 1;
    }

    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0) {
        fprintf(stderr, "Os valores informados estao fora dos limites esperados.\n");
        return 1;
    }

    printf("Data invertida: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}


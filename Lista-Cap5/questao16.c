#include <stdio.h>

int ehBissexto(int ano);

int main(void) {
    int ano;

    printf("Digite um ano: ");
    if (scanf("%d", &ano) != 1 || ano <= 0) {
        printf("Ano invalido.\n");
        return 1;
    }

    if (ehBissexto(ano)) {
        printf("%d eh bissexto.\n", ano);
    } else {
        printf("%d nao eh bissexto.\n", ano);
    }

    return 0;
}

int ehBissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

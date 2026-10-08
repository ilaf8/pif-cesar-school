#include <stdio.h>

int main(void) {
    int valor;
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int quantidades[6] = {0};
    int total = 0;
    printf("Informe o valor inteiro do saque: ");
    if (scanf("%d", &valor) != 1 || valor <= 0) {
        printf("Erro: o saque deve ser um inteiro positivo.\n");
        return 1;
    }
    if (valor == 1 || valor == 3) {
        printf("Nao e possivel compor esse valor com as cedulas disponiveis.\n");
        return 1;
    }

    int restante = valor;
    for (int i = 0; i < 6; i++) {

        while (restante >= cedulas[i] && restante - cedulas[i] != 1 && restante - cedulas[i] != 3) {
            restante -= cedulas[i];
            quantidades[i]++;
            total++;
        }
    }

    printf("Saque de R$ %d:\n", valor);
    for (int i = 0; i < 6; i++) {
        printf("Cedulas de R$ %3d: %d\n", cedulas[i], quantidades[i]);
    }
    printf("Total de cedulas: %d\n", total);
    return 0;
}

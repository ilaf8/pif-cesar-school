#include <stdio.h>

int ehPar(int n);

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (ehPar(numero)) {
        printf("%d eh par.\n", numero);
    } else {
        printf("%d eh impar.\n", numero);
    }

    return 0;
}

int ehPar(int n) {
    return n % 2 == 0;
}

#include <stdio.h>

int ehPrimo(int n);

int main(void) {
    int numero, i;

    printf("Digite um inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (ehPrimo(numero)) {
        printf("%d eh primo.\n", numero);
    } else {
        printf("%d nao eh primo.\n", numero);
    }

    printf("Numeros primos de 1 a 50:\n");
    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

int ehPrimo(int n) {
    int divisor;

    if (n < 2) {
        return 0;
    }

    // Evita multiplicar divisor por divisor e ultrapassar int.
    for (divisor = 2; divisor <= n / divisor; divisor++) {
        if (n % divisor == 0) {
            return 0;
        }
    }

    return 1;
}

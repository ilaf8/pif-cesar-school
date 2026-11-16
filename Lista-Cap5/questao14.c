#include <stdio.h>

int somaDigitos(int n);

int main(void) {
    int numero;

    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &numero) != 1 || numero <= 0) {
        printf("Digite um inteiro maior que zero.\n");
        return 1;
    }

    printf("Soma dos digitos: %d\n", somaDigitos(numero));
    return 0;
}

int somaDigitos(int n) {
    // Caso base: quando nao ha mais digitos, a soma eh zero.
    if (n == 0) {
        return 0;
    }

    // Passo recursivo: ultimo digito mais a soma dos restantes.
    return (n % 10) + somaDigitos(n / 10);
}

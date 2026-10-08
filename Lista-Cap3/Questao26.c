#include <stdio.h>

int main(void) {
    int a, b;
    int encontrou = 0;
    long long int soma = 0;
    printf("Informe os inteiros positivos A e B (A < B): ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0 || a >= b) {
        printf("Erro: A e B devem ser positivos, com A < B.\n");
        return 1;
    }

    printf("Primos no intervalo: ");
    for (long long int numero = a; numero <= b; numero++) {
        int primo = numero > 1;
        for (long long int divisor = 2; divisor <= numero / divisor; divisor++) {
            if (numero % divisor == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%lld ", numero);
            soma += numero;
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("nenhum");
    }
    printf("\nSoma dos primos: %lld\n", soma);
    return 0;
}

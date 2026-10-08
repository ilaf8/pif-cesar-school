#include <stdio.h>

int main(void) {
    long long int soma = 0;
    for (int numero = 1; numero <= 100; numero++) {
        int quadrado = numero * numero;
        printf("%d -> %d\n", numero, quadrado);
        soma += quadrado;
    }
    printf("Soma total dos quadrados: %lld\n", soma);
    return 0;
}

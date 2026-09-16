#include <stdio.h>

int main(void) {
    int numero, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    /* As copias preservam o numero original. Depois, somente -- e ++ sao usados. */
    antecessor = numero;
    sucessor = numero;
    --antecessor;
    ++sucessor;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}


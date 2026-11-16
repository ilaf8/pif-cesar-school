#include <stdio.h>
#include <limits.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);
int limiteFatorial(void);

int main(void) {
    int n, limite;
    long iterativo, recursivo;

    limite = limiteFatorial();
    printf("Digite um inteiro de 0 a %d: ", limite);
    if (scanf("%d", &n) != 1 || n < 0 || n > limite) {
        printf("Valor invalido ou fatorial muito grande para long.\n");
        return 1;
    }

    iterativo = fatorialIterativo(n);
    recursivo = fatorialRecursivo(n);

    printf("Fatorial iterativo: %ld\n", iterativo);
    printf("Fatorial recursivo: %ld\n", recursivo);
    printf("Resultados %s.\n", iterativo == recursivo ? "iguais" : "diferentes");
    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * fatorialRecursivo(n - 1);
}

// Encontra o maior n cujo fatorial cabe no tipo long desta maquina.
int limiteFatorial(void) {
    long resultado = 1;
    int n = 1;

    while (n < 100 && resultado <= LONG_MAX / (n + 1)) {
        n++;
        resultado *= n;
    }

    return n;
}

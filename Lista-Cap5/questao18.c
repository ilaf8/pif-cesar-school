#include <stdio.h>
#include <limits.h>

long potencia(int base, int expoente);
int potenciaCabeEmLong(int base, int expoente);

int main(void) {
    int base, expoente;

    printf("Digite a base e o expoente: ");
    if (scanf("%d %d", &base, &expoente) != 2 || expoente < 0 || expoente > 10000) {
        printf("Entrada invalida: o expoente deve estar entre 0 e 10000.\n");
        return 1;
    }

    if (!potenciaCabeEmLong(base, expoente)) {
        printf("Resultado muito grande para o tipo long.\n");
        return 1;
    }

    printf("Resultado: %ld\n", potencia(base, expoente));
    return 0;
}

long potencia(int base, int expoente) {
    // Caso base: qualquer base elevada a zero resulta em 1.
    if (expoente == 0) {
        return 1;
    }

    // Passo recursivo: multiplica a base pela potencia de expoente menor.
    return (long)base * potencia(base, expoente - 1);
}

// Evita overflow ao testar a multiplicacao antes do calculo recursivo.
int potenciaCabeEmLong(int base, int expoente) {
    long resultado = 1;
    int i;

    for (i = 0; i < expoente; i++) {
        if (base > 0 && (resultado > LONG_MAX / base || resultado < LONG_MIN / base)) {
            return 0;
        }
        if (base < -1 && (resultado > LONG_MIN / base || resultado < LONG_MAX / base)) {
            return 0;
        }
        if (base == -1 && resultado == LONG_MIN) {
            return 0;
        }
        resultado *= base;
    }

    return 1;
}

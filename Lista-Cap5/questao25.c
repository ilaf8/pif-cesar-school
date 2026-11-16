#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int a, b;

    printf("Digite dois inteiros positivos: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        printf("Digite dois valores positivos.\n");
        return 1;
    }

    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    simplifica(a, b);
    return 0;
}

int mdc(int a, int b) {
    // Caso base do algoritmo de Euclides.
    if (b == 0) {
        return a;
    }

    // Passo recursivo.
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    printf("Fracao original: %d/%d\n", num, den);
    printf("Fracao simplificada: %d/%d\n", num / divisor, den / divisor);
}

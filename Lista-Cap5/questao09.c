#include <stdio.h>

int maior(int a, int b);

int main(void) {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Maior numero: %d\n", maior(a, b));
    return 0;
}

int maior(int a, int b) {
    return (a >= b) ? a : b;
}

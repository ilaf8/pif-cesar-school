#include <stdio.h>

int soma(int a, int b);

int main(void) {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Soma: %d\n", soma(a, b));
    return 0;
}

int soma(int a, int b) {
    return a + b;
}

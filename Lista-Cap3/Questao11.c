#include <stdio.h>

int main(void) {
    int a, b;
    printf("Informe os inteiros A e B: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    int passo = a <= b ? 1 : -1;
    int numero = a;
    while (1) {
        printf("%d", numero);
        if (numero == b) {
            break;
        }
        printf(" ");
        numero += passo;
    }
    printf("\n");
    return 0;
}

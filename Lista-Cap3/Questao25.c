#include <stdio.h>

int main(void) {
    int n;
    int divisores = 0;
    printf("Informe um inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erro: N deve ser um inteiro positivo.\n");
        return 1;
    }

    for (int d = 1; d <= n / d; d++) {
        if (n % d == 0) {
            divisores++;
            if (d != n / d) {
                divisores++;
            }
        }
    }
    printf("Quantidade de divisores: %d\n", divisores);
    if (n > 1 && divisores == 2) {
        printf("%d e primo.\n", n);
    } else {
        printf("%d nao e primo.\n", n);
    }
    return 0;
}

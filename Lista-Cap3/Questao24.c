#include <stdio.h>

int main(void) {
    int n;
    printf("Informe uma dimensao impar (3 a 19): ");
    if (scanf("%d", &n) != 1 || n < 3 || n > 19 || n % 2 == 0) {
        printf("Erro: N deve ser impar e estar entre 3 e 19.\n");
        return 1;
    }

    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna < n; coluna++) {
            if (linha == coluna || linha + coluna == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

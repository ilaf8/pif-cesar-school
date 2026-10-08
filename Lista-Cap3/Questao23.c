#include <stdio.h>

int main(void) {
    int lado;
    printf("Informe o lado do quadrado (3 a 20): ");
    if (scanf("%d", &lado) != 1 || lado < 3 || lado > 20) {
        printf("Erro: o lado deve estar entre 3 e 20.\n");
        return 1;
    }

    for (int linha = 0; linha < lado; linha++) {
        for (int coluna = 0; coluna < lado; coluna++) {
            if (linha == 0 || linha == lado - 1 || coluna == 0 || coluna == lado - 1) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

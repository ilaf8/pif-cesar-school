#include <stdio.h>

int main(void) {
    int caractere;

    printf("Digite um caractere e pressione Enter: ");

    do {
        caractere = getchar();
    } while (caractere == '\n' || caractere == '\r');

    if (caractere == EOF) {
        fprintf(stderr, "Nao foi possivel ler um caractere.\n");
        return 1;
    }

    printf("Caractere lido: ");
    putchar(caractere);
    putchar('\n');

    return 0;
}


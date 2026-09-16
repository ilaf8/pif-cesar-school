#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite um caractere: ");
    if (scanf(" %c", &caractere) != 1) {
        fprintf(stderr, "Nao foi possivel ler o caractere.\n");
        return 1;
    }

    /* O numero exibido representa o codigo associado ao caractere na tabela ASCII. */
    printf("Caractere: %c\n", caractere);
    printf("Codigo ASCII: %d\n", (unsigned char)caractere);

    return 0;
}


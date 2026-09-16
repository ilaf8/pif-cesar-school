#include <stdio.h>

int main(void) {
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula: ");
    if (scanf(" %c", &maiuscula) != 1) {
        fprintf(stderr, "Nao foi possivel ler a letra.\n");
        return 1;
    }

    if (maiuscula < 'A' || maiuscula > 'Z') {
        fprintf(stderr, "O caractere informado nao e uma letra maiuscula de A a Z.\n");
        return 1;
    }

    minuscula = (char)(maiuscula - 'A' + 'a');

    printf("Letra minuscula: %c\n", minuscula);

    return 0;
}


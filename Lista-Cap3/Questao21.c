#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char palpite;
    int tentativas = 0;
    srand((unsigned int)time(NULL));
    char secreta = (char)(rand() % 26 + 'a');

    do {
        printf("Adivinhe a letra secreta (a a z): ");
        if (scanf(" %c", &palpite) != 1) {
            return 0;
        }
        if (palpite < 'a' || palpite > 'z') {
            printf("Entrada invalida. Use uma letra minuscula de a a z.\n");
            continue;
        }
        tentativas++;
        if (palpite < secreta) {
            printf("A letra secreta vem depois no alfabeto.\n");
        } else if (palpite > secreta) {
            printf("A letra secreta vem antes no alfabeto.\n");
        }
    } while (palpite != secreta);

    printf("Parabens! Voce acertou a letra %c.\n", secreta);
    printf("Total de tentativas: %d\n", tentativas);
    return 0;
}

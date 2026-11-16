#include <stdio.h>

int somaAteN(int n);

int main(void) {
    int n;

    printf("Digite um inteiro nao negativo: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 65535) {
        printf("Digite um inteiro entre 0 e 65535 para evitar overflow.\n");
        return 1;
    }

    // Com DEBUG definido, somaAteN mostra cada resultado parcial.
    // Sem DEBUG, mostra somente o resultado final.
    printf("Soma de 1 a %d: %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;

    for (i = 1; i <= n; i++) {
        soma += i;
        #ifdef DEBUG
        printf("Passo %d: soma parcial = %d\n", i, soma);
        #endif
    }

    return soma;
}

// Compilar no modo normal:
// gcc -std=c11 -Wall -Wextra questao24.c -o questao24
// Compilar no modo de depuracao:
// gcc -std=c11 -Wall -Wextra -DDEBUG questao24.c -o questao24_debug

#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(void) {
    printf("Macro sem parenteses: %d\n", DOBRO(2 + 3));
    printf("Funcao dobro: %d\n", dobro(2 + 3));

    // A macro original se expande para 2 + 3 * 2, resultando em 8.
    // Na funcao, 2 + 3 eh calculado antes da chamada, resultando em 10.

    #undef DOBRO
    #define DOBRO(x) ((x) * 2)

    printf("Macro corrigida: %d\n", DOBRO(2 + 3));
    return 0;
}

int dobro(int x) {
    return x * 2;
}

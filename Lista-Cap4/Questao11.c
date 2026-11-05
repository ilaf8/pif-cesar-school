/* Questão 11 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    int a, b, c, auxiliar;
    printf("Digite três números inteiros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Erro: entrada inválida!\n");
        return 1;
    }
    if (a > b) {
        auxiliar = a;
        a = b;
        b = auxiliar;
    }
    if (a > c) {
        auxiliar = a;
        a = c;
        c = auxiliar;
    }
    if (b > c) {
        auxiliar = b;
        b = c;
        c = auxiliar;
    }
    printf("Valores ordenados: %d %d %d\n", a, b, c);
    if (a == b || b == c) {
        printf("Há valores repetidos: a ordem não pode ser estritamente crescente.\n");
    }
    return 0;
}
